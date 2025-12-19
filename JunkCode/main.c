#include<stdio.h>
#include<string.h>
int main(){

	int age = 0;
	float price = 0.0f;
	double pi = 3.1415926535;
	char currency = '\0';
	char name[30] = "";

	//printf("%d\n", age);
	//printf("%.2f$\n", price);	
	//printf("%lf\n", pi);
	//printf("%c\n", currency);
	//printf("%s\n", name);

	
	printf("Enter your full name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("Your full name is %s\n", name);

	printf("you are %d years old\n", age);

	return 0;
}
