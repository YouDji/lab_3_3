#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void gotoxy (int xp, int yp)
{
	COORD new_xy;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	new_xy.X = xp ; new_xy.Y = yp;
	SetConsoleCursorPosition(hStdOut,new_xy);
	
}
int main() {
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double xstart=-4.2, xend=3.1, xstep=0.23;
	double y,a , b,x ;
	printf("_______________________\n");
	printf("|  x  |  y  |\n");
	printf("------------------\n");
	for(x=xstart; x<=xend; x=x+xstep)
	{
		if(x<0)
		{
		a=exp(x)+pow(sin(x),2.00);
	b=pow(sqrt(fabs(x-1.00)),3.00);
		y=a/b;
	}
	else 
		y=3*pow(x,2);
		printf("|%8.4f| %8.4f|\n",x,y);}
		printf("------------------\n");
		system("pause");
		return 0;
	
}
