#include "Textinput.h"
#include "HelloWorldScene.h"
#include <stdlib.h>


USING_NS_CC;


Textinput::Textinput()
{
}


Textinput::~Textinput()
{
}

void Textinput::makeInput(){

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();
	std::string cadena;

	//textfield = TextFieldTTF::textFieldWithPlaceHolder("Search...", "Thonburi", 35);
	
	textfield->setColor(ccc3(0, 0, 0));
	textfield->setPosition(Point(origin.x + visibleSize.width / 2,
		origin.y + visibleSize.height - textfield->getContentSize().height - 715.0f));
	textfield->setAnchorPoint(CCPointZero);
	textfield->setTag(100);
	//textfield->deleteBackward();	//Borra lo escrito
	textfield->attachWithIME();
	//textfield->detachWithIME();	//Cierra el texto
//	textfield->setCascadeColorEnabled();
	//cadena=textfield->getString();
	//keyboardWillShow();
	textfield->getString();
	//CCUserDefault::sharedUserDefault()->setStringForKey(“”, textfield->getString());
	this->addChild(textfield,2);
}

void Textinput::keyboardWillShow(CCIMEKeyboardNotificationInfo &info)
{
	CCLOG("keyboardWillShow");

	CCTextFieldTTF *textfield = (CCTextFieldTTF *)textfield->getChildByTag(100);
	textfield->setString("");
}

void Textinput::keyboardWillHide(CCIMEKeyboardNotificationInfo &info)
{
	CCLog("keyboardWillHide");

	CCTextFieldTTF *textfield = (CCTextFieldTTF *)textfield->getChildByTag(100);
	CCLabelTTF *label = (CCLabelTTF *)textfield->getChildByTag(200);

	label->setString(textfield->getString());
}

void Textinput::ccTouchesBegans(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent)
{  
		CCTouch *pTouch = (CCTouch *)pTouches->anyObject();
		CCPoint point = pTouch->getLocationInView();
		point = CCDirector::sharedDirector()->convertToGL(point);

		CCTextFieldTTF *textfield = (CCTextFieldTTF *)textfield->getChildByTag(100);
		CCRect rect = textfield->boundingBox();

		if (rect.containsPoint(point)) {
			textfield->attachWithIME();
		}
	
}

void Textinput::clickText()
{

	Node* text = textfield;
	


	//Create a "one by one" touch event listener (processes one touch at a time)
	auto listener1 = EventListenerTouchOneByOne::create();
	// When "swallow touches" is true, then returning 'true' from the onTouchBegan method will "swallow" the touch event, preventing other listeners from using it.
	listener1->setSwallowTouches(true);

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

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener1, text);



}
