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
// C ���α׷� �⺻
void day_1() {
	printf("========== DAY 1 ========== \n");
	printf(HELLO);
	int i = 10, j = 20;
	putchar('\n');
	printf("i * j = %d\n\n", PRODUCT(i, j));

	sprint();
}
void sprint() {
	printf("sprint �Լ����� ����߽��ϴ�. \n");
}
// ����� �Լ�
void day_2() {
	printf("========== DAY 2 ========== \n");
	// ��� �Լ�
	char ch1 = 'y', ch2 = 'e', ch3 = 's';
	printf("putchar = ");
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	
	putchar('\n'); // �� �� ����
	puts("satndard input output!");
	
	printf("�� �� ���� �Է� �� �� �ٲٱ�\n");
	printf("�������� ��ü�� ����ϱ� \\ \n");
	printf("���� �ο� ��ȣ�� ����ϱ� \" \n");
	puts("\n"); // �� �� ����
	
	// �Է� �Լ�
	char gender, married;
	int salary;

	printf("���� ? (����:w, ����:m) ");
	gender = getchar();
	// �Է� ���ۿ� ������ ��� ������ �����. - getchar()�� �� �� �����ؾ� ��.
	buffer_clear();

	printf("��ȥ ? (��ȥ:y, ��ȥ:n) ");
	married = getchar();
	
	printf("���� ? ");
	scanf("%d", &salary);

	printf("  ����: %c\n  ��ȥ: %c\n  ���� : %d", gender, married, salary);
}
void buffer_clear() {
	while (getchar() != '\n');
}
// ������
int day_3() {
	int x = 20, y = 3;
	printf("������ ��: x=%d, y=%d \n", x, y);
	printf("������ ����: %d \n", x / y);
	printf("mod ����: %d \n", (x%y)); // ������ ��

	// ��� ������
	int num1, num2, sum;
	num1 = 10; num2 = 20;
	sum = num1 + num2;
	printf("\n��� ������\n");
	printf("num1 = %d, num2 = %d \n", num1, num2);
	printf("num1 + num2 = %d \n", sum);
	printf("num1 += num2 = %d \n", num1 += num2);

	// ���� ������
	printf("\n���� ������\n");
	printf("num1 = %d \n", num1);
	printf("++num1 = %d \n", ++num1);
	printf("num+1 = %d \n", num1);
	printf("num1++ = %d \n", num1++);
	printf("num+1 = %d \n", num1);

	// �켱����
	printf("\n�켱����\n");
	printf("num1 = %d, num2 = %d \n", num1, num2);
	printf("num = %d, num2 = %d, ���� ���� = %d \n", num1, num2, (++num1 + num2++)); // ��ȣ�� �켱 ó�� ��

	// ��Ʈ ����
	printf("\n��Ʈ ����\n");
	num1 = 5, num2 = 6;

	// num1 = 0000 0101 (5)
	// num2 = 0000 0110 (6)
	// num1 & num2 = 0000 0100(4)
	printf("num1 & num2 = %d \n", num1 & num2);

	// 3�� ����
	printf("\n3�� ����\n");
	printf("num1 = %d \n", num1);
	printf("num1�� ���� 10���� ������ ? : %c \n", num1 < 10 ? 'Y' : 'N');

	return 0;
}
// ����
void day_4() {
	int HexNum = 0x11; // 16����
	int OctNum = 021; // 8����
	printf("16���� [%x] = 10���� [%d] \n\n", HexNum, HexNum);
	printf("8���� [%o] = 10���� [%d] \n\n", OctNum, OctNum);
}
// ���, �⺻ �ڷ���
void day_5() {
	const double PI = 3.141592;
	printf("PI = %f \n", PI);
	printf("ODD = %d \n", ODD);
	printf("EVEN = %d \n", EVEN);
}
// ���� �ʱ�ȭ, �������� ǥ��(����, �Ǽ�)
void day_6() {

}
// �ڷ��� ��ȯ, typedef�� eunm ���
void day_7() {

}
// ����׸� Ȱ���� ���α׷��� �ǽ�
void day_8() {

}