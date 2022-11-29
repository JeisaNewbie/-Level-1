#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int count , answer = 0;
    int i = 1;
    while (left <= right)
    {
        while (left >= i)
        {
            if (!(left % i))
                count++;
            i++;
        }
        answer = count % 2 ? answer - left : answer + left;
        count = 0;
        i = 1;
        left++;
    }
    return answer;
}
