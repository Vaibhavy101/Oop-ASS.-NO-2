#include <iostream>
using namespace std;

int main()
{

    int i,a[10],size;
    cout<<"Enter array size( Max:10 ) :";
    cin>>size;
        cout<<"\nEnter array elements :\n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
            cin>>a[i];
        }

    cout<<"\nFirst number in the Array :: "<<a[0]<<endl;
    cout<<"\nLast number in the Array :: "<<a[size-1]<<endl;
    return 0;
}
