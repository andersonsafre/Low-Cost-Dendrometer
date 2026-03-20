#include <RTClib.h>
#include "LowPower.h"
#include <SD.h>

int analogPin = A0;
int sensorValue = 0;

RTC_DS3231 rtc;
File dataFile;

void wakeup();

void setup() {
  Serial.begin(9600);
  
  rtc.begin();
  SD.begin();
  pinMode(3, INPUT_PULLUP);
  
  
  ///rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  
  
  rtc.clearAlarm(1);
  rtc.setAlarm1(
    rtc.now() + TimeSpan(0, 0, 0, 5),
    DS3231_A1_Second
  );

  
}

void loop() {
  DateTime now = rtc.now();
  sensorValue = analogRead(analogPin);
  int distance = sensorValue;  
  int inv_value = 1023 - sensorValue;

  Serial.print(now.timestamp(DateTime::TIMESTAMP_FULL));
  Serial.print(", ");
  Serial.print("Sensor Value: ");
  Serial.println(inv_value);

  
  
  dataFile = SD.open(("data.txt"),FILE_WRITE);   
  if (dataFile){
    dataFile.print(now.timestamp(DateTime::TIMESTAMP_FULL));
    dataFile.print(", ");
    dataFile.println(distance);
  
    dataFile.close();
    }
  
  
  // Set the alarm to trigger again in 10 seconds
  rtc.setAlarm1(
    rtc.now() + TimeSpan(0, 0, 0, 5),
    DS3231_A1_Second
  );
  
  
  delay(1000);


  rtc.clearAlarm(1);

  
  attachInterrupt(digitalPinToInterrupt(3), wakeup, FALLING);
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF); 
  
}

void wakeup() {
  
  detachInterrupt(0);  // Detach interrupt to avoid continuous wake-ups
  // Clear the alarm flag
  
}
