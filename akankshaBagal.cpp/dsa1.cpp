//conditional statement 
#include<iostream>
using namespace std;
int main(){
    int marks  ;
    cout<<"enter the marks:";
    cin>>marks;
    if (marks>=90)
    {
        cout<<"Grade :A\n";

    }else if(marks>=80 && marks <90){
        cout<<"Grade :B\n";
        
     }
     else {
        cout<<"Grade :c\n";
     }
    return 0;
}