// This file was automatically generated by sk-code-generator.py
// DO NOT MODIFY! YOUR CHANGES WOULD BE OVERWRITTEN
// Look at ./src/common/signalk/SKUpdateSyntacticSugar.h.tmpl instead or modify the script
// Generated on 2017-09-11 22:30:37.776491

bool hasEnvironmentDepthBelowKeel() const {
  return hasPath(SKPathEnvironmentDepthBelowKeel);
};
double getEnvironmentDepthBelowKeel() const {
  return this->operator[](SKPathEnvironmentDepthBelowKeel).getNumberValue();
};
bool setEnvironmentDepthBelowKeel(double newValue) {
  return setValue(SKPathEnvironmentDepthBelowKeel, newValue);
};
bool hasEnvironmentDepthBelowTransducer() const {
  return hasPath(SKPathEnvironmentDepthBelowTransducer);
};
double getEnvironmentDepthBelowTransducer() const {
  return this->operator[](SKPathEnvironmentDepthBelowTransducer).getNumberValue();
};
bool setEnvironmentDepthBelowTransducer(double newValue) {
  return setValue(SKPathEnvironmentDepthBelowTransducer, newValue);
};
bool hasEnvironmentDepthBelowSurface() const {
  return hasPath(SKPathEnvironmentDepthBelowSurface);
};
double getEnvironmentDepthBelowSurface() const {
  return this->operator[](SKPathEnvironmentDepthBelowSurface).getNumberValue();
};
bool setEnvironmentDepthBelowSurface(double newValue) {
  return setValue(SKPathEnvironmentDepthBelowSurface, newValue);
};
bool hasEnvironmentDepthTransducerToKeel() const {
  return hasPath(SKPathEnvironmentDepthTransducerToKeel);
};
double getEnvironmentDepthTransducerToKeel() const {
  return this->operator[](SKPathEnvironmentDepthTransducerToKeel).getNumberValue();
};
bool setEnvironmentDepthTransducerToKeel(double newValue) {
  return setValue(SKPathEnvironmentDepthTransducerToKeel, newValue);
};
bool hasEnvironmentDepthSurfaceToTransducer() const {
  return hasPath(SKPathEnvironmentDepthSurfaceToTransducer);
};
double getEnvironmentDepthSurfaceToTransducer() const {
  return this->operator[](SKPathEnvironmentDepthSurfaceToTransducer).getNumberValue();
};
bool setEnvironmentDepthSurfaceToTransducer(double newValue) {
  return setValue(SKPathEnvironmentDepthSurfaceToTransducer, newValue);
};
bool hasEnvironmentWaterTemperature() const {
  return hasPath(SKPathEnvironmentWaterTemperature);
};
double getEnvironmentWaterTemperature() const {
  return this->operator[](SKPathEnvironmentWaterTemperature).getNumberValue();
};
bool setEnvironmentWaterTemperature(double newValue) {
  return setValue(SKPathEnvironmentWaterTemperature, newValue);
};
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
bool hasNavigationLog() const {
  return hasPath(SKPathNavigationLog);
};
double getNavigationLog() const {
  return this->operator[](SKPathNavigationLog).getNumberValue();
};
bool setNavigationLog(double newValue) {
  return setValue(SKPathNavigationLog, newValue);
};
bool hasNavigationMagneticVariation() const {
  return hasPath(SKPathNavigationMagneticVariation);
};
double getNavigationMagneticVariation() const {
  return this->operator[](SKPathNavigationMagneticVariation).getNumberValue();
};
bool setNavigationMagneticVariation(double newValue) {
  return setValue(SKPathNavigationMagneticVariation, newValue);
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
bool hasNavigationSpeedThroughWater() const {
  return hasPath(SKPathNavigationSpeedThroughWater);
};
double getNavigationSpeedThroughWater() const {
  return this->operator[](SKPathNavigationSpeedThroughWater).getNumberValue();
};
bool setNavigationSpeedThroughWater(double newValue) {
  return setValue(SKPathNavigationSpeedThroughWater, newValue);
};
bool hasNavigationTripLog() const {
  return hasPath(SKPathNavigationTripLog);
};
double getNavigationTripLog() const {
  return this->operator[](SKPathNavigationTripLog).getNumberValue();
};
bool setNavigationTripLog(double newValue) {
  return setValue(SKPathNavigationTripLog, newValue);
};