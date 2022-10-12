
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
int main(int argc, char** argv) {
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const double x=2.5 ;
	double sum, n, n_start, n_end ;
	cout<<"¬вед≥ть початков≥ значенн€ n = ";
	cin>>n_start;
	cout<<"¬вед≥ть к≥нцеве значенн€ n = ";
	cin>>n_end;
	sum=0;
	for(n=n_start; n<=n_end; n++)
	{
	 sum=sum+(pow(x,2*n)/pow(-1,n)*2*n); 	
	}
	cout<<"sum = "<<sum<<endl;
	system("pause");
	return 0;

}
