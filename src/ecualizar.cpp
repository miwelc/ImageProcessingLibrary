/** @author Miguel Cantón Cortés
  * @file ecualizar.cpp
  * @brief Fichero de aplicación de la función de ecualización automática
  *
  * @see ecualizar
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
		cerr << "Uso: ecualizar <FichImagenOriginal> <FichImagenDestino>\n";
		exit (1);
	}
	ecualizar(argv[1], argv[2]);

	return 0;
}
