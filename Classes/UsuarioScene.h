#ifndef UsuarioScene_h
#define UsuarioScene_h

#include "cocos2d.h"
///Crea la clase UsuarioScene, la cuál contiene todo lo referente a la escena en donde se encuentra la información del usuario.
class UsuarioScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    /// Se invoca cuando el jugador presiona el botón 'regresar al inicio'
    void returnGameMenu(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(UsuarioScene);

private:
	/// Crea las opciones del menú, como el ícono para regresar al menú principal.
	void createMenu();
};

#endif // LevelSelectScene_h