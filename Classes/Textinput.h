#pragma once
#include "HelloWorldScene.h"
#include <cocos2d.h>

class Textinput : public cocos2d::Layer
{
public: 
	Textinput();
	~Textinput();

	//CCTextFieldTTF *textfield; 



public:
	//void makeInput();
	void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo &info);
	void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo &info);
	void ccTouchesBegans(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
	//void clickText();
};

