#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for (size_t i = 0; i < arr_len; i++)
        answer += arr[i];
    return answer / arr_len;
}
