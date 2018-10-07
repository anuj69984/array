#include <iostream>
using namespace std;

void index(int A[], int n,int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n;j++)
		{
			if(A[i]+A[j]==m){
				cout<<"index : "<<i<<","<<j<<endl;
				return;
			}
		}
	}
	cout<<"not found !"<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int A[n];
	int m;
	cin>>m;
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];
	}
	index(A,n,m);

	return 0;
}

