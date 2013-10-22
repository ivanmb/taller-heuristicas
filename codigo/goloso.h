#ifndef __AED3__GOLOSO__
#define __AED3__GOLOSO__

#include "common.h"
#include "grafo.h"
#include "mcd.h"

class MinimoConjuntoDominanteGoloso : MinimoConjuntoDominante {

		public:
			MinimoConjuntoDominanteGoloso(const Grafo& g);

			vuint resolver();
			
		private:
			// Definir otros métodos que necesiten
};

#endif
