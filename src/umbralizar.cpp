/** @author Miguel Cantón Cortés
  * @file umbralizar.cpp
  * @brief Fichero de aplicación de la función de umbralización automática
  *
  * @see umbralizar
  */

#include "Imagen.h"
#include "funciones.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

	// Comprobar validez de la llamada
	if (argc != 3){
		cerr << "Error: Numero incorrecto de parametros.\n";
		cerr << "Uso: umbralizar <FichImagenOriginal> <FichImagenDestino>\n";
		exit (1);
	}
	int t;
	umbralizar(argv[1], argv[2], t);
	cout << endl << "Umbral: " << t << endl;
	return 0;
}
