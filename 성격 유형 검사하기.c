#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    char*   answer = (char*)malloc(sizeof (char) * 5);
    char    character[9] = "RCJATFMN";
    int     negative[3] = {-3, -2, -1};
    int     point[4] = {0,};

    if (survey_len >= 1001 || choices_len >= 1001 || !(survey_len == choices_len))
        return ("Length Over");
    if (survey_len == 0 || choices_len == 0)
        return ("0 Length");
    for (int i = 0; i < survey_len; i++)
    {
        if (choices[i] < 1 || choices[i] > 7)
            return ("Incorrect Choise"); 
        if (survey[i][0] + survey[i][1] == 'R' + 'T')
        {
            if (!(choices[i] / 4))
                choices[i] = negative[choices[i] - 1];
            if (survey[i][0] == 'T')
                choices[i] *= -1; 
            point[0] += choices[i] % 4;
        }
        else if (survey[i][0] + survey[i][1] == 'C' + 'F')
        {
            if (!(choices[i] / 4))
                choices[i] = negative[choices[i] - 1];
            if (survey[i][0] == 'F')
                choices[i] *= -1;
            point[1] += choices[i] % 4;
        }    
        else if (survey[i][0] + survey[i][1] == 'J' + 'M')
        {
            if (!(choices[i] / 4))
                choices[i] = negative[choices[i] - 1];
            if (survey[i][0] == 'M')
                choices[i] *= -1;
            point[2] += choices[i] % 4;
        }
        else if (survey[i][0] + survey[i][1] == 'A' + 'N')
        {
            if (!(choices[i] / 4))
                choices[i] = negative[choices[i] - 1];
            if (survey[i][0] == 'N')
                choices[i] *= -1;
            point[3] += choices[i] % 4;
        }
        else
            return ("Incorrect Character");   
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
