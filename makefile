LIB = lib
OBJ = obj
SRC = src
BIN = bin
INCLUDE = include

LDFLAGS = -L$(LIB) -lImagen

all: libImagen.a negativo rgb2gris contraste crearicono morphing umbralizar ecualizar

libImagen.a: Imagen.o imagenES.o
	ar rvs $(LIB)/libImagen.a $(OBJ)/Imagen.o $(OBJ)/imagenES.o

Imagen.o: $(SRC)/Imagen.cpp
	g++ -c $(SRC)/Imagen.cpp -o $(OBJ)/Imagen.o -I$(INCLUDE)

imagenES.o: $(SRC)/imagenES.cpp $(INCLUDE)/imagenES.h
	g++ -g -c -o $(OBJ)/imagenES.o $(SRC)/imagenES.cpp -I$(INCLUDE)

negativo: negativo.o libImagen.a
	g++ -g -o $(BIN)/negativo $(OBJ)/negativo.o $(LDFLAGS)

negativo.o : $(SRC)/negativo.cpp
	g++ -g -c -o $(OBJ)/negativo.o $(SRC)/negativo.cpp -I$(INCLUDE)

funciones.o: $(SRC)/funciones.cpp
	g++ -c $(SRC)/funciones.cpp -o $(OBJ)/funciones.o -I$(INCLUDE)

rgb2gris: rgb2gris.o funciones.o libImagen.a
	g++ -o $(BIN)/rgb2gris $(OBJ)/rgb2gris.o $(OBJ)/funciones.o $(LDFLAGS)

rgb2gris.o: $(SRC)/rgb2gris.cpp
	g++ -c $(SRC)/rgb2gris.cpp -o $(OBJ)/rgb2gris.o -I$(INCLUDE)

contraste: contraste.o funciones.o libImagen.a
	g++ -o $(BIN)/contraste $(OBJ)/contraste.o $(OBJ)/funciones.o $(LDFLAGS)

contraste.o: $(SRC)/contraste.cpp
	g++ -c $(SRC)/contraste.cpp -o $(OBJ)/contraste.o -I$(INCLUDE)

crearicono.o: $(SRC)/crearicono.cpp
	g++ -c $(SRC)/crearicono.cpp -o $(OBJ)/crearicono.o -I$(INCLUDE)

crearicono: crearicono.o funciones.o libImagen.a
	g++ -o $(BIN)/crearicono $(OBJ)/crearicono.o $(OBJ)/funciones.o $(LDFLAGS)

morphing.o: $(SRC)/morphing.cpp
	g++ -c $(SRC)/morphing.cpp -o $(OBJ)/morphing.o -I$(INCLUDE)

morphing: morphing.o funciones.o libImagen.a
	g++ -o $(BIN)/morphing $(OBJ)/morphing.o $(OBJ)/funciones.o $(LDFLAGS)

umbralizar.o: $(SRC)/umbralizar.cpp
	g++ -c $(SRC)/umbralizar.cpp -o $(OBJ)/umbralizar.o -I$(INCLUDE)

umbralizar: umbralizar.o funciones.o libImagen.a
	g++ -o $(BIN)/umbralizar $(OBJ)/umbralizar.o $(OBJ)/funciones.o $(LDFLAGS)

ecualizar.o: $(SRC)/ecualizar.cpp
	g++ -c $(SRC)/ecualizar.cpp -o $(OBJ)/ecualizar.o -I$(INCLUDE)

ecualizar: ecualizar.o funciones.o libImagen.a
	g++ -o $(BIN)/ecualizar $(OBJ)/ecualizar.o $(OBJ)/funciones.o $(LDFLAGS)

clean:
	@rm $(OBJ)/*.o $(LIB)/*.a $(BIN)/* $(SRC)/*.cpp~ $(INCLUDE)/.h~
