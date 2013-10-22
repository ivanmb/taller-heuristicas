#include "common.h"
#include "grafo.h"
#include "mcd.h"

class MinimoConjuntoDominanteGoloso : MinimoConjuntoDominante {

		public:
			MinimoConjuntoDominanteGoloso(const Grafo& g) : MinimoConjuntoDominante(g) {
				
			}

			vuint resolver(){
				// Rellenar con la solución
				// Pueden acceder a la variable grafo definida en MinimoConjuntoDominante
				vuint solucion;

				return solucion;
			}
			
		private:
			// Definir otros métodos que necesiten
};
