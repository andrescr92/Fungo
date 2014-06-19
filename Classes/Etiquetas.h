#ifndef Etiquetas_h
#define Etiquetas_h 

#include "cocos2d.h"
#include <vector> 
#include "CreateMap.h"


class Etiquetas: public CreateMap 
{  
		//Sprite* objeto;
		//Label* texto;


	/* public:
		Etiquetas()
			:objeto
			,texto
		{} 
	*/
		
		
	int Coordx; 
	int Coordy; 


protected: 

	//std::vector<Etiquetas*> Etiquetas; 

public:
	void createLabel();
	void setNewLabels(int a);
};

#endif

