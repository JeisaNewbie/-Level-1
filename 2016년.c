#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int     month[] = {0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    char    *day[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    char    *answer;
    int     idx = b;
    
    for (int i = 0; i <= a; i++)
        idx += month[i];
    
    answer = day[idx % 7];
    
    return answer;
}
