
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"


/*#include "renderer/CCCustomCommand.h"
#include "ui/CocosGUI.h"
#include "UISlider.h"*/
///Esta clase se encarga de todas las caracter�sticas que posee el modo mapa. Es decir, lo invoca, le permite moverse y le permite escalarse a un tama�o deseado.
class CreateMap: public cocos2d::Layer
{
	friend class HelloWorldScene;

private:
    cocos2d::CCTMXTiledMap *Map;

public:
	///M�todo que crea el mapa, es decir lo inicializa como un layer.
    //void crearMapa();
	void createMap();
	///Procedimiento que permite mover el mapa a trav�s de la pantalla
	void moveMap();
	///M�todo que permite el escalamiento del mapa (cambio de tama�os)
	void sizeMap();

	void increaseSize(cocos2d::Ref* pSender);

	void decreaseSize(cocos2d::Ref* pSender);
	CREATE_FUNC(CreateMap);
};

#endif
