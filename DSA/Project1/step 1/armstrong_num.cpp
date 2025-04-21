#include <iostream>
#include <math.h>

using namespace std;

int main(){

int n,arm=0,r;
cout<<" enter number";
cin>>n;
int index = 0;
int temp = n;
int temp2 = n;
while (temp != 0){

    index++;
    
    temp = temp /10;

}





while (temp2 != 0){

    r = temp2 %10;

    arm =arm + pow(r,index);
    

    temp2 = temp2/10;



}

if(arm == n){
    cout<<"it is an arm num";

}
else{
    cout<<"it aint";
}



}