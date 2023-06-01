#ifndef __ARDUINO_SCIENCEKITCARRIER_BLE_CONFIG_H__
#define __ARDUINO_SCIENCEKITCARRIER_BLE_CONFIG_H__

#ifndef __BLE_CONFIG_H__
#define __BLE_CONFIG_H__

#include <ArduinoBLE.h>

const int VERSION = 0x00000001;

#define SCIENCE_KIT_UUID(val) ("555a0003-" val "-467a-9538-01f0652c74e8")
BLEService                     service                    (SCIENCE_KIT_UUID("0000"));
BLEUnsignedIntCharacteristic   versionCharacteristic      (SCIENCE_KIT_UUID("0001"), BLERead);
BLEFloatCharacteristic         currentCharacteristic      (SCIENCE_KIT_UUID("1001"), BLENotify);
BLEFloatCharacteristic         voltageCharacteristic      (SCIENCE_KIT_UUID("1002"), BLENotify);
BLEFloatCharacteristic         resistanceCharacteristic   (SCIENCE_KIT_UUID("1003"), BLENotify);
BLECharacteristic              lightCharacteristic        (SCIENCE_KIT_UUID("1004"), BLENotify, 4 * sizeof(long));
BLEUnsignedIntCharacteristic   proximityCharacteristic    (SCIENCE_KIT_UUID("1005"), BLENotify);
BLECharacteristic              accelerationCharacteristic (SCIENCE_KIT_UUID("1006"), BLENotify, 3 * sizeof(float));
BLECharacteristic              gyroscopeCharacteristic    (SCIENCE_KIT_UUID("1007"), BLENotify, 3 * sizeof(float));
BLECharacteristic              magnetometerCharacteristic (SCIENCE_KIT_UUID("1008"), BLENotify, 3 * sizeof(float));
BLEFloatCharacteristic         temperatureCharacteristic  (SCIENCE_KIT_UUID("1009"), BLENotify);
BLEFloatCharacteristic         pressureCharacteristic     (SCIENCE_KIT_UUID("1010"), BLENotify);
BLEFloatCharacteristic         humidityCharacteristic     (SCIENCE_KIT_UUID("1011"), BLENotify);
BLEUnsignedIntCharacteristic   sndIntensityCharacteristic (SCIENCE_KIT_UUID("1012"), BLENotify);
BLEUnsignedIntCharacteristic   sndPitchCharacteristic     (SCIENCE_KIT_UUID("1013"), BLENotify);
BLEUnsignedIntCharacteristic   inputACharacteristic     (SCIENCE_KIT_UUID("1016"), BLENotify);
BLEUnsignedIntCharacteristic   inputBCharacteristic     (SCIENCE_KIT_UUID("1017"), BLENotify);



#endif