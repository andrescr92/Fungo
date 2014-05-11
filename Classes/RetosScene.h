#ifndef RetosScene_h
#define RetosScene_h

#include "cocos2d.h" 

/// Se crea la escena de retos donde se encontrar�n los diversos desaf�os que el usuario podr� enfrentar.
class RetosScene: public cocos2d::Layer
{
public:
	 // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
	//Al dar click se devuelve al men� principal
    void returnGameMenu(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(RetosScene); 

private:
	/// Se crea el men� con sus correspondientes botones.
	void createMenu();
};

#endif

