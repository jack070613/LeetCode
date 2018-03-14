#include<stdlib.h>
#include<iostream>
#include<stack>

using namespace std;

bool validparenthesis(string);
bool isleft(char);
bool isclose(char,char);


int main(){
	string test1 = "([])[]{}";
	string test2 = "(}({)";

	bool ans1=validparenthesis(test1);
	bool ans2=validparenthesis(test2);
	cout << ans1 <<endl <<ans2<<endl;

	return 0;
}



bool validparenthesis(string s){
	stack<char> record;
	
	for(int i=0;i<s.size();i++){
		if(isleft(s[i])) record.push(s[i]);
		else{
			if(record.empty() || !isclose(record.top(),s[i])) return false;
			record.pop();
		}
	}
	return record.empty();
}


bool isclose(char a,char b){
	if( a=='(')  return b==')';
	if(a=='[') return b==']';
	if(a=='{') return b=='}';
	return false;
}


bool isleft(char x){
	if(x=='(' || x=='[' || x=='{') return true;
	return false;
}








