#include <stdio.h>

int main(){
    int a = 10, b = 20;
    
    const int* ptr1 = &a; // ptr1은 a를 가리키지만 *ptr1은 변경 불가
    // *ptr = 30; -> 오류! 값을 변경할 수 없음
    ptr1 = &b; // 주소를 바꿀 수 있음 -> 이제 b를 가리킴.

    int* const ptr2 = &a; // ptr2는 주소 고정(항상 a를 가리킴)
    *ptr2 = 30; // 값은 변경 가능 -> a가 30으로 바뀜.
    // ptr2 = &b; -> 오류! 주소를 바꿀 수 없음.

    printf("*ptr1 = %d\n", *ptr1); // b의 값 출력: 20
    printf("*ptr2 = %d\n", *ptr2); // a의 값 출력: 30

    return 0;
}