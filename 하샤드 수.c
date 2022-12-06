#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int denominator = 0;
    for (int i = x; i > 0; i /= 10)
        denominator += i % 10;
    return x % denominator ? false : true;
}
