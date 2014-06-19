#include "Etiquetas.h"
#include "CreateMap.h" 

USING_NS_CC;

void Etiquetas::createLabel()  
{   
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin(); 
	//Array Node; 

  
	createMap(); 

Sprite* etiqueta = Sprite::create("facu.png"); 
	etiqueta->setAnchorPoint(Point(0,0));
	etiqueta->setPosition(Point(500,1800));
	etiqueta->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta);
    //addChild(etiqueta);
//		Node[0]=etiqueta;	
	auto label = LabelTTF::create("Derecho", "Arial",35);
	label->setColor(ccc3(0,0,0));
	label->setAnchorPoint(Point(-0.30, 0.0));
	label->setPosition(Point(0, 0));
	etiqueta->addChild(label);  

	Sprite* etiqueta1 = Sprite::create("facu.png");
	etiqueta1->setAnchorPoint(Point(0,0));
	etiqueta1->setPosition(Point(1400,1500));
	etiqueta1->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta1);
    //addChild(etiqueta);

	auto label1 = LabelTTF::create("Ingenieria", "Arial",35);
	label1->setColor(ccc3(0,0,0));
	label1->setAnchorPoint(Point(-0.30, 0.0));
	label1->setPosition(Point(0, 0));
	etiqueta1->addChild(label1);  

	Sprite* etiqueta2 = Sprite::create("facu.png");
	etiqueta2->setAnchorPoint(Point(0,0));
	etiqueta2->setPosition(Point(1600,2900)); 
	etiqueta2->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta2);
    //addChild(etiqueta);

	auto label2 = LabelTTF::create("Odontologia", "Arial",35);
	label2->setColor(ccc3(0,0,0));
    label2->setAnchorPoint(Point(-0.20,0.0));
	label2->setPosition(Point(0, 0));
	etiqueta2->addChild(label2);  

	
	Sprite* etiqueta3 = Sprite::create("facu.png");
	etiqueta3->setAnchorPoint(Point(0,0));
	etiqueta3->setPosition(Point(1600,2200)); 
	etiqueta3->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta3);
    //addChild(etiqueta);

	auto label3 = LabelTTF::create("Economicas", "Arial",35);
	label3->setColor(ccc3(0,0,0));
    label3->setAnchorPoint(Point(-0.20, 0.0));
	label3->setPosition(Point(0, 0));
	etiqueta3->addChild(label3);  

	Sprite* etiqueta4 = Sprite::create("facu.png");
	etiqueta4->setAnchorPoint(Point(0,0));
	etiqueta4->setPosition(Point(1050,3100)); 
	etiqueta4->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta4);
    //addChild(etiqueta);

	auto label4 = LabelTTF::create("Letras", "Arial",35);
	label4->setColor(ccc3(0,0,0));
    label4->setAnchorPoint(Point(-0.40, 0.0));
	label4->setPosition(Point(0, 0));
	etiqueta4->addChild(label4);  

	Sprite* etiqueta5 = Sprite::create("biblio.png");
	etiqueta5->setAnchorPoint(Point(0,0));
	etiqueta5->setPosition(Point(1900,1600)); 
	etiqueta5->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta5);
    //addChild(etiqueta);

	auto label5 = LabelTTF::create("Monge", "Arial",35);
	label5->setColor(ccc3(0,0,0));
    label5->setAnchorPoint(Point(-0.40, 0.0));
	label5->setPosition(Point(0, 0));
	etiqueta5->addChild(label5);  

	Sprite* etiqueta6 = Sprite::create("facu.png");
	etiqueta6->setAnchorPoint(Point(0,0));
	etiqueta6->setPosition(Point(2300,1700)); 
	etiqueta6->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta6);
    //addChild(etiqueta);

	auto label6 = LabelTTF::create("Generales", "Arial",35);
	label6->setColor(ccc3(0,0,0));
    label6->setAnchorPoint(Point(-0.25, 0.00));
	label6->setPosition(Point(0, 0));
	etiqueta6->addChild(label6);  

	Sprite* etiqueta7 = Sprite::create("cucha.png");
	etiqueta7->setAnchorPoint(Point(0,0));
	etiqueta7->setPosition(Point(850,2250)); 
	etiqueta7->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta7);
    //addChild(etiqueta);

	auto label7 = LabelTTF::create("Comedor", "Arial",35);
	label7->setColor(ccc3(0,0,0));
    label7->setAnchorPoint(Point(-0.30, -0.00));
	label7->setPosition(Point(0, 0));
	etiqueta7->addChild(label7);  

	Sprite* etiqueta8 = Sprite::create("facu.png");
	etiqueta8->setAnchorPoint(Point(0,0));
	etiqueta8->setPosition(Point(1200,950)); 
	etiqueta8->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta8);
    //addChild(etiqueta);

	auto label8 = LabelTTF::create("Arquitectura", "Arial",35);
	label8->setColor(ccc3(0,0,0));
    label8->setAnchorPoint(Point(-0.20, 0.0));
	label8->setPosition(Point(0, 0));
	etiqueta8->addChild(label8);  

	Sprite* etiqueta9 = Sprite::create("facu.png");
	etiqueta9->setAnchorPoint(Point(0,0));
	etiqueta9->setPosition(Point(3050,1600)); 
	etiqueta9->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta9);
    //addChild(etiqueta);

	auto label9 = LabelTTF::create("Educacion", "Arial",35);
	label9->setColor(ccc3(0,0,0));
    label9->setAnchorPoint(Point(-0.30, 0.0));
	label9->setPosition(Point(0, 0));
	etiqueta9->addChild(label9);  

	Sprite* etiqueta10 = Sprite::create("facu.png");
	etiqueta10->setAnchorPoint(Point(0,0));
	etiqueta10->setPosition(Point(3200,1850)); 
	etiqueta10->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta10);
    //addChild(etiqueta);

	auto label10 = LabelTTF::create("Bellas Artes", "Arial",35);
	label10->setColor(ccc3(0,0,0));
    label10->setAnchorPoint(Point(-0.23, 0.0));
	label10->setPosition(Point(0, 0));
	etiqueta10->addChild(label10);  

	Sprite* etiqueta11 = Sprite::create("facu.png");
	etiqueta11->setAnchorPoint(Point(0,0));
	etiqueta11->setPosition(Point(2950,2250)); 
	etiqueta11->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta11);
    //addChild(etiqueta);

	auto label11 = LabelTTF::create("Quimica", "Arial",35);
	label11->setColor(ccc3(0,0,0));
    label11->setAnchorPoint(Point(-0.30, 0.00));
	label11->setPosition(Point(0, 0));
	etiqueta11->addChild(label11);  

	Sprite* etiqueta12 = Sprite::create("facu.png"); 
	etiqueta12->setAnchorPoint(Point(0,0));
	etiqueta12->setPosition(Point(2100,1950)); 
	etiqueta12->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta12);
    //addChild(etiqueta);

	auto label12 = LabelTTF::create("Sociales", "Arial",35);
	label12->setColor(ccc3(0,0,0));
    label12->setAnchorPoint(Point(-0.30, 0.0));
	label12->setPosition(Point(0, 0));
	etiqueta12->addChild(label12);   

	Sprite* etiqueta13 = Sprite::create("audi.png");
	etiqueta13->setAnchorPoint(Point(0,0));
	etiqueta13->setPosition(Point(700,1500));
	etiqueta13->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta13);


	 auto label13 = LabelTTF::create("Auditorio", "Arial",35);
	 label13->setColor(ccc3(0,0,0));
	 label13->setAnchorPoint(Point(-0.30, 0.0));
	 label13->setPosition(Point(0, 0));
	 etiqueta13->addChild(label13); 


	Sprite* etiqueta14 = Sprite::create("anfi.png");
	etiqueta14->setAnchorPoint(Point(0,0));
	etiqueta14->setPosition(Point(300,1400));
	etiqueta14->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta14);

	 auto label14 = LabelTTF::create("Anfiteatro", "Arial",35);
	 label14->setColor(ccc3(0,0,0));
	 label14->setAnchorPoint(Point(-0.30, 0.0));
	 label14->setPosition(Point(0, 0));
	 etiqueta14->addChild(label14); 


	Sprite* etiqueta15 = Sprite::create("edi.png");
	etiqueta15->setAnchorPoint(Point(0,0));
	etiqueta15->setPosition(Point(500,1300));
	etiqueta15->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta15);

	 auto label15 = LabelTTF::create("ORI       ", "Arial",35);
	 label15->setColor(ccc3(0,0,0));
	 label15->setAnchorPoint(Point(-0.30, 0.0));
	 label15->setPosition(Point(0, 0));
	 etiqueta15->addChild(label15); 
	  

	Sprite* etiqueta16 = Sprite::create("edi.png");
	etiqueta16->setAnchorPoint(Point(0,0));
	etiqueta16->setPosition(Point(500,1000));
	etiqueta16->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta16);

	 auto label16 = LabelTTF::create("Admin. B", "Arial",35);
	 label16->setColor(ccc3(0,0,0));
	 label16->setAnchorPoint(Point(-0.30, 0.0));
	 label16->setPosition(Point(0, 0));
	 etiqueta16->addChild(label16); 

	Sprite* etiqueta17 = Sprite::create("edi.png");
	etiqueta17->setAnchorPoint(Point(0,0));
	etiqueta17->setPosition(Point(250,1160));
	etiqueta17->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta17);

	 auto label17 = LabelTTF::create("Admin. C", "Arial",35);
	 label17->setColor(ccc3(0,0,0));
	 label17->setAnchorPoint(Point(-0.30, 0.0));
	 label17->setPosition(Point(0, 0));
	 etiqueta17->addChild(label17); 

	Sprite* etiqueta18 = Sprite::create("edi.png");	
	etiqueta18->setAnchorPoint(Point(0,0));
	etiqueta18->setPosition(Point(100,1000));
	etiqueta18->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta18);

	 auto label18 = LabelTTF::create("Contraloria", "Arial",35);
	 label18->setColor(ccc3(0,0,0));
	 label18->setAnchorPoint(Point(-0.27, 0.0));
	 label18->setPosition(Point(0, 0));
	 etiqueta18->addChild(label18); 

	Sprite* etiqueta19 = Sprite::create("facu.png");
	etiqueta19->setAnchorPoint(Point(0,0));
	etiqueta19->setPosition(Point(3430,2400));
	etiqueta19->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta19);

	 auto label19 = LabelTTF::create("Musica", "Arial",35);
	 label19->setColor(ccc3(0,0,0));
	 label19->setAnchorPoint(Point(-0.33, 0.0));
	 label19->setPosition(Point(0, 0));
	 etiqueta19->addChild(label19); 

	 Sprite* etiqueta20 = Sprite::create("facu.png");
	etiqueta20->setAnchorPoint(Point(0,0));
	etiqueta20->setPosition(Point(1600,2500));
	etiqueta20->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta20);

	 auto label20 = LabelTTF::create("Informatica","Arial",35);
	 label20->setColor(ccc3(0,0,0));
	 label20->setAnchorPoint(Point(-0.25, 0.0));
	 label20->setPosition(Point(0, 0));
	 etiqueta20->addChild(label20); 

	  Sprite* etiqueta21 = Sprite::create("facu.png");
	etiqueta21->setAnchorPoint(Point(0,0));
	etiqueta21->setPosition(Point(1400,2700));
	etiqueta21->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta21);

	 auto label21 = LabelTTF::create("Geologia","Arial",35);
	 label21->setColor(ccc3(0,0,0));
	 label21->setAnchorPoint(Point(-0.30, 0.0));
	 label21->setPosition(Point(0, 0));
	 etiqueta21->addChild(label21); 

	 Sprite* etiqueta22 = Sprite::create("facu.png");
	etiqueta22->setAnchorPoint(Point(0,0));
	etiqueta22->setPosition(Point(2100,3030)); 
	etiqueta22->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta22);
 

	auto label22 = LabelTTF::create("Medicina", "Arial",35);
	label22->setColor(ccc3(0,0,0));
    label22->setAnchorPoint(Point(-0.30, 0.0));
	label22->setPosition(Point(0, 0));
	etiqueta22->addChild(label22);  

	 Sprite* etiqueta23 = Sprite::create("facu.png");
	etiqueta23->setAnchorPoint(Point(0,0));
	etiqueta23->setPosition(Point(2550,3150)); 
	etiqueta23->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta23);
 

	auto label23 = LabelTTF::create("Farmacia", "Arial",35);
	label23->setColor(ccc3(0,0,0));
    label23->setAnchorPoint(Point(-0.30, 0.0));
	label23->setPosition(Point(0, 0));
	etiqueta23->addChild(label23); 

	Sprite* etiqueta24 = Sprite::create("facu.png");
	etiqueta24->setAnchorPoint(Point(0,0));
	etiqueta24->setPosition(Point(2900,2700)); 
	etiqueta24->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta24);
 

	auto label24 = LabelTTF::create("Microbiologia", "Arial",35);
	label24->setColor(ccc3(0,0,0));
    label24->setAnchorPoint(Point(-0.20, 0.0));
	label24->setPosition(Point(0, 0));
	etiqueta24->addChild(label24); 

	Sprite* etiqueta25 = Sprite::create("facu.png"); 
	etiqueta25->setAnchorPoint(Point(0,0));
	etiqueta25->setPosition(Point(1780,1850)); 
	etiqueta25->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta25);


	auto label25 = LabelTTF::create("Fisica", "Arial",35);
	label25->setColor(ccc3(0,0,0));
    label25->setAnchorPoint(Point(-0.40, 0.0));
	label25->setPosition(Point(0, 0));
	etiqueta25->addChild(label25); 


		Sprite* etiqueta26 = Sprite::create("punto.png"); 
	etiqueta26->setAnchorPoint(Point(0,0));
	etiqueta26->setPosition(Point(1770,1780)); 
	etiqueta26->setScale(0.90f, 0.90f);
	Map->addChild(etiqueta26);


	auto label26 = LabelTTF::create("Matematica", "Arial",35);
	label26->setColor(ccc3(0,0,0));
    label26->setAnchorPoint(Point(-0.20, 0.0));
	label26->setPosition(Point(0, 0));
	etiqueta26->addChild(label26);
	
}

void  Etiquetas::setNewLabels(int a) {

/*
	if (getSize == asdq, asq)
	for (getsize =Xtamaño; 0<tamaño de etiquetas; 0++){
		etiquetas"%d"i->setScale....
	
	}*/


}
