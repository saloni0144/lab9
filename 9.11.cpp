//Q.11. 

//library
#include <iostream>
using namespace std;

//main library
int main(){

//declaring the variables and the pointers
int inte,*i;
char charec,*c;
float flo,*f;
double doub,*d;
bool boo,*b;
	//defining the variables 
	inte= 9;
	charec='k';
	flo= 98.56;
	doub= 8.897650;
	boo = 1;
		//pointers
		i=&inte;
		c=&charec;
		f=&flo;
		d=&doub;
		b=&boo;
	//printing the values
	cout<<"hey, size of character variable is "<<sizeof(charec)<<" & it's pointer is "<<sizeof(c) <<endl ;
	cout<<"hey, size of integer variable is "<<sizeof(inte)<<" & it's pointer is "<<sizeof(i) <<endl;
	cout<<"hey, size of float point variable is " <<sizeof(flo)<<" & it's pointer "<<sizeof(f) <<endl;
	cout<<"hey, size of double variable is "<<sizeof(doub)<<" & it's pointer is "<<sizeof(d) <<endl;
	cout<<"hey, size of bool variable is "<<sizeof(boo)<<" & it's pointer is "<<sizeof(b) <<endl;

return 0;
}



