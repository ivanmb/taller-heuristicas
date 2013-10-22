#ifndef __AED3__LOCAL__
#define __AED3__LOCAL__

#include "common.h"
#include "grafo.h"
#include "mcd.h"

class MinimoConjuntoDominanteLocal : MinimoConjuntoDominante {

		public:
			MinimoConjuntoDominanteLocal(const Grafo& g);

			vuint resolver();
			
		private:
			// Definir otros métodos que necesiten
};

#endif
