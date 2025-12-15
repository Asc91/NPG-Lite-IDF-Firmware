#ifndef NEOPIXEL_H
#define NEOPIXEL_H
#include "common.h"

typedef enum colors {
  RED = 240,
  YELLOW = 180,
  GREEN = 120,
  CYAN = 60,
  BLUE = 0,
  MAGENTA = 300,
} color_t;

/*
 * @breif Init rmt for neopixel, should be called in main
 */
void neopixel_init();

/*
 * @breif set pixel color and brightness
 * @param uint8_t pixel_num: ID of pixel to set (0-6 for NPG-LITE)
 * @param color_t color (sets hue corrosponding to color and saturation to 100)
 * @param uint8_t brightness: brightness of pixel (0-100)
 * @return void
 */
void set_pixel(uint8_t pixel_num, color_t color, uint8_t brightness);

#endif // NEOPIXEL_H
