//
//  main.cpp
//  Min_Stack
//
//  Created by JackLin on 2018/2/26.
//  Copyright © 2018年 JackLin. All rights reserved.
//


#include <iostream>
#include<vector>
#include<stack>
using namespace std;


class Minstack{
    vector<int> values;
    stack<int> min_index;

    public:
    Minstack(){};
    void push(int x){
        if(values.size()==0){
            values.push_back(x);
            min_index.push(values.size()-1);
            return;
        }
        int cur_min=min_index.top();
        values.push_back(x);
        if(x>values[cur_min]){
            min_index.push(cur_min);
        }
        else{
            min_index.push(values.size()-1);
        }
    }
    
    void pop(){
        values.pop_back();
        min_index.pop();
    }
    
    int top(){
        return values[values.size()-1];
    }
    
    int getMin(){
        return values[min_index.top()];
    }
    
    
};




int main(int argc, const char * argv[]) {
    
    Minstack A;
    for(int i=0;i<9;i++){
        A.push(i);
    }
    cout<<A.top()<<endl;
    A.pop();
    cout<<A.top()<<endl;
    cout<<A.getMin()<<endl;

    
    return 0;
}
