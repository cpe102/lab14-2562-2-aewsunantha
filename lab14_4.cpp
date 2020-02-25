#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d); //a 50 100 500 1000
						
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here  a50 b100 c=500 d100
								//	  b=100 a=50 c=1000 d===5000
void shuffle(int &a,int &b, int &c, int &d){
	int y=rand()%3;
	int z,m,n;
    if(y==1){
	  z=d;
	  d=c;
	  c=z;
	}
	if(y==0){
	n=b;
	b=a;
	a=n;
	}
	 if(y==2){
	 m=d;
	 d=a;
	 a=m;
	 }

	int x=a;
	a=b;
	b=c;
	c=d;
	d=x;
	
	 

	
		
	}


