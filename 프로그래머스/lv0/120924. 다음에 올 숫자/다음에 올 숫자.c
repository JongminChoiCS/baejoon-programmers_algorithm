#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int a = common[1] - common[0];
    int b = common[2] - common[1];
    int c = common[1] / common[0];
    
    if(a == b) 
        return common[common_len - 1] + a;
    else 
        return common[common_len - 1] * c;
    
}