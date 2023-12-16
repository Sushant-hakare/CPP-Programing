#include<iostream>
using namespace std;
int n ,arr[10];

bool is_present(int num){
    for(int i=0 ; i<n ; i++){
        if(num==arr[i]){         
            return true;
        }
    }
    return false;
}

int main()
{
        int max_count=0;
        int index=0;
    cout<< "enter the size of array ";
    cin>>n;

    cout<<"enter the arary :"<< endl;
    for(int k=0; k<n ; k++){
          cin>>arr[k];
    }

    for(int i=0; i<n ; i++){

        int count=1;
        int current = arr[i];
        int dec=current;

        while(true){
            dec = dec-1;
            if(is_present(dec))
                count++;
            else
                break;
        }

       if(count>=max_count){
            max_count=count;
            index=i;
       }
    }
    
    //    cout<<"the max count is "<<max_count<<endl;    
    //    cout<<"the index is "<<index<<endl;    

cout<<"consicative elements are "<<endl;
    for(int i=0,j=arr[index] ; i<max_count ; i++,j--){
        cout<<j<<"  ";
    }
}