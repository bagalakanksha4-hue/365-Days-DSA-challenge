#include<iostream>
using namespace std;
void square(int n){
  
  if(n<=1){
    cout<<"no is not prime";
  }
  return;
}
    for(int i=2;i*i<=n;i++){
    if(n%i==0){
    cout<<"no is not  prime";
    return;
  }
  
  cout<<"no is prime";
  
}
int main(){

  cout<<square(3);
 //13425
  return 0;
}