#include<iostream>
using namespace std;
int main(){
int a[10];
int max,i;
cout<<"give me 10 number "<<endl;
cin>>a[10];

for(i=0,i<10,i++){
    cin>>a[i];
    max=a[1];
    if(max<a[i]){
        max=a[i]
    }
}
cout<<" this  is the biggest number : "<<max;

return 0;
}
