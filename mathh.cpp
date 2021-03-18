
#include<stdio.h>

int main() {
	int a, b=0;
	printf("Enter a digit and get it in word\n" );

	scanf_s("%d", &a);

	while (a !=0) {
		b = (b * 10) + (a % 10);

		a /= 10;
	}

	while (b != 0) {
		switch (b%10)
	{




	case 0:
		printf("Zero ");
		break;

	case 1:
		printf("One ");
		break;

	case 2:
		printf("Two ");
		break;

	case 3:
		printf("Three ");
		break;

	case 4:
		printf("Four ");
		break;

	case 5:
		printf("Five ");
		break;

	case 6:
		printf("Six");
		break;

	case 7:
		printf("Seven ");
		break;

	case 8:
		printf("Eight ");
		break;

	case 9:
		printf("Nine ");
		break;

	default:
		printf("Error ");
		}

	} {b* b / 10; }


}


