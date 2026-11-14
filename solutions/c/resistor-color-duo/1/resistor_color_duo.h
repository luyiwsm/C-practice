#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#include <stdint.h> // 必须包含这个，为了使用 uint16_t

// 必须改名为 resistor_band_t
typedef enum {
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t; 

// 返回值改为 uint16_t，参数类型改为 resistor_band_t
uint16_t color_code(resistor_band_t r[]);

#endif
