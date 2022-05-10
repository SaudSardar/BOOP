#include<iostream.h>
#include<conio.h>
int main()
{
float f,c;
clrscr();
cout<<"Please enter temperature in farenheat\n";
cin>>f;
c=5*(f-32)/9;
cout<<f<<" farenheat is equal to = "<<c<<" celciues";
getch();
return 0;
}