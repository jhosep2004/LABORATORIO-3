#include <iostream> 
using namespace std; 
void tiempo(int a,int b,int c,int d,int e,int f){ 
    int cantyear,cantmes,cantdia; 
    if (d>c){ 
        cantyear=f-e; 
        cantmes=d-c; 
        if(b>a){ 
            cantdia=b-a; 
        } 
        else{ 
            if (c==1 or c==3 or c==5 or c==7 or c==8 or c==10 or c==12){ 
                cantdia=b+(31-a); 
            } 
            else if (c==4 or c==6 or c==9 or c==11){ 
                cantdia=b+(30-a); 
            } 
            else{ 
                if (f%4==0 and f%100!=0 or f%400==0){ 
                    cantdia=b+(29-a); 
                } 
                else{ 
                    cantdia=b+(28-a); 
                } 
            } 
        } 
    } 
    else { 
        cantyear=f-e-1; 
        cantmes=12-(d-c); 
    } 
    cout<<"En total tiene "<<cantyear<<" años "; 
    cout<<", "<<cantmes<<" meses y "; 
    cout<<cantdia<<" dias ";
} 
int main(){ 
    int dia1,dia2,mes1,mes2,year1,year2; 
    do{ 
        cout<<"Ingrese la fecha de nacimiento"<<endl; 
        cout<<"dia : "; 
        cin>>dia1; 
        cout<<"mes : "; 
        cin>>mes1; 
        cout<<"año : "; 
        cin>>year1; 
        cout<<"Ingrese la fecha actual"<<endl; 
        cout<<"dia : "; 
        cin>>dia2; 
        cout<<"mes : "; 
        cin>>mes2; 
        cout<<"año : "; 
        cin>>year2; 
        cout<<endl; 
    } 
    while(dia1>31 or mes1>12 or year2<year1 or dia2>31 or mes2>12); 
    
    tiempo(dia1,dia2,mes1,mes2,year1,year2); 
}