#include<iostream>
using namespace std;

int main()
{  int r,c;
cout<<"enter matrix size"<<endl;
   cin>>r>>c;
   int arr[r][c];
   cout<<"matrix size="<<r<<"x"<<c<<endl;

 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
      cin>>arr[i][j];
    }
 }

 cout<<"Matrix M1=\n";
  for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
 }

    return 0;
}
