#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;




int removeDuplicates(vector<int>& nums){
	if(nums.size()==0) return 0;
	int j=0;
	for(int i=0;i<nums.size();i++){
		if(nums[i]!=nums[j]) nums[j++]=nums[i];
	}
	return j+1;
}



int main(){

	vector<int> ans;

	for(int i=0;i<5;i++){
		ans.push_back(i);
	}

	ans.push_back(4);


	int k = removeDuplicates(ans);
	cout<<k<<endl;

return 0; 
}
