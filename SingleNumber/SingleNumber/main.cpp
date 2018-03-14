//
//  main.cpp
//  SingleNumber
//
//  Created by JackLin on 2018/2/24.
//  Copyright © 2018年 JackLin. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber1(vector<int>& nums){
    int result=0;
    for(int i=0;i<nums.size();++i){
        result=result^nums[i];
    }
    return result;
}
int singleNumber2(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i+=2){
        if(nums[i]!=nums[i+1]) return nums[i];
    }
    return 0;
}



int main(int argc, const char * argv[]) {
    vector<int> test1;
    for(int i=1;i<=9;++i){
        test1.push_back(i);
        test1.push_back(i);
    }
    test1.push_back(102);
    
    cout<<singleNumber1(test1)<<endl<<singleNumber2(test1)<<endl;

    return 0;
    
}
