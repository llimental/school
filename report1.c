/*
Report 1
����: ���α׷���
��¥: '18. 09. 29
*/

#include <stdio.h>

/* 1��
#define PI 3.14
void main()
{
	int chk = 0, chk2=0, cmd = 0; // ��ȿ�� �ޱ� ���� ���ǹ� üũ�� chk ������ �������ÿ� cmd ����
	float a = 0, b = 0; // ����� �Է°� �����ϱ� ���� ����
	char ac=a, bc=b; // ����� �Է°� �� ����

	// �������ÿ� �־� ��ȿ������ Ȯ���ϱ� ���� ���ǹ�
	while (chk!=1) {
		printf("�ﰢ��[1]  ���簢��[2]  �簢��[3]  ��[4]\n\n");
		printf("������ ���� ������ ��ȣ�� �Է��� �ּ���: ");
		scanf_s("%d", &cmd);

		if (cmd > 0 && cmd < 5) {
			switch (cmd)
			{
			case 1:
				while (chk2 != 1) {
					printf("\n�ﰢ���� �����ϼ̽��ϴ�. \n������ ���ϱ� ���� 1) ���̿� 2) �غ��� �Ǽ�(Real number)�� �Է����ּ���: ");
					scanf_s("%f %f", &a, &b);
					if (a >= 0 && b >= 0 && a != ac && b != bc) {
						printf("�ﰢ���� ����: %f, �ﰢ���� �غ�: %f, �ﰢ���� ����: %f\n", a, b, a*b / 2);
						chk++;
						chk2++;
					}
					else {
						printf("\n0�̻� �Ǽ��� �Է����ּ���!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 2:
				while (chk2 != 1) {
					printf("\n���簢���� �����ϼ̽��ϴ�. \n������ ���ϱ� ���� 1) �� ���� ���̸� �Ǽ�(Real number)�� �Է����ּ���: ");
					scanf_s("%f", &a);
					if (a >= 0 && a != ac) {
						printf("���簢���� �� ���� ����: %f, ���簢���� ����: %f\n", a, a*a);
						chk++;
						chk2++;
					}
					else {
						printf("\n0�̻� �Ǽ��� �Է����ּ���!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 3:
				while (chk2 != 1) {
					printf("\n�簢���� �����ϼ̽��ϴ�. \n������ ���ϱ� ���� 1) ���ο� 2)���� ���̸� �Ǽ�(Real number)�� �Է����ּ���: ");
					scanf_s("%f %f", &a, &b);
					if (a >= 0 && b >= 0 && a != ac && b != bc) {
						printf("�簢���� ����: %f, �簢���� ����: %f, �簢���� ����: %f\n", a, b, a*b);
						chk++;
						chk2++;
					}
					else {
						printf("\n0�̻� �Ǽ��� �Է����ּ���!\n\n");
						rewind(stdin);
					}
				}
				break;

			case 4:
				while (chk2 != 1) {
					printf("\n���� �����ϼ̽��ϴ�. \n������ ���ϱ� ���� 1) ������ ���̸� �Ǽ�(Real number)�� �Է����ּ���: ");
					scanf_s("%f", &a);
					if (a >= 0 && a != ac) {
						printf("���� ������: %f, ���� ����: %f\n", a, a*a*PI);
						chk++;
						chk2++;
					}
					else {
						printf("\n0�̻� �Ǽ��� �Է����ּ���!\n\n");
						rewind(stdin);
					}
				}
				break;
			}
		}
		else {
			printf("\n������ ��ȣ�� �ٽ� Ȯ���ϰ� �Է����ּ���! \n\n");
			rewind(stdin);
		}
	}
}
*/

