#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver(2000, 11, 12, 10);

String destination = "ZONE_D";

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
    uint8_t buf[20];
    uint8_t buflen = sizeof(buf);

    if (driver.recv(buf, &buflen))
    {
        String zone = "";

        for (int i = 0; i < buflen; i++)
        {
            zone += (char)buf[i];
        }

        Serial.print("Current Zone: ");
        Serial.println(zone);

        if(zone == "ZONE_A")
        {
            Serial.println("Direction: Move Right to Zone B");
        }

        else if(zone == "ZONE_B")
        {
            Serial.println("Direction: Move Forward to Zone C");
        }

        else if(zone == "ZONE_C")
        {
            Serial.println("Direction: Move Left to Zone D");
        }

        else if(zone == destination)
        {
            Serial.println("Destination Reached");
        }

        Serial.println();
    }
}