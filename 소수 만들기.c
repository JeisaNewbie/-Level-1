#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int check_prime (int number)
{
    for (int i = 3; i < number; i++)// 짝수를 제외했기 때문에 3부터 시작.
    {
        if (!(number % i))
            return (0);
    }
    return (1);
}
/*
int check_prime (int number)
{
    for (int i = 3; i*i <= number; i +=2) // 은우님 코드 참고해서 수정한 함수.
    {
        if (!(number % i))
            return (0);
    }
    return (1);
}
*/
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    for (size_t i = 0; i < nums_len - 2; i++)
    {
        for (size_t j = i + 1; j < nums_len - 1; j++)
        {
            for (size_t k = j + 1; k < nums_len; k++)
            {
                if (!((nums[i] + nums[j] + nums[k]) % 2))//짝수는 2로 나눌수 있기 때문에 바로 넘어간다.
                    continue;
                else
                {
                    if (check_prime(nums[i] + nums[j] + nums[k]))
                        answer++;                    
                    continue;
                }
            }
        }
    }
    return answer;
}
