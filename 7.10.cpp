#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i,n,c,ioc=-1;
    cout<<"Enter value to find: ";
    cin>>n;
    for(i=0; i<10; i++)
        if(arr[i]==n)
        ioc=i;
    if(ioc==-1)
        cout<<"Value not found in the array ";
    else
        cout<<"Value find at index "<<ioc;
    return 0;
}
