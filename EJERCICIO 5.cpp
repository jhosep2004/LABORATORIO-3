#include <iostream> 
using namespace std; 
void par(int a){ 
    if(a%2==0){ 
        cout<<" el numero es par "<<endl; 
    } 
    else{ 
        cout<<" el numero no es par "<<endl; 
    } 
} 
int sumarimpar(int b){ 
    int sumar=0;
    for (int i=0;i<b;i++){ 
        if(i%2!=0){ 
            sumar=sumar+i; 
        } 
    } 
    return sumar; 
} 
int main(){ 
    int numero; 
    do{ 
        cout<<" ingrese un vaalor entre 0 y 100 : "; 
        cin>>numero; 
    } 
    while(numero<0 or numero>100); 

    par(numero); 
    
    cout<<" la suma de los numero impares es : "<<sumarimpar(numero); 
}