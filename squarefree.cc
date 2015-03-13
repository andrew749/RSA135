#include<iostream>
#include<cmath>
using namespace std;
//0 if prime 1 if not prime
bool testPrime(int number){
				for (int i=2;i<=sqrt(number);i++){
								if(number%i==0)return 1;
				}
				return 0;
}
//return 0 if the number is square free
bool checkSquareFree(int number){
				for (int i=2;i<=sqrt(number);i++){
								if(testPrime(i)){
												if((i*i)%number==0)return 1;
								}
				}

				return 0;
}
int main(){
				cout<<testPrime(2);
				cout<<checkSquareFree(4);
}