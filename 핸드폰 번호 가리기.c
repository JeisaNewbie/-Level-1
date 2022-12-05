#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* phone_number) {
    char    *answer = 0;
    int     phone_len = 0;
    while (phone_number[phone_len])
        phone_len++;
    answer = (char*)malloc(sizeof (char) * phone_len + 1);
    for (int i = 0; i < phone_len; i++)
    {
        if (i < phone_len - 4)
            answer[i] = '*';
        else
            answer[i] = phone_number[i];
    }
    
    answer[phone_len] = '\0';
    return answer;
}
