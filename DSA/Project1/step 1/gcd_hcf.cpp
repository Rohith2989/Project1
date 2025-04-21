#include <iostream>


using namespace std;


int main (){

int a,b , div;

cin>>a;
cin>>b;


for(int i=1; i< a ; i++){

if(  (a%i ==0) && (b%i==0)){


    div= i;
}



}

cout<<"gdc is" << div;






}