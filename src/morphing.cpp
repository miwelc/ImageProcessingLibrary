/** @author Miguel Cantón Cortés
  * @file morphing.cpp
  * @brief Fichero de aplicación de la función morphing
  *
  * @see morphing
  */

#include "Imagen.h"
#include "funciones.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

	// Comprobar validez de la llamada
	if (argc != 4){
		cerr << "Error: Numero incorrecto de parametros.\n";
		cerr << "Uso: morphing <Imagen A> <Imagen B> <Prefijo>\n";
		exit (1);
	}
	morphing(argv[1], argv[2], argv[3]);

	return 0;
}
