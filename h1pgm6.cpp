#include <iostream>
void input(int a[],int size);
void search(int a[],int size);
void print(int a[],int&count,int&i);
using namespace std;
int main(){
	int count,i;
	int size=5,array[size];
	cout << "Enter 5 numbers :" << endl;
	input(array,size);
	search(array,size);
	for (int j=0;j<size ;j++){
		print(array,count,i);
	}
	
	return 0;
}
void input(int a[],int size){
	for (int i=0;i<size;i++){
		cin >> a[i];
	}
}
void search(int a[],int size){
	int count=0;
	for (int i=0;i<size;i++){
	for (int j=0;j<i;j++){
		if ( a[i]==a[j] ){
			count=1;
			count++;
		
		}
	}
	
	
}}
void print(int a[],int&count,int&i){
	cout << "The element " << a[i] <<" is repeated for " << count << " times " << endl;
}
