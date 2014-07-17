#include "CreateMap.h"
#include "HelloWorldScene.h" 
#include "Etiquetas.h"
#include <stdlib.h>
#include "Posicion.h"



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
	Map = CCTMXTiledMap::create("TiledMaps/mapag.tmx");
	Map->setScaleX(0.25f);
	Map->setScaleY(0.25f);
	//Añade el mapa a la escena en la capa "0"
	addChild(Map, 0); 

/*	 
	/* for(size_t i = 0; i < 40; ++i)
	{
		Etiquetas[i] = Sprite::create("etiquetamediana.png");  
		Etiquetas[i]->setPosition(Point(1500,1100));
		Map->addChild(Etiquetas[i]);
		//Etiquetas[i]->texto = LabelTTF::create("Derecho", "Arial",35); 
		//texto->setColor(ccc3(0,0,0)); 
		//texto->setPosition(Point(0, 0));
		//etiqueta->addChild(texto); 
	} */

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

			//Sin importar el nivel de zoom siempre se cumplen
			if (target->getPositionX()>0)
				target->setPositionX(0);
			if (target->getPositionY()>0)
				target->setPositionY(0);

			int x = target->getScaleX()*100;

			//Nivel de zoom 1
			if (x==25){
				if (target->getPositionY()<-255)
				target->setPositionY(-255);
				if (target->getPositionX()<0)
					target->setPositionX(0);
			}
			//Nivel de zoom 2
			if (x==30){
				if (target->getPositionY()<-461)
				target->setPositionY(-461);
				if (target->getPositionX()<-205)
					target->setPositionX(-205);
			}

			//Nivel de zoom 3
			if (x==35){
				if (target->getPositionY()<-665)
				target->setPositionY(-665);
				if (target->getPositionX()<-410)
					target->setPositionX(-410);
			}

			//Nivel de zoom 4
			if (x==40){
				if (target->getPositionY()<-870)
				target->setPositionY(-870);
				if (target->getPositionX()<-614)
					target->setPositionX(-614);
			}

			//Nivel de zoom 5
			if (x==45){
				if (target->getPositionY()<-1076)
				target->setPositionY(-1076);
				if (target->getPositionX()<-819)
					target->setPositionX(-819);
			}

			//Nivel de zoom 6
			if (x==50){
				if (target->getPositionY()<-1280)
				target->setPositionY(-1280);
				if (target->getPositionX()<-1022)
					target->setPositionX(-1022);
			}

			//Nivel de zoom 7
			if (x==55){
				if (target->getPositionY()<-1485)
				target->setPositionY(-1485);
				if (target->getPositionX()<-1228)
					target->setPositionX(-1228);
			}

			//Nivel de zoom 8
			if (x==60){
				if (target->getPositionY()<-1690)
				target->setPositionY(-1690);
				if (target->getPositionX()<-1433)
					target->setPositionX(-1433);
			}

			//Nivel de zoom 9
			if (x==65){
				if (target->getPositionY()<-1894)
				target->setPositionY(-1894);
				if (target->getPositionX()<-1637)
					target->setPositionX(-1637);
			}

			//Nivel de zoom 10
			if (x==70){
				if (target->getPositionY()<-2098)
				target->setPositionY(-2098);
				if (target->getPositionX()<-1842)
					target->setPositionX(-1842);
			}

			//Nivel de zoom 11
			if (x==75){
				if (target->getPositionY()<-2304)
				target->setPositionY(-2304);
				if (target->getPositionX()<-2047)
					target->setPositionX(-2047);
			}

			//Nivel de zoom 12
			if (x==80){
				if (target->getPositionY()<-2509)
				target->setPositionY(-2509);
				if (target->getPositionX()<-2253)
					target->setPositionX(-2253);
			}

			//Nivel de zoom 13
			if (x==85){
				if (target->getPositionY()<-2713)
				target->setPositionY(-2713);
				if (target->getPositionX()<-2457)
					target->setPositionX(-2457);
			}

			//Nivel de zoom 14
			if (x==90){
				if (target->getPositionY()<-2918)
				target->setPositionY(-2918);
				if (target->getPositionX()<-2663)
					target->setPositionX(-2663);
			}

			//Nivel de zoom 15
			if (x==95){
				if (target->getPositionY()<-3123)
				target->setPositionY(-3123);
				if (target->getPositionX()<-2867)
					target->setPositionX(-2867);
			}

			//Nivel de zoom 16
			if (x==100){
				if (target->getPositionY()<-3328)
				target->setPositionY(-3328);
				if (target->getPositionX()<-3072)
					target->setPositionX(-3072);
			}
    };

    //Process the touch end event
    listener1->onTouchEnded = [=](Touch* touch, Event* event){
        auto target = static_cast<Node*>(event->getCurrentTarget());

		int x = target->getPositionX();
		int y = target->getPositionY();
		log("posicion x = %i, posicion y = %i", x, y);

		float w = ((target->getScaleX()*100)-25)/5;
		log("escala = %f", w);

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


	auto buttonSearch = MenuItemImage::create("trans.png", "trans.png", CC_CALLBACK_1(CreateMap::searchInput, this));
	buttonSearch->setPosition(Point(origin.x +visibleSize.width/2 * 1.2f, origin.y + visibleSize.height * 0.053f));
    buttonSearch->setScaleX(0.50f);
 //	buttonSearch->setScaleY(0.70f);
//	buttonSearch->setOpacity(320);
	auto buttonSearchMenu = Menu::create(buttonSearch, NULL);
    buttonSearchMenu->setPosition(Point::ZERO);
    this->addChild(buttonSearchMenu, 2);

	auto buttonEnter = MenuItemImage::create("botonbus1.png", "botonbus2.png", CC_CALLBACK_1(CreateMap::searchText, this));
	buttonEnter->setPosition(Point(origin.x +visibleSize.width/2 * 0.93f, origin.y + visibleSize.height * 0.053f));
    buttonEnter->setScaleX(0.50f);
	buttonEnter->setScaleY(0.50f);
	auto buttonEnterMenu = Menu::create(buttonEnter, NULL);
    buttonEnterMenu->setPosition(Point::ZERO);
    this->addChild(buttonEnterMenu, 2);

}

