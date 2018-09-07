/*to program c++ for creating mirrored rhombus star pattern of desired size*/
#include<iostream>
using namespace std;
int main()
{//define the integers
int a,j,i ;
cout << "desired size"<< endl;
cin >> a;

for(int i=1; i<=a ;i++ )
{	
	for (int j=1;j<(2*i);j++)
	{//print spaces	
		cout<<" ";
		
	}
	for(int j=1;j<=a ; j++)
	{
	//printstars
	cout<<"*";
	}
	cout<<endl;
	}

return 0;
}




















