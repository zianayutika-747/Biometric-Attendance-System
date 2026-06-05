#include <EEPROM.h>

const int buttonPin = 2;
const int ledPin = 8;

int attendanceCount = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  // Read stored attendance count
  attendanceCount = EEPROM.read(0);

  Serial.println("================================");
  Serial.println("BIOMETRIC ATTENDANCE SYSTEM");
  Serial.println("System Ready");
  Serial.print("Stored Attendance Count: ");
  Serial.println(attendanceCount);
  Serial.println("================================");
}

void loop() {

  if (digitalRead(buttonPin) == LOW) {

    attendanceCount++;

    // Save count to EEPROM
    EEPROM.write(0, attendanceCount);

    digitalWrite(ledPin, HIGH);

    Serial.println("------------------------");
    Serial.print("Employee ID : ");
    Serial.println("101");

    Serial.print("Attendance No : ");
    Serial.println(attendanceCount);

    Serial.println("Status : PRESENT");
    Serial.println("------------------------");

    delay(1000);

    digitalWrite(ledPin, LOW);

    while (digitalRead(buttonPin) == LOW);
  }
}
