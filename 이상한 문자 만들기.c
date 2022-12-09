#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char    *answer = strdup (s);
    
    for (int i = 0; answer[i] != 0; i++)
    {
        for (int check_odd = 0; answer[i] != ' '; check_odd++)
        {
            if (!(check_odd % 2))
                answer[i] = 'a' <= answer[i] && answer[i] <= 'z' ? answer[i] - 32 : answer[i];
            else
                answer[i] = 'A' <= answer[i] && answer[i] <= 'Z' ? answer[i] + 32 : answer[i];
            i++;
            if (!answer[i])
            return answer;
        }
    }
    return answer;
}
