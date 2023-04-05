#include <stdio.h> 

struct student1{//구조체 1 생성시 앞에 struct를 붙여야한다
    char lastName;
    int studentId;
    char grade;
};

typedef struct{//구조체2 typedef을 사용하며 생성시 struct 앞에 붙이지 않아도 된다.
    char lastName;
    int studentId;
    char grade;
} student2;

int main(){
    struct student1 st1 ={'A',100,'A'};//구조체 초기화

    //구조체 성분 값 확인
    printf("st1.lasrName =%c\n", st1.lastName);
    printf("st1.studentId =%d\n",st1.studentId);
    printf("st1.grade = % c\n",st1.grade);

    student2 st2 = {'B',200,'B'};//구조체 초기화

    //구조체 성분값 확인
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    //student2 구조의 새구조체 생성
    student2 st3;

    //구조체 값 복사
    st3 = st2;

    //값 확인
    printf("\nst3.lastName =%c\n",st3.lastName);
    printf("st3.studentId =%d\n", st3.studentId);
    printf("st3.grade = %c\n" ,st3.grade);

    //구조체는 한번에 전체를 비교할 수 없으므로 요소 하나하나를 비교하였다.
    if(st3.grade==st2.grade&&st3.lastName==st2.lastName&&st3.studentId==st2.studentId){
        //같을경우
        printf("equal\n");   
    }else
        //다를경우
        printf("not equal\n");

    return 0;
    
}
