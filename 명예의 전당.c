#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int set_ranking (int *rank, int score, int k)
{
    int last_rank = 0;
    for (int i = 0; i < k; i++)
    {
        if (rank[i] < score)
        {
            for (int j = k - 1; j > i; j--)//rank[i]보다 점수가 높다면 가장 낮은 순위부터 rank[i] 까지 역순으로 점수를 세팅
                rank[j] = rank[j - 1];
            rank[i] = score;
            break ;
        }
    }
    for (int i = k - 1; i >= 0; i--)
    {
        if (rank[i] >= 0)
        {
            last_rank = rank[i];
            return (last_rank);
        }
    }
    return (last_rank);
}

int* solution(int k, int score[], size_t score_len) {
    int *answer = (int *)calloc (score_len, sizeof(int));
    int rank[k];//score중 k순위 이상의 점수를 기록
    int idx = 0;
    while (idx < k)
        rank[idx++] = -1;
    for (int i = 0; i < score_len; i++)
    {
        if (rank[k - 1] < score[i]) //k순위보다 점수가 높을시 랭크를 다시 세팅
            answer[i] = set_ranking(rank, score[i], k);
        else
            answer[i] = rank[k - 1];
    }
    return answer;
}
