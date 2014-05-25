#include "CreateMap.h"
#include "HelloWorldScene.h"

//#include "renderer/CCRenderer.h"
//#include "ui/CocosGUI.h"
//#include "UISlider.h"



USING_NS_CC;
//using namespace ui;



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
	this-> Map = CCTMXTiledMap::create("TiledMaps/mapa6.tmx");
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

/*void CreateMap::sizeMap()
{

	auto size = Director::getInstance()->getWinSize();
	cocos2d::UISlider* slider = cocos2d::UISlider::create();
	slider->setTag(1);
	slider->setTouchEnabled(true);
	slider->loadBarTexture("sliderTrack.png");
	slider->loadSlidBallTextures("sliderThumb.png", "sliderThumb.png", "");
	slider->loadProgressBarTexture("sliderProgress.png");
	slider->setPosition(Point(size.width / 2.0f, size.height * 0.15f + slider->getSize().height * 2.0f));
	slider->setPercent(50);
	//slider->addEventListenerSlider(this, sliderpercentchangedselector(CreateMap::sliderEvent));
	addChild(slider);



}

void CreateMap::sliderEvent(){





}*/