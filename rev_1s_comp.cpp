#include<iostream>
#include<math.h>
using namespace std;
int rev(int num){
    int rem=0,res=0;
    while(num!=0){
        rem = num %10;
        if(res > pow(2,31)/10  || res < -pow(2,31)/10){
            return 0;
        }
        res = res * 10 + rem;
        num /= 10; 
    }
    return res;
}
int complement(int num)
{   int desk=0,res=0;
int n =num;
if(n== 0){
    return 1;
}
    while(num!=0){
        desk = desk<<1 | 1;
        num = num>>1;
    }
    res = (~n) & desk;
    return res;
}
int main(){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    // cout<< "reverse is : " << rev(n);
    cout<<"complement is : "<<complement(n);
    return 0;

}