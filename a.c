#include<stdio.h>

int main(){
	int num;
	printf("Enter a number to check : ");
	scanf("%d", &num);
	
	if(num%2==0)
	{
		printf("It is a even number");
	}
	else{
		printf("It is odd number");
	}
}