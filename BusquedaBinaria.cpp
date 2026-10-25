#include<vector.h>
#include<chrono.h>

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
