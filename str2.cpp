/*to program c++ for creating hollow square star pattern of desired size*/
#include<iostream>
using namespace std;
int main()
{//define the integers
int a,j,i ;
cout << "desired size"<< endl;
cin >> a;

for(int i=1; i<=a ;i++ )
{	for(int j=1;j<=a ; j++)
	{
		if(i==1||i==a||j==1||j==a)
		//print stars as borders
		{
		cout<<"*";
		}
		else//print spaces at middle
		{
		cout<<" ";
		}
	}
	cout<<endl;
	}

return 0;
}




















