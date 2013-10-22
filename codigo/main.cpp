#include <cstdlib>
#include "common.h"
#include "grafo.h"
#include "exacto.cpp"

using namespace std;

class Grafo leerInput(istream&);
void escribirOutput(ostream&, const vuint&);

Grafo leerInput(istream& is) {
	uint n, m;
	is >> n >> m;

	Grafo grafo(n);
	FORN(k, m) {
		uint i,j;
		is >> i >> j;
		i--; j--;

		grafo.agregarArista(i, j);
	}

	return grafo;
}

void escribirOutput(ostream& os, const vuint& solucion) {
	os << solucion.size() << endl;
	FORN(i, solucion.size())
		os << (solucion[i]+1) << " ";
	cout << endl;
}

int main() {
	Grafo grafo = leerInput(cin);

	MinimoConjuntoDominanteExacto solver(grafo);
	vuint solucion = solver.resolver();

	escribirOutput(cout, solucion);

	return EXIT_SUCCESS;
}
