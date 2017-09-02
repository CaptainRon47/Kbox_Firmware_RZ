// This file was automatically generated by sk-code-generator.py
// DO NOT MODIFY! YOUR CHANGES WOULD BE OVERWRITTEN
// Look at ./src/common/signalk/SKUpdateSyntacticSugar.h.tmpl instead or modify the script
// Generated on 2017-09-01 20:42:55.298671

bool hasEnvironmentOutsidePressure() const {
  return hasPath(SKPathEnvironmentOutsidePressure);
};
double getEnvironmentOutsidePressure() const {
  return this->operator[](SKPathEnvironmentOutsidePressure).getNumberValue();
};
bool setEnvironmentOutsidePressure(double newValue) {
  return setValue(SKPathEnvironmentOutsidePressure, newValue);
};
bool hasElectricalBatteriesVoltage(String index) const {
  return hasPath(SKPath(SKPathElectricalBatteriesVoltage, index));
};
double getElectricalBatteriesVoltage(String index) const {
  return this->operator[](SKPath(SKPathElectricalBatteriesVoltage, index)).getNumberValue();
};
bool setElectricalBatteriesVoltage(String index, double newValue) {
  return setValue(SKPath(SKPathElectricalBatteriesVoltage, index), newValue);
};
bool hasNavigationAttitude() const {
  return hasPath(SKPathNavigationAttitude);
};
SKTypeAttitude getNavigationAttitude() const {
  return this->operator[](SKPathNavigationAttitude).getAttitudeValue();
};
bool setNavigationAttitude(SKTypeAttitude newValue) {
  return setValue(SKPathNavigationAttitude, newValue);
};
bool hasNavigationCourseOverGroundTrue() const {
  return hasPath(SKPathNavigationCourseOverGroundTrue);
};
double getNavigationCourseOverGroundTrue() const {
  return this->operator[](SKPathNavigationCourseOverGroundTrue).getNumberValue();
};
bool setNavigationCourseOverGroundTrue(double newValue) {
  return setValue(SKPathNavigationCourseOverGroundTrue, newValue);
};
bool hasNavigationHeadingMagnetic() const {
  return hasPath(SKPathNavigationHeadingMagnetic);
};
double getNavigationHeadingMagnetic() const {
  return this->operator[](SKPathNavigationHeadingMagnetic).getNumberValue();
};
bool setNavigationHeadingMagnetic(double newValue) {
  return setValue(SKPathNavigationHeadingMagnetic, newValue);
};
bool hasNavigationPosition() const {
  return hasPath(SKPathNavigationPosition);
};
SKTypePosition getNavigationPosition() const {
  return this->operator[](SKPathNavigationPosition).getPositionValue();
};
bool setNavigationPosition(SKTypePosition newValue) {
  return setValue(SKPathNavigationPosition, newValue);
};
bool hasNavigationSpeedOverGround() const {
  return hasPath(SKPathNavigationSpeedOverGround);
};
double getNavigationSpeedOverGround() const {
  return this->operator[](SKPathNavigationSpeedOverGround).getNumberValue();
};
bool setNavigationSpeedOverGround(double newValue) {
  return setValue(SKPathNavigationSpeedOverGround, newValue);
};