void CreateMap::increaseSize(Ref * pSender)
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();


		Node* Mapa= Map;

	if (Mapa->getScaleX() < 1.0f && Mapa->getScaleY() < 1.0f){
		
		Mapa->setScaleX (Mapa->getScaleX()+0.05f);
		Mapa->setScaleY (Mapa->getScaleY()+0.05f);

		Mapa->setPosition(Mapa->getPositionX()-102.5,Mapa->getPositionY()-102.5);

	}


}
 
void CreateMap::decreaseSize(Ref * pSender)
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
	Node* Mapa= Map;
	size_t count;
	//int temporal;
	count= Map->getChildrenCount();
	if (Mapa->getScaleX() > 0.25f && Mapa->getScaleY() > 0.25f){
		Mapa->setScaleX (Mapa->getScaleX()-0.05f);
		Mapa->setScaleY (Mapa->getScaleY()-0.05f); 

		if (Mapa->getScaleX()==0.25)
		{
			Mapa->setPosition(0,0);
		}

		if (Mapa->getPositionX()+102.5<0)
		{
			//if (Mapa->getPositionX()+102.5<205*(((Mapa->getScaleX()*100)-25)/5)-25)
			Mapa->setPositionX(Mapa->getPositionX()+102.5);
			if (Mapa->getPositionX()+101<0)
				Mapa->setPositionX(Mapa->getPositionX()+102.5);
		}
		if (Mapa->getPositionY()+102.5<0)
		{
			//if (Mapa->getPositionY()+102.5<205*(((Mapa->getScaleX()*100)-25)/5)-25)
			Mapa->setPositionY(Mapa->getPositionY()+102.5);
			if (Mapa->getPositionY()+101<0)
				Mapa->setPositionY(Mapa->getPositionY()+102.5);
		}	

	
	}

	
} 


void CreateMap::makeInput()
{ 
	textfield = TextFieldTTF::textFieldWithPlaceHolder("Search...", "Thonburi", 35); 
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin(); 

	textfield->setColor(ccc3(0, 0, 0));
	textfield->setPosition(Point(origin.x + visibleSize.width / 2,
		origin.y + visibleSize.height - textfield->getContentSize().height - 715.0f));
	textfield->setAnchorPoint(CCPointZero);
	this->addChild(textfield,3);
}


void CreateMap::searchLabel(const std::string Etiqueta)
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
	Node* Mapa= Map;

	Posicion* otro = new Posicion;

	otro->llenarVector();

	int pos = otro->obtenerEtiquetas(Etiqueta);
	if (pos!=-1)
	{
		Mapa->setScale(0.75f);
		Mapa->setPosition(otro->obtenerX(pos),otro->obtenerY(pos));
	}
} 




void CreateMap::searchInput(Ref * pSender)
{   
	textfield->attachWithIME();	
} 

void CreateMap::searchText(Ref * pSender)
{   	
    const std::string texto = textfield->getString();
	this->searchLabel(texto); 
} 


void CreateMap::procedures()
{
	//Etiquetas* label = new Etiquetas;
	//label->sizeMap(); 


}

