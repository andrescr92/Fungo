#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CCLabel.h"
#include "CCIMEDelegate.h"
#include <CCTextFieldTTF.h>

USING_NS_CC;


class HelloWorld : public cocos2d::Layer
{ 


public:
    ///There's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    ///Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    ///A selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

	///Al hacer click en Bot�n Chat
	void showChat (cocos2d::Ref* pSender);
	///Al hacer click en Bot�n Retos 
	void showRetos(cocos2d::Ref* pSender);
	///Al hacer click en Bot�n Usuario
	void showUsuario(cocos2d::Ref* pSender);
	   
    ///Implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

private:
	//Se crea el t�tulo del juego con su correspondiente animaci�n
	void createGameTitle();
	//Se crea el men� del juego con los siguientes botones: Chat, Retos, Usuario
	void createGameMenu();


};

#endif // __HELLOWORLD_SCENE_H__
