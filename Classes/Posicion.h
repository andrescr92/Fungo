#ifndef Posicion_h
#define Posicion_h

#include "cocos2d.h"
#include "etiquetas.h"

USING_NS_CC;

class Posicion :
	public Etiquetas
{
protected:
	float Coordx; 
	float Coordy;
	LabelTTF nombre; 

public:	
	Posicion(void);
	Posicion(float x, float y, LabelTTF etiqueta);
	cocos2d::Vector<Posicion>lugares; 
	void agregarEtiquetas(float x, float y, LabelTTF etiqueta);

//	~Posicion(); 
	
	CREATE_FUNC(Posicion);
};

#endif
