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

#include "TextLayer.h"

void TextLayer::setText(const String &s) {
  if (s != _text) {
    _text = s;
    markDirty();
  }
}

void TextLayer::setColor(const Color &color) {
  if (color != _color) {
    _color = color;
    markDirty();
  }
}

void TextLayer::setBackgroundColor(const Color &bgColor) {
  if (bgColor != _bgColor) {
    _bgColor = bgColor;
    markDirty();
  }
}

void TextLayer::setFont(const Font &font) {
  if (font != _font) {
    _font = font;
    markDirty();
  }
}

void TextLayer::paint(GC &gc) {
  Layer::paint(gc);

  Point o = getOrigin();
  gc.drawText(o, _font, _color, _bgColor, _text);
}
