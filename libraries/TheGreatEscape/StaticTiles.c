/**
 * $7F00: Static tiles: tiles used to draw fixed screen elements like medals.
 */

#include "ZXSpectrum/ZXSpectrum.h"

#include "TheGreatEscape/StaticTiles.h"

const static_tile_t static_tiles[75] =
{
  { { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_WHITE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x09, 0x0C } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xE0, 0x50, 0x10, 0x58 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x08, 0x0C, 0x09, 0x07, 0x01, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x98, 0x3C, 0x7C, 0xFB, 0xFC, 0x6F, 0x17, 0x16 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x07, 0x0A, 0x08, 0x1C } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xC0, 0xA0, 0x10, 0x50 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x19, 0x3C, 0x3E, 0xDF, 0x3F, 0xF6, 0xE8, 0x68 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x10, 0xB0, 0x10, 0xE0, 0x80, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x68, 0xE8, 0xF6, 0x3F, 0xDF, 0x3E, 0x3C, 0x18 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x80, 0xE0, 0x90, 0x30, 0x90 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x19, 0x08, 0x0A, 0x07, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x30, 0x10, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x01, 0x07, 0x08, 0x0C, 0x09 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x16, 0x17, 0x6F, 0xFC, 0xFB, 0x7C, 0x3C, 0x18 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x0C, 0x08, 0x05, 0x03, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x98, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x10, 0x10, 0x91, 0x42, 0x5A, 0x24, 0x18, 0x24 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x18, 0x24, 0x52, 0x52, 0x91, 0x10, 0x10, 0x10 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x10, 0x0C, 0x02, 0xFD, 0x01, 0x02, 0x0C, 0x10 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x04, 0x18, 0xA0, 0x57, 0x50, 0xA0, 0x18, 0x04 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x02, 0x01, 0x00, 0xFF, 0x00, 0x00, 0x01, 0x02 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x83, 0x54, 0xAA, 0x2A, 0x54, 0x83, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x80, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x80 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0xFE, 0x38, 0x38, 0x3E, 0x38 } }, attribute_WHITE_OVER_BLACK },
  { { { 0x3A, 0x3A, 0x3A, 0x3A, 0x3A, 0x3A, 0x3A, 0x3A } }, attribute_WHITE_OVER_BLACK },
  { { { 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C } }, attribute_WHITE_OVER_BLACK },
  { { { 0x7C, 0x7C, 0x7C, 0x7A, 0xB5, 0x74, 0x7A, 0xFB } }, attribute_WHITE_OVER_BLACK },
  { { { 0x00, 0x00, 0x10, 0x49, 0x49, 0xD5, 0xD4, 0xFD } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x42, 0xA4, 0x2A, 0x5A, 0xBD } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0xD0, 0xA6 } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x0A, 0x24, 0x55, 0xDB } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x1F, 0x08, 0x06, 0x06 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xBA, 0xBA } }, attribute_WHITE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x30, 0xCE, 0xCE } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x18, 0xE6, 0xE6 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xFF, 0x28, 0xC6, 0xC6 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0xF8, 0x10, 0xE0, 0xE0 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xCE, 0xCE, 0xCE, 0xCE, 0xCE, 0xCE, 0xCE, 0xCE } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x06, 0x06, 0x06, 0x06, 0x02, 0x04, 0x07, 0x00 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x00, 0xBA, 0xBA, 0xBA, 0xBA, 0x00, 0xFF, 0x10 } }, attribute_WHITE_OVER_BLACK },
  { { { 0xCE, 0xCE, 0xCE, 0xCE, 0x86, 0x48, 0xCF, 0x00 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xE6, 0xE6, 0xE6, 0xE6, 0xC2, 0x24, 0xE7, 0x00 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xC6, 0xC6, 0xC6, 0xC6, 0x82, 0x44, 0xC7, 0x00 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x20, 0xE0, 0x00 } }, attribute_PURPLE_OVER_BLACK },
  { { { 0x03, 0x02, 0x02, 0x02, 0x02, 0x01, 0x02, 0x02 } }, attribute_WHITE_OVER_BLACK },
  { { { 0xEF, 0x38, 0xFE, 0xAA, 0xB2, 0xFF, 0x96, 0xA2 } }, attribute_WHITE_OVER_BLACK },
  { { { 0x80, 0x81, 0x83, 0x87, 0x86, 0x0E, 0x8E, 0x86 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x7C, 0xFF, 0xC7, 0x11, 0xE0, 0x72, 0x5C, 0xA6 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x81, 0xC1, 0xC3, 0xE3, 0xE3, 0xC1 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x38, 0xFE, 0xC7, 0xAB, 0x6D, 0x01, 0x6D, 0xAB } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x8C, 0x8F, 0x8B, 0x08 } }, attribute_CYAN_OVER_BLACK },
  { { { 0xFE, 0xC6, 0x6C, 0x6C, 0x28, 0x39, 0xD7, 0x6C } }, attribute_CYAN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x01, 0x61, 0xE6, 0xA6, 0x26 } }, attribute_GREEN_OVER_BLACK },
  { { { 0x38, 0x38, 0xC6, 0xBB, 0x45, 0xBA, 0xBA, 0xBA } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0 } }, attribute_GREEN_OVER_BLACK },
  { { { 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_WHITE_OVER_BLACK },
  { { { 0xFE, 0x10, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_WHITE_OVER_BLACK },
  { { { 0x87, 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x19, 0xC7, 0xFF, 0x7C, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0xC1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0xC7, 0xFE, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x0B, 0x0F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_CYAN_OVER_BLACK },
  { { { 0xD7, 0x39, 0x28, 0x6C, 0x6C, 0xC6, 0xFE, 0x00 } }, attribute_CYAN_OVER_BLACK },
  { { { 0xA1, 0xE1, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00 } }, attribute_CYAN_OVER_BLACK },
  { { { 0x45, 0xBB, 0xC6, 0x38, 0x38, 0x00, 0x00, 0x00 } }, attribute_GREEN_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x06, 0x06 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x7E, 0xFF, 0x8F, 0x7F, 0xFF, 0xFF } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xE0 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0x06, 0xE7, 0xE7, 0x87, 0x83, 0x43, 0x41, 0x20 } }, attribute_YELLOW_OVER_BLACK },
  { { { 0xE7, 0xE7, 0xFF, 0xFF, 0xFE, 0xF9, 0xFF, 0x7E } }, attribute_YELLOW_OVER_BLACK },
};