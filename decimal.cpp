#include<iostream>
#include<math.h>
using namespace std;

int n,digit =0 , res=0 ,i=0;

// int dec(){
// cout<<"enter the number \n";
//   cin>>n;
//   while(n!=0){
//     digit = n % 10 ;
//     if(digit == 1 ){
//       res = res + pow(2 , i );
//     }
//     n = n /10;
//     i++;
//   }
//   return res;
// }

int main(){
  int bit=0;
  cout<<"enter no \n";
  cin>>n;
  while(n!=0 ){
    bit = n & 1;
    res = (bit * (pow(10 , i ))) + res;
    cout<<"bit is = " <<bit << " i is = "<<i <<"  n is = "<<n << "   res = "<<res <<endl;
    n = n>>1;
    i++;
  }
    cout<<res;
    return 0;
}