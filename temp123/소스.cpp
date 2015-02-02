#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cout<<"asdf\n";
	cout<<"qwerty\n";
	cout<<"Hello, world!"<<endl;
	cout<<"a"<<endl;

	int a[10]={1,6,3,21,7,5,2,6,73};

	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a, a+10);

	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}