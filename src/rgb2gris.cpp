/** @author Miguel Cantón Cortés
  * @file rgb2gris.cpp
  * @brief Fichero de aplicación de la función conversión a escala de grises
  *
  * @see RGB2Gris
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
		cerr << "Uso: rgb2gris <FichImagenOriginal> <FichImagenDestino>\n";
		exit (1);
	}

	RGB2Gris(argv[1], argv[2]);
	
	return 0;
}
