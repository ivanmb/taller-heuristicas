#ifndef __AED3__EXACTO__
#define __AED3__EXACTO__

#include "common.h"
#include "grafo.h"
#include "mcd.h"
#include <set>

class MinimoConjuntoDominanteExacto : MinimoConjuntoDominante {

		public:
			MinimoConjuntoDominanteExacto(const Grafo& g);
			vuint resolver();

		private:
			vuint mejorSolucion;
			vuint conjuntoActual;

			// Indica si el conjunto actual domina todo el grafo
			uint estaDominado(); 
			// Verifica si el conjunto actual es mejor solucion y la actualiza
			void actualizarMejorSol(); 
			// Backtracking
			void backtrack(uint v);
};

#endif
