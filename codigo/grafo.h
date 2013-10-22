#ifndef __AED3__GRAFO__
#define __AED3__GRAFO__

#include "common.h"

class Grafo {
		public:
			//Crea un grafo dada su cantidad de nodos.
			Grafo(uint nodos) : 
				adyacencia(nodos, vuint()),
				cnodos(nodos) {
						assert(nodos > 0);
				}
			
			//Cantidad de nodos
			uint nodos() const{
				return cnodos;
			}
			
			//Agrega una arista no dirigida entre inicio y fin.
			void agregarArista(uint inicio, uint fin){
				assert(inicio >= 0 && inicio < nodos());
				assert(fin >= 0 && fin < nodos());
				assert(inicio != fin);

				adyacencia[inicio].push_back(fin);
				adyacencia[fin].push_back(inicio);
			}

			//Devuelve los vecinos de un nodo.
			const vuint& vecindad(uint nodo) const{
				assert(nodo >= 0 && nodo < nodos());
				return adyacencia[nodo];
			}

		private:				
			//La representacion del grafo es por lista de adyacencia
			std::vector< vuint > adyacencia;
			uint cnodos;
};

#endif
