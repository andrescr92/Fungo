
#ifndef CreateMap_h
#define CreateMap_h

#include "cocos2d.h"
#include <vector> 



///Esta clase se encarga de todas las caracter�sticas que posee el modo mapa. Es decir, lo invoca, le permite moverse y le permite escalarse a un tama�o deseado. 
///Adem�s le brinda al usuario la posibilidad de buscar una ubicaci�n en espec�fico.
class CreateMap: public cocos2d::Layer
{    

public:
    cocos2d::CCTMXTiledMap *Map;
	cocos2d::CCTextFieldTTF *textfield; 

public:
	///M�todo que crea el mapa, es decir lo inicializa como un layer.
	void createMap();
	///Procedimiento que permite mover el mapa a trav�s de la pantalla
	void moveMap();
	///M�todo que permite el escalamiento del mapa (cambio de tama�os)
	void sizeMap();
	///M�todo que inicializa el texto.
	void makeInput();
	///M�todo encargado de buscar la ubicaci�n ingresada por el usuario en una base de datos.
	void searchLabel(const std::string Etiqueta); 
	///M�todo encargado de invocar al prodecimiento de searchLabel, adem�s cierra el teclado en un dispostivo m�vil. 
	void searchText(Ref * pSender);
	///M�todo que aumenta el tama�o del mapa hasta cierto l�mite.
	void increaseSize(cocos2d::Ref* pSender);
	///M�todo que disminuye el tama�o del mapa hasta cierto l�mite.
	void decreaseSize(cocos2d::Ref* pSender);
	///M�todo que permite mostrar el teclado en un dispositivo m�vil.
	void searchInput(cocos2d::Ref * pSender);


	///Implement the "static create()" method manually
	CREATE_FUNC(CreateMap);
};

#endif
