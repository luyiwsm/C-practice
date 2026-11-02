#include "collatz_conjecture.h"
int steps(int start){
    int count = 0;
    while(1){
                if(start == 1)return count;
        if(start <= 0)return -1;
        if (start%2 == 0){
            start /= 2;
            //count++;
        }
        else{
            start = 3 * start + 1;
        }

        count++;
        
    }
}
