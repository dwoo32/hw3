#include <stdio.h>
#define FALSE 0
#define TRUE 1
struct student1 // 구조체 student1 선언
{
    char lastName;
    int studentId;
    char grade;
};
typedef struct
{
    char lastName;
    int studentId;
    char grade;
} student2; // 구조체 student2 선언

int structEuqal(student2 st2, student2 st3 ); //매개변수로 구조체 st2, st3를 받는 함수 structEuqal 선언

int main()
{
    struct student1 st1 = {'A', 100, 'A'}; //구조체 student1의 구조체 변수 초기화

    printf("st1.lastName = %c\n", st1.lastName);   // 구조체 student1의 구조체 변수 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); // 구조체 student1의 구조체 변수 studentId 출력
    printf("st1.grade = %c\n", st1.grade);         // 구조체 student1의 구조체 변수 grade 출력

    student2 st2 = {'B', 200, 'B'}; //구조체 student2의 구조체 변수 초기화

    printf("\nst2.lastName = %c\n", st2.lastName); // 구조체 student2의 구조체 변수 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); // 구조체 student2의 구조체 변수 studentId 출력
    printf("st2.grade = %c\n", st2.grade);         // 구조체 student3의 구조체 변수 grade 출력

    student2 st3; // student2 구조체 자료형을 가진 st3 변수 선언

    st3 = st2; // 변수 st3에 st2 값 할당

    printf("\nst3.lastName = %c\n", st3.lastName); // st3변수의 구조체 변수 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3변수의 구조체 변수 studentId 출력
    printf("st3.grade = %c\n", st3.grade);         // st3변수의 구조체 변수 grade 출력

    /* st2와 st3가 같은 지 확인 */
    if (structEuqal(st2,st3)) //structEuqal함수를 매개변수 st2,st3로 받아 같은 지 확인
        printf("equal\n"); //0을 받으면 equal 출력
    else //1을 받으면
        printf("not equal\n"); //not equal 출력

    printf("[----- [Kimdongwoo] [2020039058] -----]");

    return 0;
}
int structEuqal(student2 st2, student2 st3 )//int형을 리턴하는 함수 structEuqal 선언
{
    if (st2.lastName != st3.lastName) //st2와 st3의 구조체 변수 lastName 다른 지 확인
        return FALSE; //다르면 FALSE 리턴
    if (st2.studentId != st3.studentId) //st2와 st3의 구조체 변수 studentId 다른 지 확인
        return FALSE; //다르면 FALSE 리턴
    if (st2.grade != st3.grade)//st2와 st3의 구조체 변수 grade 다른 지 확인
        return FALSE; //다르면 FALSE 리턴

    return TRUE;//다 같다면 TRUE 리턴
}
