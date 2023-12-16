#include<iostream>
using namespace std;
    int n1,n2,count=0,bit=0;
int count_1(int n){
     for(int i=0 ; i<31 ; i++){
        bit = n&1;
        if(bit==1)
        count+=1;
         n= n>>1;
    }
    return count;
}
void fib(int n){
    int a=0,b=1,c=0;
    for(int i=0 ; i<n ; i++){
        cout<<' '<<c;
        a=b;
        b=c;
        c=a+b;
    }
}
void dummy (int n){
    cout<<"num pass by value is : "<< ++n<<endl;
}

int main(){
    int n1;
    cout<<"no : ";
    cin>>n1;
    cout<<"n1 is  : "<< n1<<endl;
    dummy(n1);

    cout<<"n2 is  : "<< n1;

    // fib(n1);

    // cout<<"no : ";
    // cin>>n2;
    // count_1(n1) ;
    // cout<<" \n count : "<< count_1(n2) ;


    return 0;
}