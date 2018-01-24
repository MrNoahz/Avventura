#include "src/Avventura.h"

Avventura avventura;

void setup() {
	Serial.begin(9600);
	Serial.println("We're going on an adventure");

	avventura.begin();

	// EsploraTFT.begin();
	// EsploraTFT.background(0, 0, 255);
}

void loop() {
}