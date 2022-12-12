#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char    *answer = strdup (s);
    char    tmp = 0;
    
    for (int i = 0; answer[i] != '\0'; i++) //아스키코드 순으로 정렬
    {
        for (int j = i + 1; answer[j] != '\0'; j++)
        {
            if (answer[i] < answer[j])
            {
                tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
    
    return answer;
}
