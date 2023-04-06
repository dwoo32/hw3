#include <stdio.h>
#define MAX_SIZE 100 //전처리기를 통해 MAX_SIZE 를 100으로 설정
float sum1(float list[], int); //float로 값을 리턴하는 함수 sum1 선언
float sum2(float *list, int); //float로 값을 리턴하는 함수 sum2 선언
float sum3(int n, float *list); //float로 값을 리턴하는 함수 sum3 선언
float input[MAX_SIZE], answer; //길이가 MAX_SIZE인 float형 배열 input 선언, float형 변수 answer선언 
int i; //int형 변수 i 선언
void main(void)
{
  for(i=0; i<MAX_SIZE; i++) //i=0으로 초기화 한 후 i가 MAX_SIZE보다 작을 때 까지 i++
  input[i] = i; //i번째 input 원소에 i 값 할당
  /* 간접참조 확인 */
  printf("--------------------------------------\n");
  printf(" sum1(input, MAX_SIZE) \n"); 
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); //배열input 주소 출력

  answer = sum1(input, MAX_SIZE); //변수answer에 input, MAX_SIZE를 인자로 하는 sum1함수 리턴 값 할당
  printf("The sum is: %f\n\n", answer); //answer 출력

  printf("--------------------------------------\n");
  printf(" sum2(input, MAX_SIZE) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); //배열input 주소 출력

  answer = sum2(input, MAX_SIZE);//변수answer에 input, MAX_SIZE를 인자로 하는 sum2함수 리턴 값 할당
  printf("The sum is: %f\n\n", answer); //answer 출력

  printf("--------------------------------------\n");
  printf(" sum3(MAX_SIZE, input) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); //배열input 주소 출력

  answer = sum3(MAX_SIZE, input); //변수answer에 input, MAX_SIZE를 인자로 하는 sum3함수 리턴 값 할당
  printf("The sum is: %f\n\n", answer); //answer 출력
  printf("[----- [Kimdongwoo] [2020039058] -----]");
}
float sum1(float list[],int n) //float형 배열 list와 int형 변수 n을 인자로 받는 함수 sum1 정의
{
  printf("list \t = %p \n", list); //매개변수로 받은 input의 주소와 같은 list의 주소 출력
  printf("&list \t = %p\n\n", &list); //sum1함수 내에서 선언된 list 포인터 변수 주소 출력 

  int i;
  float tempsum = 0;
  for(i=0; i<n; i++) //i=0, i가 n보다 작을 때 까지 i++
  tempsum += list[i]; //tempsum = tempsum + list[i] (list의 i번째 원소 값)
  return tempsum; //tempsum 값 리턴
}
float sum2(float *list, int n)//float형 배열 list와 int형 변수 n을 인자로 받는 함수 sum2 정의
{
  printf("list \t = %p\n", list); //매개변수로 받은 input의 주소와 같은 list의 주소 출력
  printf("&list \t = %p\n\n", &list); //sum2함수 내에서 선언된 list 포인터 변수 주소 출력, (sum1함수가 쓴 메모리 공간을 sum1함수 종료 후 그 자리에 sum2 가 들어옴)

  int i;
  float tempsum = 0;
  for(int i=0; i<n; i++) //i=0, i가 n보다 작을 때 까지 i++
  tempsum += *(list + i); //tempsum = tempsum + *(list+i){list의 i번째 원소 값}
  return tempsum; //tempsum 값 리턴
}
/* 스택메모리 재사용 test */
float sum3(int n, float *list) //float형 배열 list와 int형 변수 n을 인자로 받는 함수 sum3 정의
{
  printf("list \t = %p\n", list); //매개변수로 받은 input의 주소와 같은 list의 주소 출력
  printf("&list \t = %p\n\n", &list); //sum3함수 내에서 선언된 list 포인터 변수 주소 출력, 매개변수가 달라지므로 함수가 다른 것으로 인식하여 다른 공간사용

  int i;
  float tempsum= 0;
  for(i=0; i<n; i++) //i=0, i가 n보다 작을 때 까지 i++
  tempsum += *(list + i); //tempsum = tempsum + *(list + i) {list의 i번째 원소 값}
  return tempsum; //tempsum값 리턴
}