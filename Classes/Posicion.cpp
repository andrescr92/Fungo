#include "Posicion.h"

#include "extensions/cocos-ext.h"
#include <cocos-ext.h>

USING_NS_CC;

USING_NS_CC_EXT;

Posicion::Posicion(float x, float y, char* etiqueta)
		:Coordx(x)
		,Coordy(y)
		,nombre(etiqueta)
	{
	} 

void Posicion::agregarEtiquetas(float x, float y, char* etiqueta)
{ 
	Posicion nuevo(x,y,etiqueta);
	lugares.push_back(nuevo); 


} 

Posicion::Posicion(void)
{
} 


/*Posicion::~Posicion(void)
{  
	delete Posicion;
}*/
