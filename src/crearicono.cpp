/** @author Miguel Cantón Cortés
  * @file crearicono.cpp
  * @brief Fichero de aplicación de la función de reducción de imagen
  *
  * @see crearIcono
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
		cerr << "Uso: crearicono <FichImagenOriginal> <FichImagenDestino> <Factor>\n";
		exit (1);
	}
	crearIcono(argv[1], argv[2], atoi(argv[3]));

	return 0;
}
