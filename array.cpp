#include<iostream>

using namespace std;

void reverse(int a[], int n){
    int start=0 ,end=n-1;

    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

}
void print(int a[] , int n){
    for(int i=0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9};

   print(arr,9);
   reverse(arr,9);
   print(arr,9);
    return 0;

}