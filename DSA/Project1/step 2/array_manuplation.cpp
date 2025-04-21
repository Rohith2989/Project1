#include <iostream>

using namespace std;

int main (){

int a[6] = {1,-2,3,4,-5,-6};
int temp = 0;



for(int i = 0 ; i< 6 ; i++ ){

for(int j = 0 ; j< 6 ; j++){



    if(a[j] >=0 && a[j+1]<0 && a[j-1]>=0 ){

temp = a[j];

a[j]=a[j+1];

a[j+1] = temp;



    }



}



}


for(int i = 0 ; i<6 ; i++){




    cout<<a[i]<<"\t";
}





}