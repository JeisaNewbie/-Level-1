#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char) * (n * 3) + 1);
    
    char su[] = "수"; // vs코드는 한글문자열을 2바이트에 나눠서 저장, 프로그래머스는 3바이트에 나눠서 저장.
    char back[] = "박";
    for (int i = 0; i < n*3; i+=3)
    {
        if (!(i % 6))
        {
            answer[i] = su[0];
            answer[i + 1] = su[1];
            answer[i + 2] = su[2];
        }
        else
        {
            answer[i] = back[0];
            answer[i + 1] = back[1];
            answer[i + 2] = back[2];
        } 
    }
    answer[n * 3] = '\0';
    return answer;
}
