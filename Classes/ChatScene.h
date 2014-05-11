#ifndef ChatScene_h
#define ChatScene_h

#include "cocos2d.h"

///Crea la clase ChatScene, la cual contiene todo lo referente a la escena en donde se encuentra el chat.
class ChatScene: public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
	/// Crea el procedimiento el cual al darle click devuelve el juego al menú principal.
	void returnGameMenu (cocos2d::Ref* pSender);

	// implement the "static create()" method manually
    CREATE_FUNC(ChatScene);

private:

	///Crea la función "menú", es decir los distintos botones y opciones que se encuentran en esta escena.
	void createMenu();

};



#endif