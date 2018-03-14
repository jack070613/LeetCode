#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int prime(int n);


int main(){

	cout<<prime(25)<<endl;	

	return 0;
}



int prime(int n){
	
	vector<bool> num(n-1,true);
	num[0] = false;
	int res=0,limit=sqrt(n);
	for(int i=2;i<limit;i++){
		if(num[i-1]){
			for(int j=i*i;j<n;j+=i){
				num[j-1]=false;	
			}
		}
	}
	for(int i=0;i<n-1;i++){
		if(num[i]) res++;
	}
	return res;
}
