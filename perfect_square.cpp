#include<iostream>
using namespace std;

int main(){
    int n,bit=0,count=0 ;
    cin>>n;
    while(n!=0){
        bit = n&1;
        if(bit == 1 )
        count++;
        n = n>>1;
    }
        if(count >1 )
        cout<<"Not an square ";
        else
        cout<<" square ";
    return 0;
}