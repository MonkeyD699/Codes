#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
  int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	int sum=0;
	for(int j=0;j<n-1;j++){
		
		if(arr[j+1]-arr[j]<0){
			sum=sum+(abs(arr[j+1]-arr[j]));
		}
		else 
		continue;
	}
	cout<<sum<<endl;
}
	
