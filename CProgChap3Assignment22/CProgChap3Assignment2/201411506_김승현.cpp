#include <stdio.h>
#include <stdlib.h>
void function(float cup);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float cup;

	printf("Please enter volume in cup: ");
	scanf("%f", &cup); //입력받을 값
	
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

/* pint = 2 cup인데 cup을 입력 받았고 동일한 크기의 pint값을 받으려면 소숫점을 이용해야하는게 좋다. 
왜냐하면 입력받은 cup이 홀수인 경우 pint 값은 반드시 float값이 되기 때문입니다.*/
