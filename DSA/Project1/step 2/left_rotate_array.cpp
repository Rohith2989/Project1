#include <iostream>

using namespace std;


int main (){
int temp;


int n;

cout<<"enter of elements ";
cin>> n;


int a[n] ;

for(int i=0 ; i<n; i++){

cout<<"element";
cin>>a[i];    
    
    }

temp = a[0];


for(int i=0 ; i<n; i++){





a[i] = a[i+1];







}



a[n-1] = temp ;


for(int i=0 ; i<n; i++){

    cout<< a[i]<<"\t";
    
    
    
    
    
    }

}