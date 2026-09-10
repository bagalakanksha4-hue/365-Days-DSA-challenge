#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
// cout<<"enter your age";
// cin>>age;
// if (age<18){
//     cout<<"your not eligible for job";
// }
// else if (age>=18 && age<=54){
//     cout<<"your eligible for job";
// }
// else if(age>=55 && age <=57){
//     cout<<"your eligible for job but retirment soon";
// }
// else if(age>57){
//     cout<<"retirment time";
// }
cout<<"enter the day";
cin>>day;
switch(day){
    case 1:
     cout<<"monday";
     break;
    case 2:
     cout<<"tuesday";
     break;
    case 3:
     cout<<"wednesday";
     break;
     case 4:
     cout<<"thusday";
     break;
     case 5:
     cout<<"friday";
     break;
     case 6:
     cout<<"saturday";
     break;
     case 7:
     cout<<"sunday";

default:
     cout<<"not availabel";
}
cout<<"check";
return 0;
}