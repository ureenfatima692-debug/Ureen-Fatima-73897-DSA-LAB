#include<iostream>
using namespace std;
int main(){
	int rows , cols ;
	cout<<"Enter number of rows "<<endl;
	cin>>rows;
	cout<<"Enter number of columns "<<endl;
	cin>>cols;
	int **arr= new int*[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
	}
	cout<<"Enter elements "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<rows;i++){
		delete[]arr[i];
		return 0;
	}
}