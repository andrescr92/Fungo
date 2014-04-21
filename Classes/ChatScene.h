#ifndef ChatScene_h
#define ChatScene_h

#include "cocos2d.h"


class ChatScene: public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
	//Al dar click se devuelve al menú principal
	void returnGameMenu (cocos2d::Ref* pSender);

	// implement the "static create()" method manually
    CREATE_FUNC(ChatScene);

private:

	//Crea el "menú", es decir los distintos botones y opciones que se encuentran en esta escena
	void createMenu();

};



#endif