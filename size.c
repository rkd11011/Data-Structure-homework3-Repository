#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;//2중 포인터 선언
    
    printf("[----- [kang su] [2017015040] -----]\n\n");
    printf("sizeof(x) = %lu\n", sizeof(x));//x의 값(이중 포인터) 32bit 에서는 4바이트 64bit에서는 8바이트
    printf("sizeof(*x) = %lu\n", sizeof(*x));//x의 값이 가르키는 값(포인터) 32bit 에서는 4바이트 64bit에서는 8바이트
    printf("sizeof(**x) = %lu\n", sizeof(**x));//X의 값이 가르키는 값이 가르키는 값(int값) 4바이트로 동일

    //컴파일시 컴파일 환경은 64비트 였으나 (MinGW.org GCC-6.3.0-1) 6.3.0 컴파일러가 32비트로 컴파일 되어 4바이트로 나오는 것으로 보인다
}