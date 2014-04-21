#include "HelloWorldScene.h"

//#include <SimpleAudioEngine.h>

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

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "Menu/Home1.png",
                                           "Menu/Home2.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = LabelTTF::create("", "Arial", 24);
	

    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Sprite::create("Menu/fondo gris sin caja.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);

	createGameTitle();
	createGameMenu();

   /*auto sound = CocosDenshion::SimpleAudioEngine::getInstance();
	sound->stopBackgroundMusic();
	sound->playBackgroundMusic("Musica/Fungo.mp3", true);
    return true;*/
}

void HelloWorld::createGameTitle()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();
	
	//Muestra el sprite del logo en el centro de la pantalla
	auto gameTitle = Sprite::create("Menu/logo3.png");
	gameTitle->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height - gameTitle->getContentSize().height - 200.0f));
	this->addChild(gameTitle, 0);
}


void HelloWorld::createGameMenu()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin(); 

	//Boton Chat (mejorar comment)
	auto buttonChat = MenuItemImage::create("Menu/chat1.png", "Menu/chat2.png", CC_CALLBACK_1(HelloWorld::showChat, this));
	buttonChat->setPosition(Point(visibleSize.width * 0.11f , origin.y + visibleSize.height * 0.875f));
    auto buttonChatMenu = Menu::create(buttonChat, NULL);
    buttonChatMenu->setPosition(Point::ZERO);
    this->addChild(buttonChatMenu, 2);
	
	
	//Boton Retos (mejorar comment)
	auto buttonRetos = MenuItemImage::create("Menu/estrella1.png", "Menu/estrella2.png", CC_CALLBACK_1(HelloWorld::showRetos, this));
	buttonRetos->setPosition(Point(visibleSize.width * 0.50f , origin.y + visibleSize.height * 0.875f));
    auto buttonRetosMenu = Menu::create(buttonRetos, NULL);
    buttonRetosMenu->setPosition(Point::ZERO);
    this->addChild(buttonRetosMenu, 2); 

	//Boton Usuario (mejorar comment)
	auto buttonUsuario = MenuItemImage::create("Menu/usuario1.png", "Menu/usuario2.png", CC_CALLBACK_1(HelloWorld::showUsuario, this));
	buttonUsuario->setPosition(Point(visibleSize.width * 0.88f , origin.y + visibleSize.height * 0.875f));
    auto buttonUsuarioMenu = Menu::create(buttonUsuario, NULL);
    buttonUsuarioMenu->setPosition(Point::ZERO);
    this->addChild(buttonUsuarioMenu, 2);

}

#include "ChatScene.h"

void HelloWorld::showChat(Ref * pSender)
{
	auto newScene = ChatScene::createScene();
	Director::getInstance()->replaceScene(CCTransitionSlideInR::create(0.75f, newScene));
}

void HelloWorld::showRetos(Ref * pSender)
{
}

void HelloWorld::showUsuario(Ref * pSender)
{


}

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
