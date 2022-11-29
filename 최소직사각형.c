#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int big_r = sizes[0][0];
    int big_c = sizes[0][1];
    int tmp = 0;
    
    for (int i = 0; i < sizes_rows; i++)
    {
        if (sizes[i][0] < sizes[i][1])
            {
                tmp = sizes[i][0];
                sizes[i][0] = sizes[i][1];
                sizes[i][1] = tmp;
            
                if (i == 0)
                {
                    big_r = sizes[i][0];
                    big_c = sizes[i][1];
                }
            }
        if (big_r < sizes[i][0])
            big_r = sizes[i][0];
        if (big_c < sizes[i][1])
            big_c = sizes[i][1];
    }
    return big_r * big_c;
}
