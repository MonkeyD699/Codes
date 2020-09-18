#include<bits/stdc++.h>
 
 //smallest subset
 
using namespace std;

 int main(){
	int ar[]={1,2,3,4,5,6};
	
	int t,n;
	cin>>t;
	while(t-->0){
		cin>>n;
		int total=1 << n;
		
		for(int mask=0;mask<total;mask++)
		{
			for(int i=0;i<total;i++)
			{
				int f=1<<i;
				if((mask & f)!=0)
				cout<<ar[i];
			}
			cout<<endl;
	}
	 int size=sizeof(ar)/sizeof(ar[0]);
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+ar[i];
	}
	int result=sum*pow(2,size-1);
	cout<<result;
	 return 0;
 }
}
