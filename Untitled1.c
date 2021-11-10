#include<iostream>

using namespace std;

int main()
{
  int arr[10], n, i=0, j;
    bool flag;

    cout<<"Enter your numbers: " <<endl;

 while(i<10)
 {
   flag=false;
     cin>>n;
     for(j=0; j<i; j++){

  if(arr[j]==n){
      flag=true;
 }
}
if(flag==true)
    cout<<"you have entered "<<n <<" before. you cannot enter the same number twice." <<endl;

 else
{
 arr[i]=n;
 i++;
 }
}

cout<<"Numbers you entered are:" << endl;

    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
return 0;
}
