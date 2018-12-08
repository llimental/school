/*
Report 1
강의: 프로그래밍
날짜: '18. 09. 29
*/

#include <stdio.h>

/* 1번
#define PI 3.14
void main()
{
	int chk = 0, chk2=0, cmd = 0; // 유효값 받기 위한 조건문 체크값 chk 변수와 유형선택용 cmd 변수
	float a = 0, b = 0; // 사용자 입력값 저장하기 위한 변수
	char ac=a, bc=b; // 사용자 입력값 비교 변수

	// 유형선택에 있어 유효값인지 확인하기 위한 조건문
	while (chk!=1) {
		printf("삼각형[1]  정사각형[2]  사각형[3]  원[4]\n\n");
		printf("면적을 구할 도형의 번호를 입력해 주세요: ");
		scanf_s("%d", &cmd);

		if (cmd > 0 && cmd < 5) {
			switch (cmd)
			{
			case 1:
				while (chk2 != 1) {
					printf("\n삼각형을 선택하셨습니다. \n면적을 구하기 위해 1) 높이와 2) 밑변을 실수(Real number)로 입력해주세요: ");
					scanf_s("%f %f", &a, &b);
					if (a >= 0 && b >= 0 && a != ac && b != bc) {
						printf("삼각형의 높이: %f, 삼각형의 밑변: %f, 삼각형의 면적: %f\n", a, b, a*b / 2);
						chk++;
						chk2++;
					}
					else {
						printf("\n0이상 실수를 입력해주세요!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 2:
				while (chk2 != 1) {
					printf("\n정사각형을 선택하셨습니다. \n면적을 구하기 위해 1) 한 변의 길이를 실수(Real number)로 입력해주세요: ");
					scanf_s("%f", &a);
					if (a >= 0 && a != ac) {
						printf("정사각형의 한 변의 길이: %f, 정사각형의 면적: %f\n", a, a*a);
						chk++;
						chk2++;
					}
					else {
						printf("\n0이상 실수를 입력해주세요!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 3:
				while (chk2 != 1) {
					printf("\n사각형을 선택하셨습니다. \n면적을 구하기 위해 1) 가로와 2)세로 길이를 실수(Real number)로 입력해주세요: ");
					scanf_s("%f %f", &a, &b);
					if (a >= 0 && b >= 0 && a != ac && b != bc) {
						printf("사각형의 가로: %f, 사각형의 세로: %f, 사각형의 면적: %f\n", a, b, a*b);
						chk++;
						chk2++;
					}
					else {
						printf("\n0이상 실수를 입력해주세요!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 4:
				while (chk2 != 1) {
					printf("\n원을 선택하셨습니다. \n면적을 구하기 위해 1) 반지름 길이를 실수(Real number)로 입력해주세요: ");
					scanf_s("%f", &a);
					if (a >= 0 && a != ac) {
						printf("원의 반지름: %f, 원의 면적: %f\n", a, a*a*PI);
						chk++;
						chk2++;
					}
					else {
						printf("\n0이상 실수를 입력해주세요!\n\n");
						rewind(stdin);
					}
				}
				break;
			}
		}
		else {
			printf("\n도형의 번호를 다시 확인하고 입력해주세요! \n\n");
			rewind(stdin);
		}
	}
}
*/

