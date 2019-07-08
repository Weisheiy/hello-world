#include <iostream>

using namespace std;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int eat = y%x?1:0;
	int last = n-eat-y/x;
	if(last>=0){
		cout<<last;
	}else{
		cout<<"0";
	}
	return 0;
}
