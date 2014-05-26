#include "CreateMap.h"
#include "HelloWorldScene.h" 



USING_NS_CC;




/*void CreateMap::crearMapa()
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

	auto map = Sprite::create("mapa.png");
	map->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
	map->setOpacityModifyRGB(true);
	this->addChild(map,0);



}*/

void CreateMap::createMap()
{
	
	
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();
	//Crea el nodo mapa
	this-> Map = CCTMXTiledMap::create("TiledMaps/mapag.tmx");
	Map->setScaleX(0.25f);
	Map->setScaleY(0.25f);
	//Añade el mapa a la escena en la capa "0"
	addChild(Map, 0);
	//Map->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y)); 

	
}


//Encargado de mover al mapa (desplazarlo)
void CreateMap::moveMap()
{ 
	Node* Mapita = Map; 

	//Create a "one by one" touch event listener (processes one touch at a time)
    auto listener1 = EventListenerTouchOneByOne::create();
    // When "swallow touches" is true, then returning 'true' from the onTouchBegan method will "swallow" the touch event, preventing other listeners from using it.
    listener1->setSwallowTouches(true);

    // Example of using a lambda expression to implement onTouchBegan event callback function
    listener1->onTouchBegan = [](Touch* touch, Event* event){
        // event->getCurrentTarget() returns the *listener's* sceneGraphPriority node.
        auto target = static_cast<Node*>(event->getCurrentTarget());

        //Get the position of the current point relative to the button
        Point locationInNode = target->convertToNodeSpace(touch->getLocation());
        Size s = target->getContentSize();
        Rect rect = Rect(0, 0, s.width, s.height);

        //Check the click area
        if (rect.containsPoint(locationInNode))
        {
            log("node began... x = %f, y = %f", locationInNode.x, locationInNode.y);
            target->setOpacity(180);
            return true;
        }
        return false;
    };

    //Trigger when moving touch
    listener1->onTouchMoved = [](Touch* touch, Event* event){
        auto target = static_cast<Node*>(event->getCurrentTarget());
        //Move the position of current button sprite
        target->setPosition(target->getPosition() + touch->getDelta());
    };

    //Process the touch end event
    listener1->onTouchEnded = [=](Touch* touch, Event* event){
        auto target = static_cast<Node*>(event->getCurrentTarget());
        log("node onTouchesEnded.. ");
        target->setOpacity(255);
     
        
    };

		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener1, Mapita);

}

void CreateMap::sizeMap()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
	
	auto buttonPlus = MenuItemImage::create("Menu/boton_mas.png", "Menu/boton_mas1.png", CC_CALLBACK_1(CreateMap::increaseSize, this));
	buttonPlus->setPosition(Point(visibleSize.width * 0.035f , origin.y + visibleSize.height * 0.500f));
	buttonPlus->setScaleX(0.70f);
	buttonPlus->setScaleY(0.70f);
    auto buttonPlusMenu = Menu::create(buttonPlus, NULL);
    buttonPlusMenu->setPosition(Point::ZERO);
    this->addChild(buttonPlusMenu, 2);


	auto buttonMinus = MenuItemImage::create("Menu/boton_menos.png", "Menu/boton_menos1.png", CC_CALLBACK_1(CreateMap::decreaseSize, this));
	buttonMinus->setPosition(Point(visibleSize.width * 0.035f , origin.y + visibleSize.height * 0.350f));
    buttonMinus->setScaleX(0.70f);
	buttonMinus->setScaleY(0.70f);
	auto buttonMinusMenu = Menu::create(buttonMinus, NULL);
    buttonMinusMenu->setPosition(Point::ZERO);
    this->addChild(buttonMinusMenu, 2);



}

void CreateMap::increaseSize(Ref * pSender)
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();


		Node* Mapa= Map;
       

	if (Mapa->getScaleX() < 1.0f && Mapa->getScaleY() < 1.0f){
		Mapa->setScaleX (Mapa->getScaleX()+0.05f);
			Mapa->setScaleY (Mapa->getScaleY()+0.05f);
				 
	}


}
 
void CreateMap::decreaseSize(Ref * pSender)
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
	Node* Mapa= Map;

	if (Mapa->getScaleX() > 0.25f && Mapa->getScaleY() > 0.25f){
		Mapa->setScaleX (Mapa->getScaleX()-0.05f);
			Mapa->setScaleY (Mapa->getScaleY()-0.05f);
	}


}

