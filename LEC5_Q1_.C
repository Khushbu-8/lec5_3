#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d;
	clrscr();

	printf("Enter a value of the first number :");
	scanf("%d",&a);
	printf("Enter a value of the second number :");
	scanf("%d",&b);
	printf("Enter a value of the thitd number :");
	scanf("%d",&c);
	printf("Enter a value of the forth number : ");
	scanf("%d",&d);

       (a>b)?(a>c)?(a>d)?printf("Maximum number is %d",a)
			:printf("Maximum number is %d",c)
			:printf("Maximum number is %d",d)
	     :(b>c)?(b>d)?printf("Maximum number is %d",b)
			 :printf("Maximum number is %d",c)
		   :(c>d)?printf("Maximum number is %d",c)
			 :printf("Maximum number is %d",d);

getch();

}