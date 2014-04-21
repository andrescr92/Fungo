#include "ChatScene.h"
#include <SimpleAudioEngine.h>


USING_NS_CC;

Scene* ChatScene:: createScene()
{
	 // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = ChatScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool ChatScene::init()
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
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = LabelTTF::create("Chat", "Arial", 24);
	

    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height*0.875f - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // Añade el fondo al menú de chat
    auto sprite = Sprite::create("Menu/fondo.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);

	createMenu();

	auto sound = CocosDenshion::SimpleAudioEngine::getInstance();
	sound->stopBackgroundMusic();
	sound->playBackgroundMusic("Musica/Oda a Fungo.mp3", true);
	
	return true;
}

void ChatScene::createMenu()
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

	//Añade el botón de regresar al menú principal
	auto buttonHome = MenuItemImage::create("Menu/home1.png", "Menu/home2.png", 
												CC_CALLBACK_1(ChatScene::returnGameMenu, this));
	buttonHome->setPosition(Point(visibleSize.width * 0.100f , origin.y + visibleSize.height * 0.875f));
    auto buttonHomeMenu = Menu::create(buttonHome, NULL);
    buttonHomeMenu->setPosition(Point::ZERO);
    this->addChild(buttonHomeMenu, 2);

}


#include "HelloWorldScene.h"
void ChatScene::returnGameMenu(Ref * pSender)
{

	auto newScene = HelloWorld::createScene();
	Director::getInstance()->replaceScene(CCTransitionCrossFade::create(0.75f, newScene)); 

}

