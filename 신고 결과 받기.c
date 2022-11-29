#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    int     *answer = (int *)malloc (sizeof (int) * (id_list_len));//유저순으로 인덱스를 할당 ex) {"muzi", "frodo", "apeach", "neo"}일 경우 muzi = 0번째 인덱스
    int     arr[id_list_len][id_list_len];신고자와 피신고자를 2차원배열 이용해서 기록 ex) arr[0][1] == 1이면, muzi가 frodo를 신고, 동시에 frodo 피신고 1회
    int     i = 0;
    int     j = 0;
    int     n = 0;
    int     l = 0;
    int     m = 0;
    int     check = 0;
    int     count = 0;


    for (int i = 0; i < id_list_len; i++)
    {
        answer[i] = 0;
    }

    for (int i = 0; i < id_list_len; i++)
    {
        for (int j = 0; j < id_list_len; j++)
        {
            arr[i][j] = 0;
        }
    }
    while (n < report_len)
    {
        while (id_list[i][j] == report[n][j])//신고자 확인
        {
            j++;
            if (report[n][j] == ' ' && id_list[i][j] == '\0')//신고자가 동일할시 실행
            {
                j++;//피신고자 알파벳으로 인덱스 위치 이동
                while (report[n][j + m])//피신고자 '\0'시 종료
                {
                    m = 0;
                    while ((id_list[l][m] == report[n][j + m]) && report[n][j + m] != '\0')//피신고자 확인
                    {
                        m++;
                        if (report[n][j + m] == '\0' && id_list[l][m] == '\0')//피신고자가 동일할시 실행
                            {
                                arr[i][l] = 1;
                                check = 1;//피신고자가 동일할시 기록
                            }
                    }
                    m--;//report[n][j + m]은 문자열의 끝인데 id는 끝이 아닐경우, 둘이 동일하지 않다는 뜻이기 때문에 다시 while을 실행해야함
                    if (arr[i][l] && check)//해당 위치에 이미 신고가 되있으면 피신고자가 다를때 다시 비교해야하는데 m++시 while을 벗어나서 check를 넣어서 둘이 동일하다는 조건을 담.
                        m++;
                    l++;               
                }
                l = 0;
                m = 0;
                check = 0;
                j--;
            }
        }
        if (report[n][j] == ' ' && id_list[i][j] == '\0')//피신고자 기록 후에 i를 초기화
        {
            i = -1;
            n++;
        }
        i++;
        j = 0;
    }

    for (int i = 0; i < id_list_len; i++)//피신고 횟수와 k를 비교하여 count < k 일시 피신고 기록 초기화 
    {
        for (int j = 0; j < id_list_len; j++)
        {
            if (arr[j][i])//세로로 이동해서 피신고 횟수 기록
                count++;
        }
        if (count < k)//기록한 피신고 횟수가 미달시 초기화
        {
            for (int j = 0; j < id_list_len; j++)
            {
                arr[j][i] = 0;
            }
        }
        count = 0;
    }
    
    for (int i = 0; i < id_list_len; i++)
    {
        for (int j = 0; j < id_list_len; j++)
        {
            if (arr[j][i])
                {
                    answer[j]++;//
                }
        }
    }
    return answer;
}
