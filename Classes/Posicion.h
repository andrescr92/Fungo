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
	Posicion(void);
	
	Posicion(float x, float y, std::string etiqueta);
	
	std::vector<Posicion>  lugares; 
<<<<<<< HEAD
	
	void agregarEtiquetas(float x, float y, std::string etiqueta);

	int obtenerEtiquetas(const std::string etiqueta);

	inline float obtenerX(int x){return lugares[x].Coordx;}

	inline float obtenerY(int y){return lugares[y].Coordy;}

	void llenarVector();

=======
	void agregarEtiquetas(float x, float y, char* etiqueta);
	int Posicion::obtenerEtiquetas(char* etiqueta);
	inline float Posicion::obtenerX(int x){return lugares[x].Coordx;}
	inline float Posicion::obtenerY(int y){return lugares[y].Coordy;}
	void Posicion::llenarVector();
>>>>>>> efb0540aa223461f11423e2d36e733dff4238338

//	~Posicion(); 
	
	//CREATE_FUNC(Posicion);
};

#endif
