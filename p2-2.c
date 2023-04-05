#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
    int one[] = {0,1,2,3,4};//배열선언

    printf("[----- [kang su] [2017015040] -----]\n\n");

    printf("one     = %p\n", one);// 배열의 값=배열의 주소
    printf("&one    = %p\n", &one);// 배열의 주소
    printf("&one[0] = %p\n",&one[0]);
    // 배열의 0번째 주소=(배열 주소+배열 자료형*0)

    printf("\n");

    printf("---------------------------------------\n");
    printf("  print_ome(&one[0], 5) \n");
    printf("---------------------------------------\n");
    print_one(&one[0], 5);//함수에 주소 값으로 넘김,배열 크기를 넘김

    printf("---------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("---------------------------------------\n");
    print_one(one,5);//함수에 배열이름 값으로 넘김,배열 크기를 넘김

    return 0;
}
void print_one(int *ptr, int rows)
{
    int i;//배열 순서 구별자
    printf ("Address \t Contents\n");
    for(i =0 ; i < rows; i++)//배열 크기 만큼 반복
        printf("%p \t %5d\n", ptr+ i, *(ptr +i));
        //ptr(one의 시작 주소)+4(int형 포인터)*i 만큼
        //ptr이 int형 포인터라 4씩 증가한다

    printf("\n");
} 