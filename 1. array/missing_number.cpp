#include <iostream>
using namespace std;


// METHOD 1
void missing(int *A, int n){
	int total_sum = (n+2)*(n+1)/2;

	cout <<"total sum is : "<<total_sum<<endl;
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+A[i];
	}
	cout<<"sum is : "<<sum<<endl;

	int result=total_sum - sum;
	cout<<"result : "<<result<<endl;
}

//METHOD 2
void missing_XOR(int *A, int n){
	int x1=1;
	int x2=A[0];
	for (int i = 2; i < n+2; ++i)
	{
		x1=x1^i;
	}

	for (int i = 1; i < n; ++i)
	{
		x2=x2^A[i];
	}

	int result=x2^x1;
	cout<<"result : "<<result<<endl;
}

int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,5,10,9,8,6};
	missing_XOR(A,9);
	
	return 0;
}