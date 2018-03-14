//
//  main.cpp
//  valindrome
//
//  Created by JackLin on 2018/2/24.
//  Copyright © 2018年 JackLin. All rights reserved.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

bool isAlphaNum(char c){
    if(c>='a'&&c<='z') return true;
    if(c>='A'&&c<='Z') return true;
    if(c>='0'&&c<='9') return true;
    return false;
}

bool isPalindrome(string s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        if(!isAlphaNum(s[left])) ++left;
        else if(!isAlphaNum(s[right])) --right;
            else if((s[left]+32-'a')%32!=(s[right]+32-'a')%32)
            {return false;
            }
            else{
                ++left;
                --right;
            }
    }
    return true;
}
           
int main(){
    
    string test1 = "ismsi";
    string test2 = "isisism";
    string test3 = "12121212";
    cout<<isPalindrome(test3)<<endl<<isPalindrome(test2)<<endl;
    return 0;
}

