#ifndef LD_Font8x8_h
#define LD_Font8x8_h

#include "Arduino.h"
#include "Log.h"

/**
 * Font size is set to 8x8 pixels. Each single font is stored in array containing 8 data bytes.
 * Each data byte represents one row (horizontal position) and bits within row are creating vertical dimension.
 * So data byte on position [0] gives top row, on position [8] bottom row and [3],[4] are in the middle.
 */
const uint8_t FONT8_SIZE = 128;
const uint8_t FONT8_WIDTH = 8;
const uint8_t FONT8_HEIGHT = 8;

#define LOG_FO false

PROGMEM extern const uint8_t FONT8[FONT8_SIZE][FONT8_HEIGHT];

void font8x8_copy(uint8_t **data, uint8_t dataIdx, uint8_t fontIdx);

#endif /* LD_Font8x8_h */
