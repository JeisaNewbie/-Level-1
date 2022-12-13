#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int i = 0;
    
    while (i != 0 || n >= a)
    {
        answer += (n / a) * b;
        if (n % a)
            i = n % a;
        n = (n / a) * b;
        n += i;
        i = 0;
    }
    
    return answer;
}
