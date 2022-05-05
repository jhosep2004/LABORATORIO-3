#include <iostream> 
using namespace std; 
int potencia(int a,int b){ 
    int resultado=1; 
    for (int i=0;i<b;i++){ 
        resultado=resultado*a; 
    } 
    return resultado; 
} 
int main(){ 
    int num1,num2; 
    cout<<"numero : "; 
    cin>>num1; 
    cout<<"potencia : "; 
    cin>>num2; 
    
    cout<<"el resultado es : "<<potencia(num1,num2); 
}