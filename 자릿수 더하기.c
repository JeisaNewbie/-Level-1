#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (answer = 0; n > 0; n /= 10)
        answer += n % 10;
    
    return answer;
}
