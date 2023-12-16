#include<iostream>
using namespace std;

int stack[10],top=-1,n;

void push(int num){
    if(top!=n-1)
        stack[++top]=num;
    else
        cout<<"stack overflow \n";
}

int pop()
{
    if(top==-1)
        cout<<"stack under flow \n";
    else
        return stack[top--];
}

void display()
{
    for(int i=0 ; i<=top ; i++)
        cout<<"stk["<<i<<"] = "<<stack[i]<<endl;
}
int main(){
    int choice,no;
    cout<<"enter  the value of n \n";
    cin>>n;
    cout<<"enter the "<<n<<"elements \n ";
    for(int i=0 ; i<n ;i++){
        cin>>stack[++top];
    }

    while(1){
        cout<<"\nenter the choice : ";
        cin>>choice;
        
        switch(choice){
            case 1: cout<<"\nenter the number to insert : ";
                cin>>no;
                push(no);
                break;
            case 2: cout<<"popped element is : "<<pop()<<endl;
                break;
            case 3 : cout<<"\n \n stack elements are : \n";
                display();
                break;
            default : cout<<"wrong choice \n";
                return 0;
        }
    }
    return 0;
}


// int main(){
//     for(int i=1;i<7 ; i++){
//         for(int j=0 ; j<i ; j++){
//             cout<<i-j << " ";
//         }
//         cout<<endl;
//     }
// }
// bool isprime(int num){
//     for(int i=2 ; i<num ; i++){
//         if(num%i==0)
//             return false;
//     }
//         return true;
// }
// int main(){
// int n;
//     cout<<"enter the no"<< endl;
//     cin>> n;
//     if(isprime(n))
//     cout<<"it is prime \n";
//     else
//     cout<<"it is not a prime number \n";

//     return 0;
    
// }