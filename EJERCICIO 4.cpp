#include <iostream> 
using namespace std; 
int primo(int final){ 
    if (final==0 || final==1){ 
        return 0; 
    } 
    if (final==4){ 
        return 0;
    } 
    for (int i=2;i<final/2;i++){ 
        if (final%i==0){ 
            return 0; 
        } 
    } 
    return 1; 
} 
int main(){ 
    int fin; 
    cout<<"introduzca el final : "; 
    cin>>fin; 
    for(int i=1;i<fin;i++){ 
        if (primo(i)){ 
            cout<<i<<" "; 
        } 
    } 
}