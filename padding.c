#include <stdio.h>

struct student //구조체 student 선언
{
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력 합쳐서 20바이트 지만, padding으로 인해 24바이트 출력
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력
    printf("[----- [김동우] [2020039058] -----]");
    return 0;
}