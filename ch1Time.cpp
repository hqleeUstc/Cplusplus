#include<iostream>
#define Minute 60
#define Second 60
int main(){
int time = 0;
cin>>time;
int h,m,s;
h = time/(Minute*Second);
m = time%(Minute*Second)/Minute;
s = time - h*(Minute*Second) - m*Minute;
cout<<"The time spent is "<<h<<" "<<m<<" "<<s;

return 0;}
