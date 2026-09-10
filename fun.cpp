#include<iostream>
using namespace std;
int check(int n){
    int sum;
    cout<<"enter the no\n";
    cin>>n;
    for(int i=2;i<=n;i++){
        sum=sum+i;

    if(n=1 && n%2==0){
        cout<<"no is not prime\n";
    
    }

     else{
     cout<<"no is prime";
     
    }
}
}

int main(){
   
   cout<< check(10);
   
   return 0;
}