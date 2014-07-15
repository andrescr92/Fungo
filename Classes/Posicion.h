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


//	~Posicion(); 
	
	//CREATE_FUNC(Posicion);
};

#endif
