#include<stdio.h>
#include<conio.h>
void main(){
int n, firstdigit, lastdigit;
clrscr();
	   printf("Enter n:- ");
	   scanf("%d",&n);

	   firstdigit=n%10;
	   while(n>=10){
	   n=n/10;
	   }

	   lastdigit=n;

	   printf("sum of first and last digit: %d",firstdigit+lastdigit);

getch();
}