#ifndef Etiquetas_h
#define Etiquetas_h 

#include "cocos2d.h"
#include <vector> 
#include "CreateMap.h"


class Etiquetas: public CreateMap 
{  
		
	public: 
	int Coordx; 
	int Coordy; 

protected: 

	//std::vector<Etiquetas*> Etiquetas;

public:
	void createLabel();
};

#endif

