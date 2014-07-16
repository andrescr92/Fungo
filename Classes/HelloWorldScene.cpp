#include "HelloWorldScene.h"
#include "CreateMap.h"
#include "Etiquetas.h"
#include <SimpleAudioEngine.h>
#include "CCLabel.h"
#include "CCIMEDelegate.h"
#include <CCTextFieldTTF.h>
#include "Textinput.h"


USING_NS_CC;


Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

		CreateMap* Mapa= new CreateMap; 
		Etiquetas* label = new Etiquetas; 
		Textinput* texto = new Textinput;



    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "home1.png",
                                           "home2.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 2);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    /// Crea e inicializa la barra del menú
    //auto Sprite1
//	auto Sprite1 = Sprite::create("Menu/barra.png");
 //   Sprite1->setPosition(Point(origin.x + visibleSize.width/2,
                         //   origin.y + visibleSize.height - Sprite1->getContentSize().height- 650.0f));
   // this->addChild(Sprite1, 1);

    // add "HelloWorld" splash screen"
    //auto sprite = Sprite::create("mapa.png");

    // position the sprite on the center of the screen
    //sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

	//add the sprite as a child to this layer
    //this->addChild(sprite, 0);
	/*CCTextFieldTTF* textfield = CCTextFieldTTF::textFieldWithPlaceHolder("click here for input", "Thonburi", 20);
	textfield->setColor(ccc3(255, 255, 255));
	textfield->setPosition(Point(origin.x + visibleSize.width / 2,
		origin.y + visibleSize.height - Sprite1->getContentSize().height - 650.0f));
	this->addChild(textfield, 2);*/


	createGameTitle();
	createGameMenu();
	label->createLabel(); 
	label->makeInput();
	label->moveMap(); 
	label->sizeMap();  
	this->addChild(label);
	//texto->clickText();
	//texto->makeInput();
	//this->addChild(texto, 2);
	
//	Mapa->createMap();
//	Mapa->moveMap(); 
//	Mapa->sizeMap();
//	this->addChild(Mapa);
	
	
	
	






	

   auto sound = CocosDenshion::SimpleAudioEngine::getInstance();
	sound->stopBackgroundMusic();
	sound->playBackgroundMusic("Musica/Fungo.mp3", true);
    return true;
}

void HelloWorld::createGameTitle()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();
	
	//Muestra el sprite del logo en el centro de la pantalla
	auto gameTitle = Sprite::create("Menu/logo.png");
	gameTitle->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height - gameTitle->getContentSize().height - 200.0f));
	this->addChild(gameTitle, 0);



	// Hacer una animacion con el titulo del juego cambiando su imagen (textura) en el tiempo
	auto animation = Animation::create();
	for ( int i = 1; i < 5; ++i )
		animation->addSpriteFrameWithFile( String::createWithFormat("Menu/logo%i.png", i)->getCString() );
	
	
	
	// Indicarle que muestre cada una de las imagenes que la componen por 0.1333 segundos
	animation->setDelayPerUnit( 0.1333f );
	
	// Lo anterior construye una unica animacion, repetirla siempre y cuando la pantalla de
	// menu del juego este visible
	auto repeatAnimation = RepeatForever::create( Animate::create(animation) );
	gameTitle->runAction(repeatAnimation);
}

///Crea y posiciona los distintos botones pertenecientes al menú. Cada botón lleva al usuario a una nueva escena.
void HelloWorld::createGameMenu()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin(); 

	///Boton que dirige a la escena perteneciente al chat
	auto buttonChat = MenuItemImage::create("Menu/chat1.png", "Menu/chat2.png", CC_CALLBACK_1(HelloWorld::showChat, this));
	buttonChat->setPosition(Point(visibleSize.width * 0.11f , origin.y + visibleSize.height * 0.900f));
    auto buttonChatMenu = Menu::create(buttonChat, NULL);
    buttonChatMenu->setPosition(Point::ZERO);
    this->addChild(buttonChatMenu, 2);
	
	
	///Boton que dirige a la escena perteneciente a la escena de retos.
	auto buttonRetos = MenuItemImage::create("Menu/estrella1.png", "Menu/estrella2.png", CC_CALLBACK_1(HelloWorld::showRetos, this));
	buttonRetos->setPosition(Point(visibleSize.width * 0.50f , origin.y + visibleSize.height * 0.900f));
    auto buttonRetosMenu = Menu::create(buttonRetos, NULL);
    buttonRetosMenu->setPosition(Point::ZERO);
    this->addChild(buttonRetosMenu, 2); 

	///Boton que dirige a la escena perteneciente a la escena de usuario.
	auto buttonUsuario = MenuItemImage::create("Menu/usuario1.png", "Menu/usuario2.png", CC_CALLBACK_1(HelloWorld::showUsuario, this));
	buttonUsuario->setPosition(Point(visibleSize.width * 0.88f , origin.y + visibleSize.height * 0.900f));
    auto buttonUsuarioMenu = Menu::create(buttonUsuario, NULL);
    buttonUsuarioMenu->setPosition(Point::ZERO);
    this->addChild(buttonUsuarioMenu, 2);

}


#include "ChatScene.h" 
///Cambia la escena del menú principal por la escena correspondiente, en este caso es la escena de chat.
void HelloWorld::showChat(Ref * pSender)
{
	auto newScene = ChatScene::createScene();
	Director::getInstance()->replaceScene(CCTransitionCrossFade::create(0.75f, newScene));
}

#include "RetosScene.h"
///Cambia la escena del menú principal por la escena correspondiente, en este caso es la escena de retos.
void HelloWorld::showRetos(Ref * pSender)
{ 
	auto newScene = RetosScene::createScene();
	Director::getInstance()->replaceScene(CCTransitionRotoZoom::create(0.75f, newScene));
}

#include "UsuarioScene.h"
///Cambia la escena del menú principal por la escena correspondiente, en este caso es la escena de usuario.
void HelloWorld::showUsuario(Ref * pSender)
{
	auto newScene = UsuarioScene::createScene();
	Director::getInstance()->replaceScene(CCTransitionCrossFade::create(0.75f, newScene));
}

/*void HelloWorld::moveMap()
{
	
	Mapa->moveMap();

}*/

void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
