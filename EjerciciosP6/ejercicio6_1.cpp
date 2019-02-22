#include <iostream>
#include <vector>
#include <math.h>
#include "numero.h"
using namespace std;

void imprimeNums(){

}

int main(int argc, char const *argv[])
{
    int n,op,aux,i,j;
    cout << "Bienvenido a numeros primos por la Criba de eratostenes\nIntroduce una N"<<endl;
    cin >> n;

    vector<Numero> nums;
    nums.reserve(n-1);

    for(i=0;i<n-1;++i){
        nums[i]=i+2;
    }

    //ejemplo del arreglo [2,3,4,5,6,7,8,9,10]
    for(i=0;i<n-1;++i){
        op = pow(nums[i].getNum(),2);
        if(op < n){//si el cuadrado del numero que estamos analizando es mayor a la N, 
                    //termina el algoritmo y todos los numeros anteriores son declarados primos
            if(nums[i].isPrimo()){//caso 0 es no asignado
                //recorremos el arreglo en multiplos del numero elegido y los numeros en los que caiga son los que son no primos
                aux = nums[i].getNum();
                for(j=(i+aux);j<n-1;j+=aux){
                    nums[j].setNoPrimo();
                }
            }
        }else{
            break;
        }


    }

    for(i=0;i<n-1;++i){
        if(nums[i].isPrimo()){   
            cout << "" << nums[i].getNum()<<endl;
        }
    }

    return 0;
}
