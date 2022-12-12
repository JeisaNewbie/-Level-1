#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char    *answer = (char*)malloc(sizeof (char) * 4);
    int     month[] = {0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30}; //1월부터 11월까지 초기화. 만약 2월이 들어오면 1월 == 31일 을 더해줘야 하기 때문에 month[2] = 31
    char    *day[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};  //1월 1일은 금요일, 2월 5일은 31 + 5 = 36, 36 % 7 = 1 -> 금요일
    int     idx = b;
    int     i;
    
    for (i = 0; i <= a; i++) 
        idx += month[i];
    
    for (i = 0; i < 4; i++)
        answer[i] = day[idx % 7][i]; 
    
    answer[4] = '\0';

    return answer;
}
