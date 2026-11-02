#include "grains.h"
uint64_t square(uint8_t index){
    uint64_t count = 1;
    if(index == 1)return 1;
    while(index - 1){
        count = 2 * count;
        index--;
    };
    return count;
}
uint64_t total(void){
    uint8_t index = 64;
    uint64_t sum = 0;
    while(index){
        sum += square(index);
        index--;
    };
    return sum;
}