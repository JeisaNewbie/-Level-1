#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
    int *answer;
    int arr[201] = {0,};들어올수 있는 의 최대값은 100이고, 둘을 더한 값은 200이기 때문에 배열을 201만큼 생성. 두개의 수를 뽑았을 때의 합과 같은 인덱스에 1을 초기화.
    int biggest = 0;//최대값을 저장하여 for문에서 최대값까지 탐색할수 있도록 하기 위해서. 
    int count = 0;//총 몇개의 수가 중복 없이 나왔는지 카운트 하기 위해서. 
    for (int i = 0; i + 1 < numbers_len; i++)
    {
        for (int j = i + 1; j < numbers_len; j++)
        {
            if (!arr[numbers[i] + numbers[j]])
            {
                arr[numbers[i] + numbers[j]] = 1;
                count++;
            }
            if (biggest < numbers[i] + numbers[j])
                biggest = numbers[i] + numbers[j];
        }
    }
    answer = (int *)malloc (sizeof (int) * count);
    count = 0;
    for (int i = 0; i <= biggest; i++)
    {
        if (arr[i])
            answer[count++] = i;
    }
    return answer;
}
