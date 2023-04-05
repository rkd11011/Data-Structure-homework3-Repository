#include <stdio.h>

struct student {
    char lastName[13]; //12 바이트 =>16바이트(패딩) 4바이트씩 채우려고한다
    int studentId;//4바이트 =>16+4=20
    short grade;//2바이트 =>20+4(패딩)=24
};

int main(){
    struct student pst;

    printf("[----- [kang su] [2017015040] -----]\n\n");
    printf("sizr of student = %ld\n", sizeof(struct student));//패딩이 추가되어 24
    printf("sizr of int = %ld\n", sizeof(int));
    printf("sizr of short = %ld\n", sizeof(short));
    
    return 0;
}