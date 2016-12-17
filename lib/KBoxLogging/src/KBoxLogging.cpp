/*
  The MIT License

  Copyright (c) 2016 Thomas Sarlandie thomas@sarlandie.net

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <Arduino.h>
#include <stdarg.h>

#include <KBoxLogging.h>

// Instantiate the shared instance that will be used.
KBoxLoggingClass KBoxLogging;

static int strrpos(const char *string, char c) {
  int index = -1;
  for (int i = 0; string[i] != 0; i++) {
    if (string[i] == c) {
      index = i;
    }
  }
  return index;
}

void KBoxLoggingClass::setOutputStream(Stream *stream) {
  oStream = stream;
}

void KBoxLoggingClass::log(enum KBoxLogging level, const char *fname, int lineno, const char *fmt, ... ) {
  if (!oStream) {
    return;
  }

  int lastSlash = strrpos(fname, '/');
  if (lastSlash > 0) {
    fname = fname + lastSlash + 1;
  }
  oStream->print(logLevelPrefixes[level]);
  oStream->print(" ");
  oStream->print(fname);
  oStream->print(":");
  oStream->print(lineno);
  oStream->print(" ");

  // resulting string limited to 128 chars
  char tmp[128];
  va_list args;
  va_start (args, fmt );
  vsnprintf(tmp, 128, fmt, args);
  va_end (args);

  oStream->println(tmp);
}
