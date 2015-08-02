////////////////////////////////////////////////
///  Arduino to Quartz Composer              ///
///  by Matti Niinim�ki                      ///
///  originalhamsters.com                    ///
////////////////////////////////////////////////


#include <NewPing.h>

#define TRIGGER_PIN  9  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 500// Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.


void setup(){
Serial.begin(115200);    //Set the Baud Rate. Recommended rates: 9600, 14400, 19200, 28800, 38400, 57600, or 115200.
}

void loop (){
 delay(500);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  Serial.print(uS / US_ROUNDTRIP_CM); // Convert ping time to distance in cm and print result (0 = outside set distance range)

Serial.print("\n");



}

