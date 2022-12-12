#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int length = strlen (s);
    char* answer;
    if (length % 2)
    {
        answer = (char *)malloc (sizeof (char) * 2);
        answer[0] = s[length / 2];
        answer[1] = '\0';
    }
    else
    {
        answer = (char *)malloc (sizeof (char) * 3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        answer[2] = '\0';
    }

    return answer;
}
