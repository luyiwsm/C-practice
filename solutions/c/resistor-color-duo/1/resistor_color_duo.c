#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t r[]) {
    // 计算逻辑没问题，但建议加上强制类型转换，避免编译器警告
    return (uint16_t)(r[0] * 10 + r[1]);    
}