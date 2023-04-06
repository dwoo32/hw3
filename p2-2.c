#include <stdio.h>

void print_one(int *ptr, int rows); //int형 포인터변수 ptr, 변수 rows를 인자로 받는 print_one 함수 정의
int main()
{
    int one[] = {0,1,2,3,4}; //int형 배열 one{0,1,2,3,4} 선언

    printf("one      = %p\n",one); //배열one의 주소 출력
    printf("&one     = %p\n", &one); //배열one의 주소 출력
    printf("&one[0]  = %p\n", &one[0]); //배열one의 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //배열one의 주소와 5를 인자로 받는 함수 print_one 호출

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //배열one의 주소와 5를 인자로 받는 함수 print_one 호출
    printf("[----- [Kimdongwoo] [2020039058] -----]");

    return 0;
    
}
void print_one(int *ptr, int rows) //int형 포인터 변수 ptr과 int형 변수rows를 인자로 받는 함수 print_one
{
    /* 포인터를 이용한 1차원 배열 출력 */

    int i;
    printf("Address \t Contents\n"); 
    for (i=0; i<rows; i++) //i=0, i가 rows보다 작을 때 까지 i++
    {
        printf("%p \t %5d\n", ptr + i, *(ptr+i)); //ptr+i의 주소 출력, ptr+i를 간접참조하여 얻은 값 출력
    }
    printf("\n");
}