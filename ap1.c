#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];   //int형 크기가 5인 배열 list 선언
    int *plist[5] = {NULL,}; //int형 크기가 5인 포인터 배열 plist선언 후 , 모든 원소를 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); //동적 메모리 할당을 통해 plist[0]이 가리키는 곳에 int형 변수 크기만큼의 메모리 공간 할당

    list[0] = 1; //list[0]에 1 할당
    list[1] = 100; //list[1]에 100 할당

    *plist[0] = 200;//plist[0]이 가르키는 주소에 200 할당

    printf("list[0] = %d\n", list[0]); //list[0]에 할당된 값 출력
    printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력
    printf("list = %p\n", list); //list의 주소 출력(=list[0]의 주소)
    printf("&list = %p\n", &list);//주소 연산자를 통한 list의 주소 출력
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);//list[1]에 할당된 값 출력
    printf("&list[1] = %p\n", &list[1]);//list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1));//list+1 이 가르키는 값 출력
    printf("list+1 = %p\n", list+1);//list[1]의 주소 출력과 같은 의미
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);//plist[0]이 가르키는 값 출력
    printf("&plist[0] = %p\n", &plist[0]);//plist의 주소 출력
    printf("&plist = %p\n", &plist);//plist의 주소 출력
    printf("plist = %p\n", plist);//plist이름 또한 plist의 주소와 같다
    printf("plist[0] = %p\n", plist[0]);//plist[0]의 주소 출력, plist는 값을 부여 받아 malloc함수를 통해 주소가 부여됨
    printf("plist[1] = %p\n", plist[1]);//plist[1]은 malloc함수를 통해 주소를 부여받지 못하였기 때문에 주소값이 없음
    printf("plist[2] = %p\n", plist[2]);//plist[2]은 malloc함수를 통해 주소를 부여받지 못하였기 때문에 주소값이 없음
    printf("plist[3] = %p\n", plist[3]);//plist[3]은 malloc함수를 통해 주소를 부여받지 못하였기 때문에 주소값이 없음
    printf("plist[4] = %p\n", plist[4]);//plist[4]은 malloc함수를 통해 주소를 부여받지 못하였기 때문에 주소값이 없음
        
    free(plist[0]);//plist[0]이 가르키는 메모리블록 해제, 하지만 값은 여전히 이전 메모리 블록을 가르키고 있음.
    printf("[----- [Kimdongwoo] [2020039058] -----]");
}