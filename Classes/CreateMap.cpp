#include "CreateMap.h"
#include "HelloWorldScene.h"

USING_NS_CC;


void CreateMap::crearMapa()
{

	Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

	auto map = Sprite::create("mapa.png");
	map->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
	this->addChild(map,0);



}

/*void CreateMap::createMap()
{
	// create a TMX map
    TMXTiledMap *map = TMXTiledMap::create("TileMaps/mapa.tmx");

    addChild(map, 0, kTagTileMap);

    // All the tiles by default will be aliased. If you want to create anti-alias tiles, you should do:

    // iterate over all the "layers" (atlas sprite managers)

    // and set them as 'antialias' 

    Array * pChildrenArray = map->getChildren();

    SpriteBatchNode* child = NULL;

    Ref* pObject = NULL;

    CCARRAY_FOREACH(pChildrenArray, pObject)
    {
            child = (CCSpriteBatchNode*)pObject;

            if(!child)
                break;

            child->getTexture()->setAntiAliasTexParameters();
    }

	

}*/

