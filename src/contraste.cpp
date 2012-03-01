/** @author Miguel Cantón Cortés
  * @file contraste.cpp
  * @brief Fichero de aplicación de la función de mejora de contraste
  *
  * @see mejorarContraste
  */

#include "Imagen.h"
#include "funciones.h"

#include <stdlib.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

	// Comprobar validez de la llamada
	if (argc != 4){
		cerr << "Error: Numero incorrecto de parametros.\n";
		cerr << "Uso: contraste <FichImagenOriginal> <FichImagenDestino> <Gamma>\n";
		exit (1);
	}
	mejorarContraste(argv[1], argv[2], atof(argv[3]));

	return 0;
}
