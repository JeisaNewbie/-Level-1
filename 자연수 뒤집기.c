#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long number = n;
    int length = 1;

    while (number /= 10)
        length++;
    
    int* answer = (int*)malloc(sizeof (int) * length);
    
    for (int i = 0; i < length; i++)
    {
        answer[i] = (int)(n % 10);
        n /= 10;
    }
    
    return answer;
}