/* 2��
int main(void)
{
	int a = 0, b = 0, c = 0;  // �� ���� ������ �Է¹��� a, b ����, �׸��� ��Ʈ������ �� ������ c����
	char ac=a, bc=b;  // ���ڿ��� �Ÿ��� ���� char�� ac�� bc����
	int chk=0, i, cnt = 0;  // ����ó������ ���������� ���� chk���� ��Ʈǥ���� ���� �ݺ����� i, cnt ����

	// ������ �ޱ� ���� while ����ó������
	while (chk == 0) {  
		printf("��Ʈ ������ ������ �� ���� ������ �Է��ϼ���: ");
		scanf_s("%d %d", &a, &b);
		if (a >= 0 && b >= 0 && a != ac && b != bc) {
			chk++;
		}
		else {
			printf("0 �̻� ������ �Է����ּ���!\n");
			rewind(stdin);
		}
	}

	// ��Ʈ�� ǥ���ϱ� ���� for�� ���, �߰��� ������ �ֱ� ���� cnt���� if��
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

/* 3��
void main()
{
	int cnt = 0, sex = 0;  // ����ó������ ���� cnt ������ ���� ���� ���� sex ����
	float height = 0, weight = 0;  // Ű�� �����Ը� ���� float�� ����
	double chk = 0, stnm = 0, stnf = 0;  // �������� ǥ��ü���� ���ϱ� ���� double�� ����
	
	// ������ ���� �� 1�� 2�� ���� �� �ְ� ����ó��
	printf("<�񸸵� ���� ���α׷�>\n\n");
	while (cnt != 1) { 
		printf("������ ���� �Է��ϼ���. 1(����), 2(����): ");
		scanf_s("%d", &sex);
		// 1�� 2���߸� cnt���� ����
		if (sex == 1 || sex == 2) {
			cnt++;
		}
		else {
			printf("\n������ 1(����)�� 2(����)�� �����Ͻ� �� �ֽ��ϴ�!\n\n");
			rewind(stdin);  // �ùٸ� ���� �ƴϸ� ���۸� ����
		}
	}
	cnt = 0;  // cnt������ �� �� �� ����ϱ� ���� 0���� �ʱ�ȭ
	// Ű�� ������ ����ó���� ���� while��
	while (cnt != 1) { 
		printf("����(cm, 2m ����)�� ������(kg, 100kg ����)�� �Է��ϼ���: ");
		scanf_s("%f %f", &height, &weight);
		if (height > 0 && height <= 200 && weight > 0 && weight <= 100) {
			switch (sex)
			{
			case 1:
				stnm = (0.01*height) * (0.01*height) * 22;  // ���� ǥ��ü�߰� ����
				chk = (weight / stnm) * 100;  // ������ �� ����
				if (chk < 90) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� 'ü�� �̴�' �Դϴ�.\n", height, weight, chk, stnm);
				else if (chk >= 90&&chk <= 110) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� '����' �Դϴ�.\n", height, weight, chk, stnm);
				else if (chk > 110 && chk <= 120) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� 'ü�� ����' �Դϴ�.\n", height, weight, chk, stnm);
				else printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� '��' �Դϴ�.\n", height, weight, chk, stnm);
				cnt++;
				break;

			case 2:
				stnf = (0.01*height) * (0.01*height) * 22;  // ���� ǥ��ü�߰� ����
				chk = (weight / stnf) * 100;  // ������ �� ����
				if (chk < 90) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� 'ü�� �̴�' �Դϴ�.\n", height, weight, chk, stnf);
				else if (chk >= 90 && chk <= 110) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� '����' �Դϴ�.\n", height, weight, chk, stnf);
				else if (chk > 110 && chk <= 120) printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� 'ü�� ����' �Դϴ�.\n", height, weight, chk, stnf);
				else printf("Ű: %fcm, ������: %fkg, ������: %f, ǥ��ü��: %fkg���� ����� '��' �Դϴ�.\n", height, weight, chk, stnf);
				cnt++;
				break;
			}
		}
		else {
			printf("Ű Ȥ�� �����԰� ���������� �ʽ��ϴ�.\n");
			rewind(stdin);
		}
	}
}
*/