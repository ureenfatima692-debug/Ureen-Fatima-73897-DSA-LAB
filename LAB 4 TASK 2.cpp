#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter a character "<<endl;
	cin>>c;
	
	char *ptr = new char;
	*ptr = c;
	
	
	cout<<"You entered :"<<*ptr<<endl;
	
	delete ptr;
	ptr = nullptr;
	
	return 0;
	
}