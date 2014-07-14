#include "Posicion.h"


Posicion::Posicion(float x, float y, LabelTTF etiqueta)
		:Coordx(x)
		,Coordy(y)
		,nombre(etiqueta)
	{
	} 

void Posicion::agregarEtiquetas(float x, float y, LabelTTF etiqueta)
{ 
	Posicion nuevo(x,y,etiqueta);
	lugares.pushBack(nuevo); 


} 

Posicion::Posicion(void)
{
} 


/*Posicion::~Posicion(void)
{  
	delete Posicion;
}*/
