#include<stdio.h>
//(Õý¹æ¼ÆËãÆ÷)

#pragma warning(disable:4996)
double add(double num1, double num2){
	return num1 + num2;
}

double sub(double num1, double num2){
	return num1 - num2;
}



double mul(double num1, double num2){
	return num1*num2;
}


double div(double num1, double num2){
	return num1 / num2;
}

void menu()
{
	printf("*****Calculator*****\n");
	printf("1.Add          2.Sub\n");
	printf("3.Mul          4.Div\n");
	printf("0.Quit              \n");
	printf("********************\n");
	printf("Please enter your choice:>");
}
int main()
{
	int choice = 0;
	double a = 0;
	double b = 0;
	int i = 1;
	while (i){
		menu();
		scanf("%d", &choice);
		switch (choice){
		case 1:
			printf("Please enter your data:>");
			scanf("%lf %lf", &a, &b);
			printf("%f+%f=%f\n", a, b, add(a, b));
			break;
		case 2:
			printf("Please enter your data:>");
			scanf("%lf %lf", &a, &b);
			printf("%f-%f=%f\n", a, b, sub(a, b));
			break;
		case 3:
			printf("Please enter your data:>");
			scanf("%lf %lf", &a, &b);
			printf("%f*%f=%f\n", a, b, mul(a, b));
			break;
		case 4:
			printf("Please enter your data:>");
			scanf("%lf %lf", &a, &b);
			if (b == 0){
				printf("Enter error!\n");
			}
			else{
				printf("%f/%f=%f\n", a, b, div(a, b));
			}
			break;
		case 0:
			i = 0;
			break;
		default:
			printf("Input error,please re-enter!\n");
			break;
		}
	}
	return 0;
}