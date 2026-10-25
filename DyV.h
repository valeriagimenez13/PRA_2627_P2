#ifndef DYV_H
#define DYV_H
#include<vector>
#include<chrono>

using namespace std;


template<typename T>

BusquedaBinaria(T X, vector<T> V, int ini, int fin){

        if(ini>fin){

                cout<<"No se encuentra el array";

        }else{

                int medio = (ini + fin) / 2;
                if(V[medio] == X){

                        return medio;

                }

                else{

                        if(V[medio]>X){

                                return BusquedaBinaria(X,V,ini,medio-1);

                        }else{

                                return BusquedaBinaria(X,V,medio+1,fin);

                        }

                }

        }

}

template<typename T>

QuickSort(vector<T> V, int ini, int fin){

        if(ini<fin){

                int pivot = Partition(V, ini, fin); //partiton pone piv, en medio y devuelve su pos.
                QuickSort(V, ini, pivot -1);//DERECHA
                QuickSort(V, pivot+1, fin); //IZQUIERDA

        }

}

template<typename T>

Partition(vector<T>, int ini, int fin){

        T x= V[fin];
        int i = ini;
        int aux=0;

        for(int j=ini; j<fin-1; i++){

                if(V[j]<=x){

                        aux=V[i];
                        V[i]=V[j];
                        V[j]=aux

                        i=i+1; //i=ini que es la poscion a la que voy a cambiar, cuadno cambio -> ++

                }
        }

        aux=V[i];
        V[i]=V[fin];
        V[fin]=aux; //dejo el pivote entre los menores<pivote<mayores

        return i;

}

#endif

