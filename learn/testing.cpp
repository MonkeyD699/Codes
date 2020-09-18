#include<iostream>
using namespace std;
//fibonacci series
int main()
{
	int n;
	cout<<"enter the no. upto  fibonacci series"<<endl;
	cin>>n;
	int t1=0;
	int t2=1;
	int next_term;
	for (int i=1;i<=n;i++)
	{
		if(i==1)
		{cout<<t1<<endl;
		continue;
		}
		else if (i==2)
		{
			cout<<t2<<endl;
		continue;
		}
		else
		{ next_term=t1+t2;
			cout<<next_term<<endl;
			t1=t2;
			t2=next_term;
			if (next_term>=n)
			{
				break;
		}
			
	}
}	
	return 0;
}
