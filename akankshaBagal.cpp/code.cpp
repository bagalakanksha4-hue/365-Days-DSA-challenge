#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n=10;
    int oddsum=0;
    while(i<=n)
    {
        i++;
        if(i%2!=0){
           oddsum+=i ;
          
        }
    }
    
     cout<<"oddsum="<<oddsum<<'\n';
   
    
    return 0;
}
// american standard code of information interchange 