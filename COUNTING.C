//Write a program to count blanks, tabs, and newlines.







#include<stdio.h>
#include<conio.h>
void main()
{
	int b,t,n;
	char c;
	b=t=n=0;
	printf("enter the data");
	while((c=getchar())!='\n')
	{
		if (c==' ')
			b++;
		if (c=='\t')
		    t++;
		if (c=='\n')
			n++;			
	
    }
	printf("\nvno of blank are %d\n no. of tabs are %d\n and no.of newlines are %d",b,t,n);
	getch();
}