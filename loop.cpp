#include<bits/stdc++.h>
using namespace std;

    
  
int print1(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}

}
int print2(int n){
    for(int i=1;i<=n;i++){
        if(n%2!=0){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
     cout<<endl;   
    }
}
}
int print3(int n){
    for (int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
 int n;
 cin>>n;
 print3(n);


return 0;
}