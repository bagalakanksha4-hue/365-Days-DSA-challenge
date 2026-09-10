#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
   
    cin>>marks;
     

    if(marks<=25){
        cout<<"grade F";
    }
    if(marks<=25 && marks<=45){
        cout<<"grade E";
    }
    if(marks<=45 && marks<=49){
        cout<<"grade D";
    }
    if(marks<=50 && marks<=59){
       cout<<"grade C";
    }
        if(marks<=60&& marks<=79){
           cout<<"grade B ";
        } 
        if(marks<=80 &&marks <=100){
           cout<<"grade A ";
        } 
return 0;
    }