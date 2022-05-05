
#include <iostream> 
using namespace std; 
void bisiesto(int a){ 
    if(a%4==0 and a%100!=0 or a%400==0){ 
        cout<<"el año es bisiesto"; 
    } 
    else{ 
        cout<<"el año no es bisiesto"; 
    } 
} 
int main(){ 
    int year; 
    cout<<"Introduzca el año : ";
    cin>>year; 
    bisiesto(year); 
}