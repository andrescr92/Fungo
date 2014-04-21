#include "RetosScene.h"
#include <SimpleAudioEngine.h>

USING_NS_CC;

Scene* RetosScene::createScene()
{ 
    // 'scene' is an autorelease object
    auto scene = Scene::create();

    // 'layer' is an autorelease object
    auto layer = RetosScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}
 
bool RetosScene::init() 
{  
	if ( !Layer::init() )
    {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label

    auto label = LabelTTF::create("Retos", "Arial", 24);

    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width * 0.5f, origin.y + visibleSize.height * .80f));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // Se crea el fondo del menú del juego
    auto sprite = Sprite::create("Menu/fondo.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
	
	createMenu();
    
	// Se reproduce la música en la escena de Retos. 
	auto sound = CocosDenshion::SimpleAudioEngine::getInstance();
	sound->stopBackgroundMusic();
	sound->playBackgroundMusic("Music/Retos.mp3", true);

    return true;
}
	 
void RetosScene::createMenu()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();

	//Se utiliza el botón del hongo para retornar al menú principal. 
	auto buttonHome = MenuItemImage::create("Menu/Home1.png", "Menu/Home2.png", CC_CALLBACK_1(RetosScene::returnGameMenu, this));
	buttonHome->setPosition(Point(visibleSize.width * 0.11f , origin.y + visibleSize.height * 0.875f));
    auto buttonHomeMenu = Menu::create(buttonHome, NULL);
    buttonHomeMenu->setPosition(Point::ZERO);
    this->addChild(buttonHomeMenu, 2);
}


#include "HelloWorldScene.h"
void RetosScene::returnGameMenu(Ref* pSender)
{
	auto newScene = HelloWorld::createScene();
	Director::getInstance()->replaceScene(CCTransitionCrossFade::create(0.75f, newScene));
} 
