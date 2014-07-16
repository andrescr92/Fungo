#ifndef Posicion_h
#define Posicion_h

#include "cocos2d.h"
#include "Etiquetas.h"
#include "CreateMap.h"
#include <vector>
#include <iostream>
#include "extensions/cocos-ext.h"
#include <cocos-ext.h>


USING_NS_CC_EXT;
USING_NS_CC; 

class Posicion
{
protected:
	float Coordx; 
	float Coordy;
	char* nombre; 

public:	
	Posicion(void);
	Posicion(float x, float y, char* etiqueta);
	std::vector<Posicion>  lugares; 
	void agregarEtiquetas(float x, float y, char* etiqueta);
	int Posicion::obtenerEtiquetas(char* etiqueta);
	inline float Posicion::obtenerX(int x){return lugares[x].Coordx;}
	inline float Posicion::obtenerY(int y){return lugares[y].Coordy;}
	void Posicion::llenarVector();

//	~Posicion(); 
	
	//CREATE_FUNC(Posicion);
};

#endif
