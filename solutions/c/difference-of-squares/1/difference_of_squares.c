#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int number){
    unsigned int sum;
    unsigned int count = 0;
    while(number){
        count += number;
        number--;
    }
    return sum = count*count;
}
unsigned int sum_of_squares(unsigned int number){
    unsigned int square = 0;
   // unsigned int count = number;
    while(number){
        square += number*number;
        number--;
        
    }
    return square;
}
unsigned int difference_of_squares(unsigned int number){
    return - (sum_of_squares(number) - square_of_sum(number));
}