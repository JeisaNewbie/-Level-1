#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    while (a_len)
    {
        answer += a[a_len - 1] * b[a_len - 1];
        a_len--;
    }
    return answer;
}
