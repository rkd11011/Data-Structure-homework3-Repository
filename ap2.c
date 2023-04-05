#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];//int형 배열 5개 선언
    int *plist[5];//int형 포인터 배열 5개 선언

    list[0] = 10;//list[0]값 초기화
    list[1] = 11;//list[1]값 초기화

    plist[0] = (int*)malloc(sizeof(int));//plist[0]에 int크기만큼 동적 메모리 할당 반환값 int형으로 설정

    printf("[----- [kang su] [2017015040] -----]\n\n");

    printf("list[0] \t= %d\n",list[0]);//list[0]의 값
    printf("list \t\t= %p\n",list);//list의 시작 주소
    printf("&list[0] \t= %p\n",&list[0]);//list[0]의 주소
    printf("list + 0 \t= %p\n",list+0);//list의 시작주소+(list의 자료형크기*0)에 해당하는 값=list[0]의 주소
    printf("list + 1 \t= %p\n",list+1);//list의 시작주소+(list의 자료형크기*1)에 해당하는 값=list[1]의 주소
    printf("list + 2 \t= %p\n",list+2);//list의 시작주소+(list의 자료형크기*2)에 해당하는 값=list[2]의 주소
    printf("list + 3 \t= %p\n",list+3);//list의 시작주소+(list의 자료형크기*3)에 해당하는 값=list[3]의 주소
    printf("list + 4 \t= %p\n",list+4);//list의 시작주소+(list의 자료형크기*4)에 해당하는 값=list[4]의 주소
    printf("&list[4] \t= %p\n",&list[4]);//list[4]의 주소
    
    free(plist[0]);//plist[0]가 가리키는 메모리 할당 해제(malloc에 의해 만들어진)

}