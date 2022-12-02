#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int recursion (int *answer, int n, int *depth, int count)
{
    if (!n)
        return (0);
    *depth += 1;
    recursion (answer, n / 3, depth, count + 1);
    *answer += (n % 3) * pow (3, *depth - count);
    if (!(*depth - count))
        *answer = n % 3;
}

int solution(int n) {
    int answer = 0;
    int depth = -1;
    recursion (&answer, n, &depth, 0);
    return answer;
}
