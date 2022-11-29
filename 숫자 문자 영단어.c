#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int change_alphtoi (int *number)
{
    if (*number == 12322)//아스키코드 z * e의 결과
    {
        *number = 0;
        return (3);// 현재 i는 'z'를 가리키고 있기 때문에 'ero' 인덱스를 넘기기 위해 3을 return.
    }
    else if (*number == 12210)
    {
        *number = 1;
        return (2);
    }
    else if (*number == 13804)
    {
        *number = 2;
        return (2);
    }
    else if (*number == 12064)
    {
        *number = 3;
        return (4);
    }
    else if (*number == 11322)
    {
        *number = 4;
        return (3);
    }
    else if (*number == 10710)
    {
        *number = 5;
        return (3);
    }
    else if (*number == 12075)
    {
        *number = 6;
        return (2);
    }
    else if (*number == 11615)
    {
        *number = 7;
        return (4);
    }
    else if (*number == 10605)
    {
        *number = 8;
        return (4);
    }
    else
    {
        *number = 9;
        return (3);
    }
}

int solution(const char* s) {
    int answer, check, i, j;
    int arr[9] = {0,};//2억의 자리수는 9이기 때문
    answer = i = j = 0;
    check = 1;//숫자일 경우 '숫자' - '0'으로 정수를 만들기위해서
    while (s[i])
    {
        if (s[i] > 57)
        {
            arr[j] = s[i] * s[i + 1];
            i += change_alphtoi(&arr[j]);
            check = 0;
        }
        if (check == 1)
            arr[j] = s[i] - '0';
        answer = answer * 10 + arr[j];
        i++;
        j++;
        check = 1;
    }
    return answer;
}
