#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; //int형 이중포인터 변수 x출력

    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가르키는 포인터의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //x를 이중참조하여 얻은 값의 크기 출력
    printf("[----- [김동우] [2020039058] -----]");
}