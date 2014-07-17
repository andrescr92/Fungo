#ifndef Posicion_h
#define Posicion_h

#include "cocos2d.h"
#include "Etiquetas.h"
#include "CreateMap.h"
#include <vector>
#include <iostream>


USING_NS_CC; 

class Posicion
{
protected:
	float Coordx; 
	float Coordy;
	std::string nombre; 

public:	
	//Constructor por defecto
	Posicion(void);
	
	///Constructor que permite la creación de un tipo de dato "Posición".
	Posicion(float x, float y, std::string etiqueta);
	
	///Vector que almacena objetos de tipo "Posición".
	std::vector<Posicion>lugares; 
	
	///Método que permite agregar objetos "Posición" al vector lugares.
	void agregarEtiquetas(float x, float y, std::string etiqueta);

	///Función que recibe un string, se compara con las etiquetas de la base de datos 
	///y al ser encontrado retorna su posición.
	int obtenerEtiquetas(const std::string etiqueta);

	///Función que retorna la coordenada "X" de una etiqueta.
	inline float obtenerX(int x){return lugares[x].Coordx;}

	///Función que retorna la coordenada "Y" de una etiqueta.
	inline float obtenerY(int y){return lugares[y].Coordy;}

	///Método que se encarga de llenar la base de datos con todas las etiquetas del mapa 
	///y sus coordenadas correspondientes.
	void llenarVector();
};

#endif
