#ifndef __AED3__SOLVER__
#define __AED3__SOLVER__

#include "common.h"
#include "grafo.h"

class MinimoConjuntoDominante {  
   	public:
		MinimoConjuntoDominante(const Grafo& g) : grafo(g) {	}
      	virtual vuint resolver() = 0;

	protected:
			const Grafo& grafo;
};


#endif