#include <iostream>
using namespace std;

int main(){
char variable;
cout<<"Give a grade (A,B,C,D,F)"<<endl;
cin>>variable;
variable= toupper(variable);
switch(variable){
 case 'A': cout<<"Excelent"<<endl;break;
 case 'B': cout<<"Very good"<<endl;break;
 case 'C': cout<<"Good"<<endl;break;
 case 'D': cout<<"Approved"<<endl;break;
 case 'F': cout<<"Failed, try again"<<endl;break;
 default: cout<<"Invalid option"<<endl;
 }
return 0;
}
