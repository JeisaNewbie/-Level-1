#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int return_point (const char *characters, int *choice)
{
    int     negative[3] = {-3, -2, -1};
    if (characters[0] + characters[1] == 'R' + 'T')
    {
        if (!(*choice / 4))
            *choice = negative[*choice - 1];
        if (characters[0] == 'T')
            *choice *= -1;
        return (0);
    }
    else if (characters[0] + characters[1] == 'C' + 'F')
    {
        if (!(*choice / 4))
            *choice = negative[*choice - 1];
        if (characters[0] == 'F')
            *choice *= -1;
        return (1);
    }
    else if (characters[0] + characters[1] == 'J' + 'M')
    {
        if (!(*choice / 4))
            *choice = negative[*choice - 1];
        if (characters[0] == 'M')
            *choice *= -1;
        return (2);
    }
    else if (characters[0] + characters[1] == 'A' + 'N')
    {
        if (!(*choice / 4))
            *choice = negative[*choice - 1];
        if (characters[0] == 'N')
            *choice *= -1;
        return (3);
    }
    else 
        return (4);
}
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    char*   answer = (char*)malloc(sizeof (char) * 5);
    char    character[9] = "RCJATFMN";
    int     point[4] = {0,};
    int     j;

    if (survey_len >= 1001 || choices_len >= 1001 || !(survey_len == choices_len))
        return ("Length Over");
    if (survey_len == 0 || choices_len == 0)
        return ("0 Length");
    for (size_t i = 0; i < survey_len; i++)
    {
        if (choices[i] < 1 || choices[i] > 7)
            return ("Incorrect Choise");
        j = return_point (survey[i], &choices[i]);
        if (j == 4)
            return ("Incorrect Character");
        point[j] += choices[i] % 4;   
    }
    for (int i = 0; i < 4; i++)
    {
        answer[i] = character[i]; 
        if (point[i] > 0)
            answer[i] = character[i+4];
    }
    answer[4] = '\0';
    return answer;
}
