#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(2);
    int arr[46] = {0,};//win_nums의 수에 해당하는 인덱스의 값을 1로 변경, 그 후 lottos의 값에 해당하는 인덱스의 값이 1이면 count_win++, -1이면 다음값 탐색, 만약 if (lottos[i] == 0), count_zero++;
    int count_win = 0;
    int count_zero = 0;//0 갯수에 따라 count_win + count_zero로 순위 조정

    for (size_t i = 0; i < win_nums_len; i++)
        arr[win_nums[i]] = 1;
    for (size_t i = 0; i < lottos_len; i++)
    {
        if (!lottos[i])
            count_zero++;
        else if (arr[lottos[i]])
            count_win++;
    }
    answer[0] = count_win + count_zero == 0 ?  6 : 7 - (count_win + count_zero);
    answer[1] = count_win == 0 ? 6 : 7 - count_win;
    return answer;
}
