#include <iostream>
#include <vector>
using namespace std;


//get cycle of fibonacci
int get_idx(int n){
	int a =0;
	int b= 1;
	int index = 0;
	int temp;
	
	while(1){
		index++;
		temp = a;
		a= b;
		b= (temp+b)%n;
		if(a==0 && b==1)
			return index;
	}
}

long long fast_fib(long long n,int mod) {

	int max = get_idx(mod);

	if (n <= 1)
        return n;
       
	else if (n >1){
		vector<long long> v(max+1,0);
		v[0] = 0;
		v[1] = 1;
		for(int i =2; i<max+1 ; i++){
			v[i] = (v[i-1] +v[i-2])%mod;
		}
		return v[n%max];
	}
    return 0;
}



int main() {
	
	// your code goes here
	
	long long a;
	int b;
	cin >> a >> b;
	cout << fast_fib(a,b) << endl;
	
	
	return 0;
}