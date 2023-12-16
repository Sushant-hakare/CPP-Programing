#include<iostream>
using namespace std;

int n;
int arr[10];
    int new_arr[10];
bool is_present(int num){
    for(int i=0 ; i<n ; i++){
        if(num==arr[i]){         
            return true;
        }
    }
    return false;
}

int max_count()
{
    int max=0;
    for(int j=0 ; j<n ; j++)
    if(max<new_arr[j])
    max=new_arr[j];
    return max;
}
int max_index(int maxn)
{
    for(int j=0 ; j<n ; j++)
        if(maxn ==new_arr[j])
            return j;
}

int main(){


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
        new_arr[i]= count;
    }


    int con = max_count();
    int index= max_index(con);
  cout<<"enterd array is :  ";
    for(int j=0 ; j<n ; j++){
        cout<<arr[j];
        cout<<"  ";
    }

  cout<<"consicative numbers are :  ";
    for(int j= arr[index], i=0; i<con ; i++ , j--){
        cout<<j;
        cout<<"  ";
    }

    
    return 0;
}
    