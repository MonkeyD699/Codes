#include <iostream>
using namespace std;

//bubble sort program
int main()
{   int temp;
	int n;
	int k;
	int t=0;
	cout<<"enter the numbe of tests";
	cin>>n;
	int array_List[n];
	
	for (int i=0;i<n;i++)
{
	cout<<"enter the numbers"<<endl;
	cin>>k;
	array_List[i]=k;
}

while(t<n+1)
{
for (int l=0;l<n;l++)
{
	for(int m=l+1;m<n;m++)
{  if(array_List[l]>array_List[m])
	{  temp=array_List[l];
		array_List[l]=array_List[m];
		array_List[m]=temp;           
		break;
	}
}	
	
}
t++;
}
for(int j=0;j<n;j++)
{
	cout<<array_List[j];
}
return 0;

}

