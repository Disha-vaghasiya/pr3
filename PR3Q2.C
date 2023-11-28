#include<stdio.h>
#include<conio.h>
void main(){
	 int i=1;
	 int n;

clrscr();
	 printf("Enter n= ");
	 scanf("%d",&n);

	 while(n>=10){
	      n=n/10;
	      i++;
	 };
		 printf("%d",i);
getch();
}