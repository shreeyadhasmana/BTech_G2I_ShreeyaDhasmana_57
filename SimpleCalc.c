#include <stdio.h>

int main() {

	int num1, num2, result ;
	char op;
	printf("ENTER THE OPERATOR :- (+,-,*,/,%)");
	scanf("%c",&op);
	printf("ENTER THE NUMBER 1 :- ");
	scanf("%d",&num1);
	printf("ENTER THE NUMBER 2 :- ");
	scanf("%d",&num2);
	switch (op) {

	case '+':
		result = num1 + num2 ;
		printf ("Sum :- %d",result);
		break;

	case '-':
		result = num1 - num2 ;
		printf ("Diffrence :- %d",result);
		break;

	case '*':
		result = num1 * num2 ;
		printf ("Multiplication :- %d",result);
		break;

	case '/':
		result = num1 / num2 ;
		printf ("Division :- %.2f",result);
		break;

	case '%':
		result = num1 % num2 ;
		printf ("Modulus :- %d",result);
		break;

	default:
		printf ("INVALID OPERATOR");
	}

return 0;

}