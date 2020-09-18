#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long int chef;
	long long int rick;
	cin>>t;
	while(t-->0){
	cin>>chef;
	cin>>rick;
	int c1=0;	
	while(chef!=0){
		chef=chef/10;
		c1++;
}
   int r1=0;
while(rick!=0){
	rick=rick/10;
	r1++;
}
if(r1&c1==1){
	cout<<r1;
	cout<<1;
}
if(r1>c1){
	cout<<
