#include <iostream>
#include <stdio.h>
using namespace std;

int rekursiv(long long );//Funktionen vorher deklarieren mit typ des Übrgabe-Werts

int main(){
    long long  a;//langer int
    cout<<"Fakultaet von:";
    cin>> a;
    cout<<rekursiv(a)<<"\n";
    system("pause");//Wartet auf User-Input
}

int rekursiv(long long n){
    if(n==1)
    {
        return 1;
    }
    return n* rekursiv(n-1);

}