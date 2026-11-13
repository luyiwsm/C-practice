#include "darts.h"

int score(coordinate_t p) {
    // 直接计算距离的平方，省去 sqrt 的开销
    double distance_sq = p.x * p.x + p.y * p.y;

    // 10 的平方是 100，5 的平方是 25，1 的平方是 1
    if (distance_sq > 100.0) return 0;
    if (distance_sq > 25.0)  return 1;
    if (distance_sq > 1.0)   return 5;
    return 10;
}