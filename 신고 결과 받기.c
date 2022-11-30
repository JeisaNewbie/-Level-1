#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    int     *answer = (int *)malloc (sizeof (int) * (id_list_len));
    int     arr[id_list_len][id_list_len];
    int     count[id_list_len];
    int     i, j, n, l, m, check;
    i = j = n = l = m = check = 0;

    for (int i = 0; i < id_list_len; i++)
    {
        for (int j = 0; j < id_list_len; j++)
            arr[i][j] = 0;
        answer[i] = 0;
        count[i] = 0;
    }

    while (n < report_len)
    {
        while (id_list[i][j] == report[n][j])
        {
            j++;
            if (report[n][j] == ' ' && id_list[i][j] == '\0')
            {
                j++;
                while (report[n][j + m])
                {
                    m = 0;
                    while ((id_list[l][m] == report[n][j + m]) && report[n][j + m] != '\0')
                    {
                        m++;
                        if (report[n][j + m] == '\0' && id_list[l][m] == '\0')
                        {
                            if (!arr[i][l])
                            {
                                count[l]++;
                                arr[i][l] = 1;
                            }
                            check = 1;
                        }
                    }
                    m--;
                    if (arr[i][l] && check)
                        m++;
                    l++;               
                }
                l = 0;
                m = 0;
                check = 0;
                j--;
            }
        }
        if (report[n][j] == ' ' && id_list[i][j] == '\0')
        {
            i = -1;
            n++;
        }
        i++;
        j = 0;
    }

    for (int i = 0; i < id_list_len; i++)
    {
        for (int j = 0; j < id_list_len; j++)
        {
            if (arr[i][j] == 1 && count[j] >= k)
                answer[i]++;    
        }
    }
    
    return answer;
}
