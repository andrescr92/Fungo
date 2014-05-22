
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"
	
class CreateMap: public cocos2d::Layer
{
	friend class HelloWorldScene;

private:
    cocos2d::CCTMXTiledMap *Map;
    //cocos2d::CCTMXLayer *_background;

public:
	///Método que crea el mapa, es decir lo inicializa como un layer.
    void crearMapa();
	void createMap();
	void moveMap();

	CREATE_FUNC(CreateMap);
};

#endif
