#include<iostream>
using namespace std;
int main(){
    char arr[100];
    
    for(int i=0;i<26;i++){
        arr[i]=i+'a';
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }

}