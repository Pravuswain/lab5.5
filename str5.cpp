/*to program c++ for creating inverted  right triangle star pattern of desired size*/
#include<iostream>
using namespace std;
int main()
{//define the integers
int a,j,i ;
//ask about the size
cout << "desired size of base"<< endl;
cin >> a;

for(int i=1; i<=a ;i++ )
{	//choose location to print stars
	for (int j=1;j<=a-i+1;j++)
	{//print stars
		cout<<"*";
	}
 	
	cout<<endl;
}

return 0;
}




















