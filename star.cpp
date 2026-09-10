#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        cout<<endl;//j<2*n-(2*i+1);
    }
}
void print(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        cout<<endl;//j<2*n-(2*i+1);
    }
}
void print2(int n){
    for(int i=0;i<=2*n-1;i++){
        int stars=i;
       
        for(int j=1;j<=stars;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print3(int n){
    int space =2*(n-1);
   for(int i=1;i<=n;i++){
    //num
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
   cout<<endl;
   space-=2;
}
}
void print7(int n)
{
    
    for(int i=1;i<=n;i++){
        char value='A';
        for(int j=1;j<=i;j++){

         cout<<value<<" ";
         value+=1;

    }
    cout<<endl;
}
        
    }
void print8(int n)
{
    
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
             
         cout<<ch<<" ";
    }
    cout<<endl;
}
        
    }
void print9(int n){
   
    for(int i=0;i<=n;i++){
       
     for(int j=0;j<=n-i-1;j++){
        cout<<" ";
      }
          char ch='A';
          int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
           if (j<=breakpoint) ch++;
           else ch--;
        }
           for(int j=0;j<=n-i-1;j++) {
           
        cout<<" ";
           }
           cout<<endl;
    }
   
    
}
void print10(int n){
 for(int i=0;i<=n;i++){
    for(char ch='E'-i;ch<='E';ch++){
        cout<<ch;
    }
    cout<<endl;
 }
}
void print11(int n){
    for(int i=1;i<=n;i++){
        for(for int j=1;j<=i;j++){
            cout<<"*";
        if()//standard template labirary
        }
    }
}
int main(){
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++){
    int n;
    cin>>n;
    print10(n);
    
}