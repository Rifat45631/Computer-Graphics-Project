#include<iostream>
using namespace std;
int main(){
    int n;

    int sum;
    cout<<"type list "<<endl;
    cin>>n;
    int students[n];

for(int i=0;i<n;i++)
    {
    cin>>students[i];
sum= sum+students[i];
}
cout<<"total"<<sum;
float avg = (float)sum/n;

cout<<"average8 "<<avg<<endl;
return 0;
}
