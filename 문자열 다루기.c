#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    int len = 0;
    
    while (s[len])
        len++;
    
    if (len != 4 && len != 6)
        return (false);
    
    for (int i = 0; i < len; i++)
        if (!('0' <= s[i] && s[i] <= '9'))
            return (false);
    
    return true;
}
