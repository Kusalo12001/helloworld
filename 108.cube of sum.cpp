#include<iostream>
using namespace std;
int cubeofsum(int n)
{
    int count = 0;
		int a = 0;
		for(int i = 1 ; i <= n ; i++){
			int cube = i*i*i;
			if(cube > n ){
				break;
			}
			else{
				a = i;
			}
		}

		int rem = n - (a*a*a);

		if(rem == 0){
			count++;
		}
		else{
			for(int i = 0 ; i <= rem ; i++){
				int cube = i*i*i;
				if(cube == rem && a != i){
					count+=2;
				}
				else if(cube == rem && a == i){
					count++;
				}
				else if(cube > rem){
					break;
				}
			}
		}
		return count;
}
int main(){
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    cout<<"Number of cube: ";
    cout<<cubeofsum(n);
}
