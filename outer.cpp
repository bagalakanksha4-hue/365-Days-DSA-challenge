#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if(marks<=25){
        cout<<"grade F\n";
    }
    else if(marks<=25 && marks<=45){
        cout<<"grade E\n";
    }
    else if(marks<=45 && marks<=49){
        cout<<"grade D\n";
    }
    else if(marks<=50 && marks<=59){
       cout<<"grade C\n";
    }
        else if(marks<=60&& marks<=79){
           cout<<"grade B \n";
        } 
        else if(marks<=80 &&marks <=100){
           cout<<"grade A \n";
        } 
return 0;
    }