#include "Etiqueta.h"

USING_NS_CC; 

void Etiqueta:: createLabel()
{
	Sprite* etiqueta = Sprite::create("etiquetagrande.png");
	
	etiqueta->setAnchorPoint(Point(0,0));
	// etiqueta->setPosition(Point(origin.x + visibleSize.width/2, origin.y + visibleSize.height - etiqueta->getContentSize().height-150.f));
	//etiqueta->setScale(1.50f, 1.50f);
	//Map->addChild(etiqueta);
    //addChild(etiqueta);

	 auto Texto = LabelTTF::create("Derecho", "Arial",45);
	 Texto->setColor(ccc3(0,0,0));
	 Texto->setAnchorPoint(Point(-0.44, -0.58));
	 Texto->setPosition(Point(0, 0));
	 etiqueta->addChild(Texto); 

};

Etiqueta::~Etiqueta(void)
{
}
