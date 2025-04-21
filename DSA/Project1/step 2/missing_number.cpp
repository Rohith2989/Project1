
#include <iostream>

using namespace std;



int main (){


int n;

cout<<"enter n";

cin>>n;
int a[n];

for(int i = 0; i< n; i++){

cout<<"elemtn";

cin>>a[i];


}



for(int i = 0 ; i<n ; i++){


    if(a[i] == i+1   && a[i+1] == i+3){

cout<<"missing number is "<<i+2;

    }



}





}