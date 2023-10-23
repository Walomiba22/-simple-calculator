#include<iostream>
using namespace std;
int main(){
	float a,b;
	char opr;
	cout<<"enter the frist number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"enter the operation(+,*,-,/)";
	cin>>opr;
	if(opr=='+')
	cout<<a+b;
	else if(opr=='-')
	cout<<a-b;
	else if(opr=='*')
	cout<<a*b;
	else if(opr=='/')
	{
		if(b==0)
		cout<<" undifen";
		else
		cout<<a/b;
	}
	else
	cout<<"this calculetarcan not do this";
	return 0;
}
