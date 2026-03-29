#include <RH_ASK.h>
#include <SPI.h> 

RH_ASK driver(2000, 11, 12, 10);
// speed, rxPin, txPin, pttPin
// we only use TX here

void setup()
{
    Serial.begin(9600);

    if (!driver.init())
    {
        Serial.println("RF init failed");
    }
}

void loop()
{
    const char *msg = "ZONE_B";

    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();

    Serial.println("Sent: ZONE_A");

    delay(1000);
}