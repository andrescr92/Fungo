
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"
#include <vector> 



///Esta clase se encarga de todas las características que posee el modo mapa. Es decir, lo invoca, le permite moverse y le permite escalarse a un tamaño deseado. 
///Además le brinda al usuario la posibilidad de buscar una ubicación en específico.
class CreateMap: public cocos2d::Layer
{    

public:
    cocos2d::CCTMXTiledMap *Map;
	cocos2d::CCTextFieldTTF *textfield; 

public:
	///Método que crea el mapa, es decir lo inicializa como un layer.
	void createMap();
	///Procedimiento que permite mover el mapa a través de la pantalla
	void moveMap();
	///Método que permite el escalamiento del mapa (cambio de tamaños)
	void sizeMap();
	///Método que inicializa el texto.
	void makeInput();
	///Método encargado de buscar la ubicación ingresada por el usuario en una base de datos.
	void searchLabel(const std::string Etiqueta); 
	///Método encargado de invocar al prodecimiento de searchLabel, además cierra el teclado en un dispostivo móvil. 
	void searchText(Ref * pSender);
	///Método que aumenta el tamaño del mapa hasta cierto límite.
	void increaseSize(cocos2d::Ref* pSender);
	///Método que disminuye el tamaño del mapa hasta cierto límite.
	void decreaseSize(cocos2d::Ref* pSender);
	///Método que permite mostrar el teclado en un dispositivo móvil.
	void searchInput(cocos2d::Ref * pSender);


	///Implement the "static create()" method manually
	CREATE_FUNC(CreateMap);
};

#endif
