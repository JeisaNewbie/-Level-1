#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long   answer = 0;
    int         tmp;
    
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    
    for (; a <= b; a++)
        answer += a;
    
    return answer;
}
