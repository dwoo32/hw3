#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //int형 크기가 5인 배열 list 선언
    int *plist[5]; //int형 크기가 5인 포인터 배열 plist선언
    list[0] = 10; //list[0]에 10 할당
    list[1] = 11; //list[1]에 11 할당
    plist[0] = (int*)malloc(sizeof(int)); //동적 메모리 할당을 통해 plist[0]이 가리키는 곳에 int형 변수 크기만큼의 메모리 공간 할당
    printf("list[0] \t= %d\n", list[0]); //list[0]에 할당된 값 출력
    printf("list \t\t= %p\n", list); //list의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소를 주소연산자를 통해 출력
    printf("list + 0 \t= %p\n", list+0); //list배열의 첫번째 원소 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list배열의 두번째 원소 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list배열의 세번째 원소 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list배열의 네번째 원소 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list배열의 다섯번째 원소 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list배열의 다섯번째 원소 주소를 주소연산자를 통해 출력
    free(plist[0]); //동적으로 할당된 메모리를 해제
    printf("[----- [Kimdongwoo] [2020039058] -----]");
}