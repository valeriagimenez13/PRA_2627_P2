#ifndef DYV_H
#define DYV_H
#include<vector>
#include<chrono>

using namespace std;


template<typename T>

int busquedaBinaria(T X, vector<T> V, int ini, int fin){

        if(ini>fin){

                cout<<"No se encuentra el array";
		return -1;

        }else{

                int medio = (ini + fin) / 2;
                if(V[medio] == X){

                        return medio;

                }

                else{

                        if(V[medio]>X){

                                return busquedaBinaria(X,V,ini,medio-1);

                        }else{

                                return busquedaBinaria(X,V,medio+1,fin);

                        }

                }

        }

}

template<typename T>
int Partition(vector<T>& V, int ini, int fin); //vector como referencia para que ordene ESE

template<typename T>

void quicksort(vector<T>& V, int ini, int fin){

        if(ini<fin){

                int pivot = Partition(V, ini, fin); //partiton pone piv, en medio y devuelve su pos.
                quicksort(V, ini, pivot -1);//DERECHA
                quicksort(V, pivot+1, fin); //IZQUIERDA

        }

}

template<typename T>

int Partition(vector<T>& V, int ini, int fin){

        T x= V[fin];
        int i = ini;
        int aux=0;

        for(int j=ini; j<fin; j++){

                if(V[j]<=x){

                        aux=V[i];
                        V[i]=V[j];
                        V[j]=aux;

                        i=i+1; //i=ini que es la poscion a la que voy a cambiar, cuadno cambio -> ++

                }
        }

        aux=V[i];
        V[i]=V[fin];
        V[fin]=aux; //dejo el pivote entre los menores<pivote<mayores

        return i;

}

#endif

