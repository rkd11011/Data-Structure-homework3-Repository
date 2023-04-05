#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];//정수 배열 5개
    int *plist[5] ={NULL,};//정수형 포인터 배열 5개 NULL로 초기화


    plist[0]=(int *)malloc(sizeof(int));//plist[0]의 값에 int의 크기(4)만큼 메모리 동적 할당 주소 배정 반환값은 int를 사용(int형 데이터 명시)


    list[0] = 1;//;list[0]의 값 초기화
    list[1] = 100;//list[1]의 값 초기화
    *plist[0] =200;//plist[0]의 값에 해당하는 주소의 값의 초기화
    
    printf("[----- [kang su] [2017015040] -----]\n\n");

    printf("list[0]              = %d\n", list[0]);//list[0] 값
    printf("&list[0]             = %p\n", &list[0]);//list[0] 주소
    printf("list                 = %d\n", list);//list의 시작 주소, list의 값
    printf("&list                = %p\n", &list);//list의 주소
    
    printf("-----------------------------------------\n\n");
    printf("list[1]              = %d\n", list[1]);//list[1]의 값
    printf("&list[1]             = %p\n", &list[1]);//list[1]의 주소
    printf("*(list+1)            = %d\n", *(list+1));//list주소+(list 자료형 크기)가 가르키는 값=list[1]의 값
    printf("list+1               = %p\n", list+1);//list주소+(list 자료형 크기)=list[1]의 주소

    
    printf("-----------------------------------------\n\n");
    printf("*plist[0]            = %d\n", *plist[0]);//plist[0]의 값에 해당하는 주소의 값
    printf("&plist[0]            = %p\n", &plist[0]);//plist[0]의 주소
    printf("&plist               = %p\n", &plist);//plist의 주소
    printf("plist                = %p\n", plist);//plist의 값
    printf("plist[0]             = %p\n", plist[0]);//plist[0]의 값 (동적 배열 주소 시작 값)
    printf("plist[1]             = %p\n", plist[1]);//plist[1]의 값 (초기화 했던 NULL값)
    printf("plist[2]             = %p\n", plist[2]);//plist[2]의 값 (초기화 했던 NULL값)
    printf("plist[3]             = %p\n", plist[3]);//plist[3]의 값 (초기화 했던 NULL값)
    printf("plist[4]             = %p\n", plist[4]);//plist[4]의 값 (초기화 했던 NULL값)

    free(plist[0]);//plist[0]가 가리키는 메모리 할당 해제(malloc에 의해 만들어진)
}
