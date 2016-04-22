#include <TinyGPS++.h>
#include <SoftwareSerial.h>

static const int RXPin = 10, TXPin = 11;
static const uint32_t GPSBaud = 9600;

// The TinyGPS++ object
TinyGPSPlus gps;

// The serial connection to the GPS device
SoftwareSerial ss(RXPin, TXPin);

void setup()
{
  Serial.begin(115200);
  ss.begin(GPSBaud);
}

void loop()
{
  while (ss.available() > 0)
    if (gps.encode(ss.read()))
      displayInfo();

  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println(F("No GPS detected: check wiring."));
    while(true);
  }
}

void displayInfo()
{ 
  if (gps.location.isValid())
  {
    Serial.print(gps.location.lat(), 12);
    Serial.print(F(","));
    Serial.println(gps.location.lng(), 12);
  }
  else
  {
    Serial.print(F("INVALID"));
  }
}
