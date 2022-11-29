#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int x = 3;
    
    if (n % 2)
        return (2);
    
    while (x < n)
    {
        if ((n % x) == 1)
            return (x);
        x += 2;
    }
    return 0;
}
