#include<stdio.h>
int main()
{
	int n;
	printf("HAHAH HERE IS A GAME\n");
	printf("You will have to give me a treat\n");
	printf("Here....Choose a no between 1 to 5\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("WOAHHHHH......PIZZA\n");
			printf("Now pay RS 239\n");
		break;
		case 2:
			printf("UMMMMMM......BURGER\n");
			printf("Now pay RS 129\n");
		break;
		case 3:
			printf("AAKHRI PASTA\n");
			printf("Now pay RS 179\n");
		break;
		case 4:
			printf("FRENCH FRIES IN FRENCH\n");
			printf("Now pay RS 99\n");
		break;
		case 5:
			printf("JUST SANDWICH\n");
			printf("Now pay RS 149\n");
		break;
		default:
		("Better have a fast today\n");
			
	}
}