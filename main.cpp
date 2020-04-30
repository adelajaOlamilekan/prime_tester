#include<iostream>

using namespace std;

int main(){
	int test_number=0;
	int divisor=0;
	int remainder=0;
	int is_prime=0;

	cout<<"Enter the number to test for prime"<<endl;
	cin>>test_number;

	divisor=test_number;

	while(divisor>=1){
		remainder=test_number%divisor;

		if(remainder==0)
			++is_prime;

		--divisor;
	}

	if(is_prime==2)
		cout<<"This number is  a prime number"<<endl;
	else
		cout<<"This is not a prime number"<<endl;
}