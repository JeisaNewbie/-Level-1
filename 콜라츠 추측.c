#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long number = num; //계산중 int 를 넘어선 범위가 나옴
    
    if (num == 1)
        return (0);
    
    while (number != 1 && answer <= 500)
    {
        if (number % 2)
        {
            number = number * 3 + 1;
            answer++;
        }
        number /= 2;
        answer++;
    }
    
    return answer <= 500 ? answer : -1;
}
