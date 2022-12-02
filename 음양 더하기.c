#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    for (size_t i = 0; i < absolutes_len; i++)
    {
        if (signs[i] == false)
            absolutes[i] *= -1;
        answer += absolutes[i];
    }
    return answer;
}
