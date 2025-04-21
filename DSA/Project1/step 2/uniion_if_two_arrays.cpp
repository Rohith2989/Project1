#include <iostream>
using namespace std;
int main(){

int a[10] = {1,1,11,1,18,8,12,3,21,5};
int b[5] = {9,8,7,6,5};

int arr[1000] ={};



for(int i=0 ; i<10 ; i++){

arr[a[i]] += 1;


}


for(int i=0 ; i<5 ; i++){

    arr[b[i]] += 1;
    
    
    }


cout<<"the union of these arrays are ";

for(int i=0 ; i<10 ; i++){

   cout<<a[i]<<"\t";
    
    
    }

cout<<"          &          ";
    for(int i=0 ; i<5 ; i++){

        cout<<b[i]<<"\t";
        
        
        }
    


cout<<endl;

    for(int i=0 ; i<1000 ; i++){

       if(arr[i]  != 0 ){

cout<< i<<"\t";

       }
        
        
        }
    




}