#include<iostream>
using namespace std;
int main(){
    int n,k,stall[200];
    cout<<"enter the no of stall ";
    cin>>n;
    cout<<"enter the no of cow ";
    cin>>k;
    cout<<"enter the no of cows distance ";
    for(int i=0;i<n;i++){
        cin>>stall[i];
    }
    int start=1,end=stall[n-1]-stall[0],mid,ans=0;
   while(start<=end){
    mid=(start+end)/2;
   int count=1,pos=stall[0];
   for(int i=1;i<n;i++){
    if(mid+pos<=stall[i]){
        count++;
        pos=stall[i];
    }
   }
   if(count<k){
    end=mid-1;
   }
   else{
    ans=mid;
    start=mid+1;
   }
   }
   cout<<"proper distanc availabe distance is "<<ans;
}