#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    for (size_t i = 1; i < numbers_len; i++)
        numbers[0] += numbers[i];
    return 45 - numbers[0];
}