/* 2번
int main(void)
{
	int a = 0, b = 0, c = 0;  // 두 개의 정수를 입력받을 a, b 변수, 그리고 비트연산자 값 저장할 c변수
	char ac=a, bc=b;  // 문자열을 거르기 위한 char형 ac와 bc변수
	int chk=0, i, cnt = 0;  // 예외처리구조 종결조건을 위한 chk값과 비트표현을 위한 반복문용 i, cnt 변수

	// 정수를 받기 위한 while 예외처리구조
	while (chk == 0) {  
		printf("비트 연산을 수행할 두 개의 정수를 입력하세요: ");
		scanf_s("%d %d", &a, &b);
		if (a >= 0 && b >= 0 && a != ac && b != bc) {
			chk++;
		}
		else {
			printf("0 이상 정수를 입력해주세요!\n");
			rewind(stdin);
		}
	}

	// 비트를 표현하기 위해 for문 사용, 중간에 공백을 주기 위한 cnt값과 if문
	printf("%d: ", a);
	for (i = 31; i >= 0; i--) {
		printf("%d", a >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	printf("%d: ", b);
	for (i = 31; i >= 0; i--) {
		printf("%d", b >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = a & b;
	printf("%d & %d = %d ", a, b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = a | b;
	printf("%d | %d = %d: ", a, b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = a ^ b;
	printf("%d ^ %d = %d: ", a, b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = a >> b;
	printf("%d >> %d = %d: ", a, b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = a << b;
	printf("%d << %d = %d: ", a, b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = ~a;
	printf("~%d = %d: ", a, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = ~b;
	printf("~%d = %d: ", b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = ~a+1;
	printf("~%d + 1 = %d: ", a, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	c = ~b + 1;
	printf("~%d + 1 = %d: ", b, c);
	for (i = 31; i >= 0; i--) {
		printf("%d", c >> i & 1);
		cnt++;
		if (cnt == 4) {
			printf(" ");
			cnt = 0;
		}
	}
	printf("\n");

	return 0;
}
*/

/* 3번
void main()
{
	int cnt = 0, sex = 0;  // 예외처리문을 위한 cnt 변수와 성별 값을 받을 sex 변수
	float height = 0, weight = 0;  // 키와 몸무게를 받을 float형 변수
	double chk = 0, stnm = 0, stnf = 0;  // 비만지수와 표준체중을 구하기 위한 double형 변수
	
	// 성별을 받을 때 1과 2만 받을 수 있게 예외처리
	printf("<비만도 측정 프로그램>\n\n");
	while (cnt != 1) { 
		printf("성별을 먼저 입력하세요. 1(남자), 2(여자): ");
		scanf_s("%d", &sex);
		// 1과 2여야만 cnt값이 증가
		if (sex == 1 || sex == 2) {
			cnt++;
		}
		else {
			printf("\n성별은 1(남자)와 2(여자)만 선택하실 수 있습니다!\n\n");
			rewind(stdin);  // 올바른 값이 아니면 버퍼를 비운다
		}
	}
	cnt = 0;  // cnt변수를 한 번 더 사용하기 위해 0으로 초기화
	// 키와 몸무게 예외처리를 위한 while문
	while (cnt != 1) { 
		printf("신장(cm, 2m 이하)과 몸무게(kg, 100kg 이하)를 입력하세요: ");
		scanf_s("%f %f", &height, &weight);
		if (height > 0 && height <= 200 && weight > 0 && weight <= 100) {
			switch (sex)
			{
			case 1:
				stnm = (0.01*height) * (0.01*height) * 22;  // 남자 표준체중값 설정
				chk = (weight / stnm) * 100;  // 비만지수 값 설정
				if (chk < 90) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '체중 미달' 입니다.\n", height, weight, chk, stnm);
				else if (chk >= 90&&chk <= 110) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '정상' 입니다.\n", height, weight, chk, stnm);
				else if (chk > 110 && chk <= 120) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '체중 과다' 입니다.\n", height, weight, chk, stnm);
				else printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '비만' 입니다.\n", height, weight, chk, stnm);
				cnt++;
				break;

			case 2:
				stnf = (0.01*height) * (0.01*height) * 22;  // 여자 표준체중값 설정
				chk = (weight / stnf) * 100;  // 비만지수 값 설정
				if (chk < 90) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '체중 미달' 입니다.\n", height, weight, chk, stnf);
				else if (chk >= 90 && chk <= 110) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '정상' 입니다.\n", height, weight, chk, stnf);
				else if (chk > 110 && chk <= 120) printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '체중 과다' 입니다.\n", height, weight, chk, stnf);
				else printf("키: %fcm, 몸무게: %fkg, 비만지수: %f, 표준체중: %fkg으로 당신은 '비만' 입니다.\n", height, weight, chk, stnf);
				cnt++;
				break;
			}
		}
		else {
			printf("키 혹은 몸무게가 정상적이지 않습니다.\n");
			rewind(stdin);
		}
	}
}
*/