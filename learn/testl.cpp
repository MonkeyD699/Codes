#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	vector<int>s;
	while(t-->0){
		int k=0;
		int n;
		cin>>n;
		for(int i=0;i<n;++i){
			
			cin>>k;
			s.push_back(k);
			
		}
		  int count=0;
		  int count1=0;
		for(int i=0;i<n;i++){
			
			if(s[i]==0)
			{  count++;
		       if(s[i+1]==0&&s[i-1]==0)
		         count1++;
		
			}
	}
	
	if (count==1)
	cout<<"No"<<endl;
	else if(count1%2==0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
        s.clear();

}
	return 0;
}
