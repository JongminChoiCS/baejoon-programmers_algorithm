#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int nowGetCola = 0;
    int inputCola = n;
    
    while(inputCola >= a)
    {
        nowGetCola = (inputCola / a) * b;
        answer += nowGetCola;
        inputCola = nowGetCola + inputCola % a;
    }
    
    return answer;
}