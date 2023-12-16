#include<iostream>
using namespace std;

void increasing(int start , int end)
{
    if(start == end)
        return;
    cout<<" "<<start+1;
    increasing(start+1 , end);
}

void decreasing(int end)
{
    if(end == 0 )
        return;
    cout<<" "<<end;
    decreasing(end-1);
}

void print_array(int a[] , int i, int n){
    if(i == n)
        return;
    cout<<" "<<a[i];
    print_array(a,i+1,n);
}
void print_array_reverse(int a[] , int i, int n){
    if(i == n)
        return;
    cout<<" "<<a[n-i-1];
    print_array_reverse(a,i+1,n);
}

int minimum(int a[] , int i , int n ,int min){
    if(i == n )
        return min;

    if(a[i] < min)
        min = a[i];
    minimum(a , i+1 , n ,min);
}

int factorial(int num)
{
    if(num == 0)
    return 1;
else 
return num*factorial(num-1);

}

int fibonanci(int num)
{
    if(num == 1)
        return 1;
    else if( num == 2)
    return 1;
       
    else
        return fibonanci(num-1) + fibonanci(num-2);
}
int main(){
//  int l=0 , r=10;
//  increasing(l,r);

//  decreasing(10);

// int arr[] = { 1,2,3,4,5,6};
// print_array(arr,0,6);


// int arr[] = { 1,2,3,4,5,6};
// print_array_reverse(arr,0,6);

// int arr[] = { 1,0,-3,-90,-29,-100};
// int res = minimum(arr , 0 , 6 ,  1000);
// cout<<"the minimum element in the array is : "<<res<<endl;

// int res = factorial(1);
// cout<<"factorial of n is : "<<res ;

int res = fibonanci(0);
cout<<"fibonanci of n is : "<<res ;
 return 0;
}