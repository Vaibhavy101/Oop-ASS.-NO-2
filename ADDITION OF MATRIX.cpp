#include<iostream>
using namespace std;
int main()
{
	int a[10][10], b[10][10], sum[10][10],r,c,i,j,k ;
	cout<<"enter the no of row";
	cin>>r;
	cout<<"enter the no of column";
	cin>>c;
	cout<<"enter the element of first matrix"<<"\n";
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cin>>a[i][j];
		}
	}
    cout<<"enter the element of second matrix"<<"\n";
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"Addition of matrix is = \n";
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
				sum[i][j] = a[i][j]+b[i][j];		
		}
	}
	for(i=0; i<r; i++)	
	{
		for(j=0; j<c; j++)
		{
			cout<<sum[i][j]<<"  ";
		}
		cout<<"\n";
	}

	return 0;
}

