#include <iostream>

using namespace std;

int main()
{

   int arr[8][8];
   int r,c;
   int temp=0;
   cout <<"Enter Matrix Rows and columm: "<< endl;
   cin>>r>>c;
   cout <<"Enter Matrix :"<< endl;
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
           {
               cin>>arr[i][j];
           }
   }
   if(r!=c)
   {
   	temp=r;
   	r=c;
   	c=temp;
   	temp=0;
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<i;j++)
       {
           temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
       }
   }
   
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<" "<<arr[i][j];
       }
       cout<<endl;
   }
   return 0;
}
