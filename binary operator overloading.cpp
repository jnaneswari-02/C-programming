#include<iostream>
using namespace std;
/*
class number{
	int value;
	public :
		number(){
			value = 0;
		}
		number(int v)
		
		{
			value = v;
		}
	number operator + (number obj)
	{
		number temp;
		temp.value = value + obj.value; 
		return temp;
		
	}
	void display ()
	{
		cout<< "value:"<< value<<endl;
	}
};
 int main(){
 	number n1(100),n2(200);
 	number n3 = n1 + n2;
 	n3.display();
 	return 0;
 }
 */
 
 class complex {
 	float real,imag;
 	public :
 		complex(float r=0.0, float i = 0.0){
 			real=r;
 			imag=i;
		 }
		complex operator+(complex c){
			complex t;
			t.real = real+c.real;
			t.imag = imag+c.imag;
	    	}
		void display (){
			cout << real << "+" << imag << "i" <<endl;
		}
	int main(){
		complex c1(2.2,3.1);
		complex c2(2.2,3.1);
		complex c3 = c1+c3;
		c3.display();
	}
 };