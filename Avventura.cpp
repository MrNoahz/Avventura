#include "Avventura.h";

Avventura::Avventura() : TFT_ST7735(__CS, __DC, __RST) {
	pinMode(5, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
}

void Avventura::begin() {
	TFT_ST7735::begin();
}

void Avventura::fillScreen(uint8_t r, uint8_t g, uint8_t b) {
	TFT_ST7735::fillScreen(Avventura::rgbToHex(r, g, b));
}

uint16_t Avventura::rgbToHex(uint8_t r, uint8_t g, uint8_t b) {
	return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3);
}