#include "Avventura.h"

void setup() {
	Serial.begin(9600);
	Serial.println("We're going on an adventure");

	EsploraTFT.begin();
	EsploraTFT.background(0, 0, 255);
}

void loop() {
}