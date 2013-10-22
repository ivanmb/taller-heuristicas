#include "exacto.h"

MinimoConjuntoDominanteExacto::MinimoConjuntoDominanteExacto(const Grafo& g) : MinimoConjuntoDominante(g) {
	mejorSolucion.reserve(grafo.nodos());
	conjuntoActual.reserve(grafo.nodos());
}

vuint MinimoConjuntoDominanteExacto::resolver(){
	// Solucion inicial con todos los nodos
	FORN(i, grafo.nodos()) mejorSolucion.push_back(i);	

	backtrack(0);
	return mejorSolucion;
}

		

uint MinimoConjuntoDominanteExacto::estaDominado() {
	std::set<uint> dominados;
	for(auto& v : conjuntoActual) {
		dominados.insert(v);
		for(auto& vecino: grafo.vecindad(v)) {
			dominados.insert(vecino);
		}
	}

	return dominados.size() == grafo.nodos();
}

void MinimoConjuntoDominanteExacto::actualizarMejorSol() {
	if (conjuntoActual.size() < mejorSolucion.size() && estaDominado()) {
        mejorSolucion = conjuntoActual;
	}
}

void MinimoConjuntoDominanteExacto::backtrack(uint v) {
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
