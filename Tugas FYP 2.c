#include <stdio.h>

int main(){
	char nama[100],program[100];
	printf("what's your name: ");
	scanf("%s", nama);
	getchar();
	printf("Whar are your favourtite programming language: ");
	scanf("%[^\n]", program);
	getchar();
	printf("Hello, %s!\n", nama);
	printf("My favourite language is %s!\n", program);
	return 0;
}
