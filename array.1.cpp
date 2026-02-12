#include<iostream>
#include<vector>

using namespace std;
static bool cmp(int x,int y){
    if(x%2==0&&y%2!=0)
    return true;
    if(x%2!=0&&y%2==0)
    return false;
    if(x%2==0&&y%2==0)
    return x>y;
    if(x%2!=0&&y%2!=0)
    return x<y;
}

int main(){
    vector<int>v;
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    for(int i=0;i<n;i++)
    

}


