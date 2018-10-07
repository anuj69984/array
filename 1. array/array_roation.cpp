#include <iostream>
using namespace std;

// left rotation by k

void print_array(int *A, int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<"Array : "<<A[i]<<"\t";
	}
	cout<<endl;
} 

void rotate(int *A,int n, int rot){
	int B[n];
	int j=0;
	for (int i = rot; i < n; ++i)
	{
		B[j]=A[i];
		j++;
	}
	for (int i = 0; i < rot; ++i)
	{
		B[j]=A[i];
		j++;
	}

	cout<<"Array after rotation by "<<rot<<endl;
	for (int j = 0; j < n; ++j)
	{
		cout<<B[j]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the Array size : ";
	cin>>n;
	int A[n];
	cout<<"Enter array : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}

	int rot;
	cout<<"Enter by how much you want to roate : ";
	cin>>rot;
	rotate(A,n,rot);
	
	return 0;
}