#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=10;
	char b='A';
	char &c=b;
	int *x= &a;
	char *y= &b;
	int **z= &x;
	cout<< "a = " << a <<'\n';
	cout<< "b = " << b <<'\n';
	cout<< "c = " << c <<'\n';
	cout<< "x = " << *x <<'\n';
	cout<< "y = " << y ;
	cout<< "z = " << **z <<'\n';
	cout<<'\n';
	cout<< "&a = " << &a <<'\n';
	cout<< "&b = " << (int *)&b ;
	cout<< "\n&c = " << (int *)&c ;
	cout<< "\n&x = " << &x <<'\n';
	cout<< "&y = " << &y <<'\n';
	cout<< "&z = " << &z <<'\n'<<'\n';
	c= 'F';

	cout<< "\na = " << a ;
	cout<< "\nb = " << b ;
	cout<< "\nc = " << c ;
	cout<< "\nx = " << *x ;
	cout<< "\ny = " << y ;
	cout<< "z = " << **z <<'\n';

	*y = 'W';
	cout<< "\na = " << a ;
	cout<< "\nb = " << b ;
	cout<< "\nc = " << c ;
	cout<< "\nx = " << *x ;
	cout<< "\ny = " << y ;
	cout<< "z = " << **z <<'\n'<<'\n';

	*x=6;
	cout<< "a = " << a ;
	cout<< "\nb = " << b ;
	cout<< "\nc = " << c ;
	cout<< "\nx = " << *x ;
	cout<< "\ny = " << y ;
	cout<< "\nz = " << **z <<'\n'<<'\n';

   **z=7;
	cout<< "a = " << a ;
	cout<< "\nb = " << b ;
	cout<< "\nc = " << c ;
	cout<< "\nx = " << *x ;
	cout<< "\ny = " << y ;
	cout<< "\nz = " << **z <<'\n'; 


	return 0;
}
