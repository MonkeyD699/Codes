#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	map<int,int>m;
	
	while(t-->0){
		
		int n;
		cin>>n;
		int k=0;
		
		vector<int>v;
		for(int i=0;i<n;++i){
			
			cin>>k;
			v.push_back(k);
		}
		      int count=0;
		for(int i=0;i<n;++i)
		{
			for(int j=i+1;j<n;j++){
				
				count++;
							}
		   m.insert({v[i],count});					
							
			
		
		
}		for(auto itr=m.begin();itr!=m.end();++itr){
			cout<<itr->first<<'\t'<<itr->second<<'\n';
		}
	
	
	
	return 0;
}
}
