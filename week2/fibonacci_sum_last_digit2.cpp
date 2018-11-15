#include <iostream>
#include <vector>
using namespace std;



int Last_Digit_Sum_Fibo(long long n){
	int a =0;
	int b= 1;
	long long index = 0;
	int temp;
	int sum = 0;
	
	if(n==0)
		return 0;
	
	int cycle = 0;	
	int iteration = n%60;
	
	if(iteration == 0)
		return 0;
	index =0;
	
	while(1){
		index++;
		temp = a;
		a= b%10;
		b= (temp+b)%10;
		sum += a;
		sum%= 10;
		
		if(index ==iteration )
			return sum;
	}
	
}

/*
int nogada(long long n){
	int a =0;
	int b= 1;
	long long index = 0;
	int temp;
	int sum = 0;
	if(n==0)
		return 0;
	while(1){
		index++;
		temp = a;
		a= b%10;
		b= (temp+b)%10;
		cout <<"FIB["<< index<<"] : " << a << endl;
		
		if(index ==n )
			return sum;
	}
} // last digit of Fibonacci funtion is cyclic. cycle is 60;
*/


int main() {
	// your code goes here
	
	long long a;
	cin>> a ;
	cout << Last_Digit_Sum_Fibo(a) << endl;;
	
	return 0;
}