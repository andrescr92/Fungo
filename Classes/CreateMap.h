
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"
	
class CreateMap: public cocos2d::Layer
{
	friend class HelloWorldScene;
public:
	///Método que crea el mapa, es decir lo inicializa como un layer.
    void crearMapa();
	void createMap();
	
	 CREATE_FUNC(CreateMap);
};

#endif
