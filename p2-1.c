#include <stdio.h>

#define MAX_SIZE 100 //MAX_SIZE를 100으로 정의

//함수선언
float sum1(float list[],int);
float sum2(float *list, int);
float sum3(int n,float *list);

float input[MAX_SIZE],answer;//float 배열 100개 선언,결과 변수 선언
int i;//배열 구분자
void main(void)
{
    for(i=0; i<MAX_SIZE;i++)//배열 숫자 채우기
        input[i]=i;
    printf("[----- [kang su] [2017015040] -----]\n\n");
    printf("-------------------------------------\n");
    printf(" sum1(intput,MAX_SIZE) \n");
    printf("-------------------------------------\n");
    printf("input \t= %p \n", input);//input값(input 시작 주소) 출력

    answer =sum1(input,MAX_SIZE);//함수 호출 결과값 대입 (배열의 시작 주소,배열크기)
    printf("The sum is: %f\n\n",answer);//결과 값 출력

    printf("-------------------------------------\n");
    printf(" sum2(intput,MAX_SIZE) \n");
    printf("-------------------------------------\n");
    printf("input \t= %p \n",input);

    answer = sum2(input, MAX_SIZE);//(배열의 시작 주소,배열크기)
    printf("the sum is: %f\n\n",answer);

    printf("-------------------------------------\n");
    printf(" sim3(MAX_SIZE, input) \n");
    printf("-------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum3(MAX_SIZE,input);//(배열의 크기,배열의 시작주소)
    printf("The sum if: %f\n\n",answer);

}

//list[] 주소를 받아서 참조하는 형식으로 처리된다.
float sum1(float list[],int n)//(배열,배열크기) 
{
    //list자체는 새로운 메모리에 등록 되고 값은 input값과 동일하다
    printf("list \t= %p\n", list);//list 값 출력
    printf("&list \t= %p\n\n",&list);//list 주소 출력 

    int i;
    float tempsum = 0;//더한 결과값을 저장할 변수 초기화
    for(i = 0 ; i < n; i++)//배열 크기만큼 반복
        tempsum += list[i];//해당 배열 값을 결과에 더함
    return tempsum;//결과 반환
}

//포인터를 이용해 참조, 배열의 값을 더해서 결과를 반환하는 함수
float sum2(float *list, int n)//(배열의 포인터,배열의 크기)
{
    printf("list \t= %p\n", list);//list 값 출력
    printf("&list \t= %p\n\n", &list);//list 주소 출력 

    int i;
    float tempsum=0;
    for(i = 0; i < n; i++)//배열 크기만큼 반복
        tempsum += *(list + i);//(list시작 주소+list의 크기*i)의 주소에 있는 값을 결과에 더함
    return tempsum; 
}

//포인터를 이용해 참조, 배열의 값을 합산한뒤 결과값을 반환+스택 변수 재사용 태스트
//함수가 끝나면 지역변수는 더 이상 메모리에서 사용되지 않으며
//새로 호출된 함수의 지역변수를 메모리를 사용하지 않는 메모리 공간에 재할당한 다는 것을 알 수 있다
float sum3(int n,float *list)
{
    printf("list \t= %p\n", list);//list 값 출력
    printf("&list \t= %p\n\n", &list);//list 주소 출력 
    //int가 메모리에 올라갈때 미리 메모리를 4만큼 차지해서 sum2와 비교해 주소가 4만큼 밀린걸 확인할 수 있다.

    int i;
    float tempsum =0;
    for(i = 0; i < n;i++)
        tempsum += *(list+i);
    return tempsum;
}