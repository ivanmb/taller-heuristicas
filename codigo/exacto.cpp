#include "common.h"
#include "grafo.h"
#include <iostream>
#include <set>

class MinimoConjuntoDominanteExacto {
		public:
			MinimoConjuntoDominanteExacto(const Grafo& g) : grafo(g) {
				mejorSolucion.reserve(grafo.nodos());
				conjuntoActual.reserve(grafo.nodos());
			}

			vuint resolver(){
				// Solucion inicial con todos los nodos
				FORN(i, grafo.nodos()) mejorSolucion.push_back(i);	

				backtrack(0);
				return mejorSolucion;
			}
		private:
			const Grafo& grafo;
			vuint mejorSolucion;
			vuint conjuntoActual;

			uint estaDominado() {
				std::set<uint> dominados;
				for(auto& v : conjuntoActual) {
					dominados.insert(v);
					for(auto& vecino: grafo.vecindad(v)) {
						dominados.insert(vecino);
					}
				}

				return dominados.size() == grafo.nodos();
			}

			void actualizarMejorSol() {
				if (conjuntoActual.size() < mejorSolucion.size() && estaDominado()) {
			        mejorSolucion = conjuntoActual;
				}
			}

			void backtrack(uint v) {
				if (v == grafo.nodos())	{
					actualizarMejorSol();
					return;
				}

				// pruebo agregando y no agregando el vértice al conjunto
			    conjuntoActual.push_back(v);
			    backtrack(v+1);
			    conjuntoActual.pop_back();	
			    backtrack(v+1);
			}

};
