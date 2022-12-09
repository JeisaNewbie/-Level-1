#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
  char  *odd = "Odd";
  char  *even = "Even";
  char  *answer;
  
  return answer = num % 2 ? strdup (odd) : strdup (even);
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    return num % 2 ? strdup ("Odd") : strdup ("Even");
}
