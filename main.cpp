#include <iostream>
using namespace std;

void read_matrix(int arr[50][50],int x,int y);
void display_matrix(int arr[50][50],int x,int y);

int main()
{   int arr[50][50],m,n;
    cout<<"enter matrix size m =  ";
    cin>>m;
     cout<<"\nenter matrix size n =  ";
    cin>>n;
    read_matrix(arr,m,n);
    display_matrix(arr,m,n);
}
void read_matrix(int arr[50][50],int x,int y)
{   int i,j;
    cout<<"enter element\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void display_matrix(int arr[50][50],int x,int y)
{   
    int i,j;
    cout<<"matrix is:"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<arr[i][j]<<"\t";
        }cout<<endl;
    }
}

