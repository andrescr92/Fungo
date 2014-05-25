
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"


/*#include "renderer/CCCustomCommand.h"
#include "ui/CocosGUI.h"
#include "UISlider.h"*/
///Esta clase se encarga de todas las características que posee el modo mapa. Es decir, lo invoca, le permite moverse y le permite escalarse a un tamaño deseado.
class CreateMap: public cocos2d::Layer
{
	friend class HelloWorldScene;

private:
    cocos2d::CCTMXTiledMap *Map;
    //cocos2d::CCTMXLayer *_background;

public:
	///Método que crea el mapa, es decir lo inicializa como un layer.
    //void crearMapa();
	void createMap();
	///Procedimiento que permite mover el mapa a través de la pantalla
	void moveMap();
	///Método que permite el escalamiento del mapa (cambio de tamaños)
	void sizeMap();
	//void sliderEvent();

	CREATE_FUNC(CreateMap);
};

#endif
