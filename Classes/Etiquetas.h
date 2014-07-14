#ifndef Etiquetas_h
#define Etiquetas_h 


#include "cocos2d.h"
#include <vector> 
#include "CreateMap.h"
#include "Posicion.h"


class Etiquetas: public CreateMap 
{  

protected: 

public:
	void createLabel();
	void setNewLabels(int a);
};

#endif

