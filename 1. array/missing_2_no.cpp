#include <iostream>
#include <algorithm>
using namespace std;

void missing(int *A, int n){
	sort(A,A+n);
	int j=0;
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;

	for (int i = 1; i < n+2; ++i)
	{
		if (i !=A[i])
		{
			/* code */
		}
	}
}

int main(int argc, char const *argv[])
{
	int A[]={1,8,4,2,6};
	missing(A,5);
	return 0;
}