#include <stdio.h>
#include <stdlib.h>
void function(float cup);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float cup;

	printf("Please enter volume in cup: ");
	scanf("%f", &cup); //�Է¹��� ��
	
	printf("I will summon the butler function.\n");
	function(cup);

	getchar();
	return 0;
}

void function(float cup)       /* start of function definition */
{
	float pints, ounces, tablespoons, teaspoons;

	pints = cup / 2.0;
	ounces = cup * 8.0;
	tablespoons = ounces * 2.0;
	teaspoons = tablespoons * 3.0;

	printf("pint = %f\n", pints);
	printf("ounces = %f\n", ounces);
	printf("tablespoons = %f\n", tablespoons);
	printf("teaspoons = %f\n", teaspoons);
	system("pause");
	return ;
}

/* pint = 2 cup�ε� cup�� �Է� �޾Ұ� ������ ũ���� pint���� �������� �Ҽ����� �̿��ؾ��ϴ°� ����. 
�ֳ��ϸ� �Է¹��� cup�� Ȧ���� ��� pint ���� �ݵ�� float���� �Ǳ� �����Դϴ�.*/
