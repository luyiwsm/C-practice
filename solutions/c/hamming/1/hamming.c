#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs){
    int length1 = strlen(lhs);
    int length2 = strlen(rhs);
    int hamming_count = 0;
    if(length1 != length2)return -1;
    for(int i = 0; i < length1; i++){
        if(lhs[i] != rhs[i])hamming_count++;
    }
    return hamming_count;
}