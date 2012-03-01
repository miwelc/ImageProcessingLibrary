/** @author Miguel Cantón Cortés
  * @file funciones.h
  * @brief Fichero cabecera de funciones extra para la modificación de imagenes
  *
  * Estas funciones sirven de ejemplo de la clase Imagen
  *
  */

#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_

/**
  * @brief Función que convierte una imagen RGB (PPM) a escala de grises (PGM)
  *
  * @param fich_E dirección de la imagen origen
  * @param fich_S dirección de la imagen destino
  */
void RGB2Gris(const char* fich_E, const char* fich_S);

/**
  * @brief Función que cambia el contraste de la imagen en función del parámetro gamma
  *
  * @param fich_E dirección de la imagen origen
  * @param fich_S dirección de la imagen destino
  * @param gamma
  */
void mejorarContraste(const char* fich_E, const char* fich_S, float gamma);

/**
  * @brief Función que realiza un ecualizado automático de la imagen
  *
  * @param fich_E dirección de la imagen origen
  * @param fich_S dirección de la imagen destino
  */
void ecualizar(const char* fich_E, const char* fich_S);

/**
  * @brief Función que realiza un umbralizado automático de la imagen
  *
  * @param fich_E dirección de la imagen origen
  * @param fich_S dirección de la imagen destino
  */
void umbralizar(const char* fich_E, const char* fich_S, int &T);

/**
  * @brief Función que reduce el tamaño de una imagen en un factor "factor"
  *
  * @param fich_E dirección de la imagen origen
  * @param fich_S dirección de la imagen destino
  * @param factor factor de reducción de la imagen
  */
void crearIcono(const char* fich_E, const char* fich_S, int factor);

/**
  * @brief Función que genera una lista de imagenes interpoladas entre dos de referencia
  *
  * @param fich_E dirección de la imagen A
  * @param fich_S dirección de la imagen B
  * @param prefijo dirección de las imagenes destino
  */
void morphing(const char* fich_E, const char* fich_S, const char* prefijo);

#endif
