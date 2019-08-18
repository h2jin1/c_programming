#include <stdio.h>
#define HELLO "Start C Programing! HelloWorld!"
#define PRODUCT(X, Y) ((X)*(Y))
#pragma warning(disable:4996)
#define ODD 1
#define EVEN 2

void sprint();
void day_1();
void buffer_clear();
void day_2();
int day_3();
void day_4();
void day_5();

main() {
	//day_1();
	//day_2();
	//day_3();
	//day_4();
	day_5();
}
// C 프로그램 기본
void day_1() {
	printf("========== DAY 1 ========== \n");
	printf(HELLO);
	int i = 10, j = 20;
	putchar('\n');
	printf("i * j = %d\n\n", PRODUCT(i, j));

	sprint();
}
void sprint() {
	printf("sprint 함수에서 출력했습니다. \n");
}
// 입출력 함수
void day_2() {
	printf("========== DAY 2 ========== \n");
	// 출력 함수
	char ch1 = 'y', ch2 = 'e', ch3 = 's';
	printf("putchar = ");
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	
	putchar('\n'); // 한 줄 엔터
	puts("satndard input output!");
	
	printf("한 줄 글자 입력 후 줄 바꾸기\n");
	printf("역슬래시 자체를 출력하기 \\ \n");
	printf("이중 인용 부호를 출력하기 \" \n");
	puts("\n"); // 두 줄 엔터
	
	// 입력 함수
	char gender, married;
	int salary;

	printf("성별 ? (여성:w, 남성:m) ");
	gender = getchar();
	// 입력 버퍼에 남겨진 모든 내용을 지운다. - getchar()를 쓸 때 주의해야 함.
	buffer_clear();

	printf("결혼 ? (기혼:y, 미혼:n) ");
	married = getchar();
	
	printf("월급 ? ");
	scanf("%d", &salary);

	printf("  성별: %c\n  결혼: %c\n  월급 : %d", gender, married, salary);
}
void buffer_clear() {
	while (getchar() != '\n');
}
// 연산자
int day_3() {
	int x = 20, y = 3;
	printf("현재의 값: x=%d, y=%d \n", x, y);
	printf("나누기 연산: %d \n", x / y);
	printf("mod 연산: %d \n", (x%y)); // 나머지 값

	// 산술 연산자
	int num1, num2, sum;
	num1 = 10; num2 = 20;
	sum = num1 + num2;
	printf("\n산술 연산자\n");
	printf("num1 = %d, num2 = %d \n", num1, num2);
	printf("num1 + num2 = %d \n", sum);
	printf("num1 += num2 = %d \n", num1 += num2);

	// 증감 연산자
	printf("\n증감 연산자\n");
	printf("num1 = %d \n", num1);
	printf("++num1 = %d \n", ++num1);
	printf("num+1 = %d \n", num1);
	printf("num1++ = %d \n", num1++);
	printf("num+1 = %d \n", num1);

	// 우선순위
	printf("\n우선순위\n");
	printf("num1 = %d, num2 = %d \n", num1, num2);
	printf("num = %d, num2 = %d, 순위 연산 = %d \n", num1, num2, (++num1 + num2++)); // 괄호가 우선 처리 됨

	// 비트 연산
	printf("\n비트 연산\n");
	num1 = 5, num2 = 6;

	// num1 = 0000 0101 (5)
	// num2 = 0000 0110 (6)
	// num1 & num2 = 0000 0100(4)
	printf("num1 & num2 = %d \n", num1 & num2);

	// 3항 연산
	printf("\n3항 연산\n");
	printf("num1 = %d \n", num1);
	printf("num1의 값이 10보다 적은가 ? : %c \n", num1 < 10 ? 'Y' : 'N');

	return 0;
}
// 진법
void day_4() {
	int HexNum = 0x11; // 16진수
	int OctNum = 021; // 8진수
	printf("16진수 [%x] = 10진수 [%d] \n\n", HexNum, HexNum);
	printf("8진수 [%o] = 10진수 [%d] \n\n", OctNum, OctNum);
}
// 상수, 기본 자료형
void day_5() {
	const double PI = 3.141592;
	printf("PI = %f \n", PI);
	printf("ODD = %d \n", ODD);
	printf("EVEN = %d \n", EVEN);
}
// 변수 초기화, 데이터의 표현(정수, 실수)
void day_6() {

}
// 자료형 변환, typedef문 eunm 상수
void day_7() {

}
// 디버그를 활용한 프로그래밍 실습
void day_8() {

}