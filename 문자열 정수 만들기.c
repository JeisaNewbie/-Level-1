#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;
    int minus = 1;
    if (*s == '+' || *s == '-')
    {
        if (*s == '-')
            minus *= -1;
        *s++;
    }
    for (int i = 0; s[i] != '\0'; i++)
        answer = answer * 10 + (s[i] - '0');
    
    return answer * minus;
}
