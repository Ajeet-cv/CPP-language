#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of number";
    cin>>n;
    int arr[n];
    cout<<"enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=arr[0];
    for(int i=0;i<5;i++)
{
    if (arr[i]<ans)
    ans=arr[i];
}
cout<<ans;
}
