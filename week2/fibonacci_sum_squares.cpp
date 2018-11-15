#include <iostream>
using namespace std;

int fib_iter(long long n){
	int a=0;
	int b=1;
	int temp;
	long long index = 2;
	int sum = 1;
	
	n%=60;

	if( n <= 2)
		return n;
	
	while(1){
		temp = a;
		a =b;
		b= (a+temp)%10;
		sum+= b*b;
		sum%=10;
		
		if( index ++ == n)
			return sum;
		
	}
}

int main() {

	long long n;
	cin >> n;
	cout <<fib_iter(n) << endl;
	return 0;
}