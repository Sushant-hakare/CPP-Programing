#include<iostream>
using namespace std;


int binary_search(int arr[] , int size, int key){
    int low =0 ,high=size;
    int res=-1;

    while(low<=high){

        int mid= high-(high-low)/2;

        if(arr[mid] == key)
            low = mid+1;
        else if( arr[mid] < key){
            low = mid+1;
        }
        else if( arr[mid] > key) {
            res = arr[mid];
            high = mid -1;
        }
    }   
    return res;
}

int main(){
    int a[] = {0,1,2,5,7};

    cout <<"small value that is greater then k is  : " << binary_search(a,5,4);
    return 0;
}