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
void shiftArray(int *temp){
				for (int i=0;i<5;i++){
								temp[i]=temp[i+1];
				}

}
bool checkArrayfor1(int *array){
				for(int i=0;i<5;i++)if(array[i]==0) return 0;
				return 1;
}
bool check5squarefree(){
				int *test=new int[5];
				int resultsArray[5];
				for(int i=0;i<5;i++)test[i]=i+1;
				for(int i=0;i<5;i++)resultsArray[i]=checkSquareFree(i);
				for(int i=0;i<2000000000;i++){
cout<<"testing "<<i<<endl;
								shiftArray(test);
								shiftArray(resultsArray);
								test[5]=i;
								resultsArray[5]=checkSquareFree(i);
								if(checkArrayfor1(resultsArray))return 1;
				}				
				return 0;
}
int main(){
				cout<<check5squarefree();
}
