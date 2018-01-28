#ifndef Avventura_h
#define Avventura_h

// #include <Esplora.h>
// #include <TFT.h>
// #include "core/TFT.h"
#include <SPI.h>
#include "TFT_ST7735.h";
// #include <TFT_ST7735.h>

#define __CS 7
#define __DC 0
#define __RST 1

class Avventura : public TFT_ST7735 {
public:
	Avventura();
	void begin();

	void fillScreen(uint8_t r, uint8_t g, uint8_t b);

	uint16_t rgbToHex(uint8_t r, uint8_t g, uint8_t b);
};

#endif