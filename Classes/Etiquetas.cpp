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


	Sprite* etiqueta26 = Sprite::create("facu.png"); 
	etiqueta26->setAnchorPoint(Point(0,0));
	etiqueta26->setPosition(Point(1770,1780)); 
	//etiqueta26->setScale(0.90f, 0.90f);
	etiqueta26->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta26);


	auto label26 = LabelTTF::create("Matematica", "Arial",35);
	label26->setColor(ccc3(0,0,0));
    	label26->setAnchorPoint(Point(-0.20, 0.0));
	label26->setPosition(Point(0, 0));
	etiqueta26->addChild(label26);

	Sprite* etiqueta27 = Sprite::create("inves.png");
	etiqueta27->setAnchorPoint(Point(0,0));
	etiqueta27->setPosition(Point(2800,2950)); 
	etiqueta27->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta27);
 

	auto label27 = LabelTTF::create("Inv. Sociales", "Arial",35);
	label27->setColor(ccc3(0,0,0));
    label27->setAnchorPoint(Point(-0.20, 0.0));
	label27->setPosition(Point(0, 0));
	etiqueta27->addChild(label27); 

	
	Sprite* etiqueta28 = Sprite::create("facu.png");
	etiqueta28->setAnchorPoint(Point(0,0));
	etiqueta28->setPosition(Point(2850,2450)); 
	etiqueta28->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta28);
 

	auto label28 = LabelTTF::create("Biologia", "Arial",35);
	label28->setColor(ccc3(0,0,0));
    label28->setAnchorPoint(Point(-0.40, 0.0));
	label28->setPosition(Point(0, 0));
	etiqueta28->addChild(label28); 
	
	Sprite* etiqueta29 = Sprite::create("facu.png");
	etiqueta29->setAnchorPoint(Point(0,0));
	etiqueta29->setPosition(Point(3350,3300)); 
	etiqueta29->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta29);
 

	auto label29 = LabelTTF::create("Agronomia", "Arial",35);
	label29->setColor(ccc3(0,0,0));
    label29->setAnchorPoint(Point(-0.30, 0.0));
	label29->setPosition(Point(0, 0));
	etiqueta29->addChild(label29);

	Sprite* etiqueta30 = Sprite::create("facu.png");
	etiqueta30->setAnchorPoint(Point(0,0));
	etiqueta30->setPosition(Point(3280,3400)); 
	etiqueta30->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta30);
 

	auto label30 = LabelTTF::create("Zootecnia", "Arial",35);
	label30->setColor(ccc3(0,0,0));
    label30->setAnchorPoint(Point(-0.30, 0.0));
	label30->setPosition(Point(0, 0));
	etiqueta30->addChild(label30); 

	Sprite* etiqueta31 = Sprite::create("inves.png");
	etiqueta31->setAnchorPoint(Point(0,0));
	etiqueta31->setPosition(Point(3220,3620)); 
	etiqueta31->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta31);
 

	auto label31 = LabelTTF::create("CIGRAS", "Arial",35);
	label31->setColor(ccc3(0,0,0));
    label31->setAnchorPoint(Point(-0.30, 0.0));
	label31->setPosition(Point(0, 0));
	etiqueta31->addChild(label31); 

	Sprite* etiqueta32 = Sprite::create("inves.png");
	etiqueta32->setAnchorPoint(Point(0,0));
	etiqueta32->setPosition(Point(3100,3900)); 
	etiqueta32->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta32);
 

	auto label32 = LabelTTF::create("CITA", "Arial",35);
	label32->setColor(ccc3(0,0,0));
    label32->setAnchorPoint(Point(-0.50, 0.0));
	label32->setPosition(Point(0, 0));
	etiqueta32->addChild(label32); 

	Sprite* etiqueta33 = Sprite::create("facu.png");
	etiqueta33->setAnchorPoint(Point(0,0));
	etiqueta33->setPosition(Point(3400,3840)); 
	etiqueta33->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta33);
 

	auto label33 = LabelTTF::create("Tec. de Alimentos", "Arial",35);
	label33->setColor(ccc3(0,0,0));
    label33->setAnchorPoint(Point(-0.16, 0.0));
	label33->setPosition(Point(0, 0));
	etiqueta33->addChild(label33); 

	Sprite* etiqueta34 = Sprite::create("inves.png");
	etiqueta34->setAnchorPoint(Point(0,0));
	etiqueta34->setPosition(Point(3620,3750)); 
	etiqueta34->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta34);
 

	auto label34 = LabelTTF::create("CIGRAS", "Arial",35);
	label34->setColor(ccc3(0,0,0));
    label34->setAnchorPoint(Point(-0.30, 0.0));
	label34->setPosition(Point(0, 0));
	etiqueta34->addChild(label34); 

	Sprite* etiqueta35 = Sprite::create("clulle.png");
	etiqueta35->setAnchorPoint(Point(0,0));
	etiqueta35->setPosition(Point(3410,2340));
	etiqueta35->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta35);

	auto label35 = LabelTTF::create("Sala Cullell", "Arial",35);
	label35->setColor(ccc3(0,0,0));
	label35->setAnchorPoint(Point(-0.33, 0.0));
	label35->setPosition(Point(0, 0));
	etiqueta35->addChild(label35);

	Sprite* etiqueta36 = Sprite::create("biblio.png"); 
	etiqueta36->setAnchorPoint(Point(0,0));
	etiqueta36->setPosition(Point(1200,1600)); 
	etiqueta36->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta36);


	auto label36 = LabelTTF::create("Tinoco", "Arial",35);
	label36->setColor(ccc3(0,0,0));
    label36->setAnchorPoint(Point(-0.40, 0.0));
	label36->setPosition(Point(0, 0));
	etiqueta36->addChild(label36); 

	Sprite* etiqueta37 = Sprite::create("ofi.png"); 
	etiqueta37->setAnchorPoint(Point(0,0));
	etiqueta37->setPosition(Point(800,1150)); 
	etiqueta37->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta37);


	auto label37 = LabelTTF::create("OEPI", "Arial",35);
	label37->setColor(ccc3(0,0,0));
    label37->setAnchorPoint(Point(-0.40, 0.0));
	label37->setPosition(Point(0, 0));
	etiqueta37->addChild(label37); 

	Sprite* etiqueta38 = Sprite::create("anfi.png"); 
	etiqueta38->setAnchorPoint(Point(0,0));
	etiqueta38->setPosition(Point(900,1050)); 
	etiqueta38->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta38);


	auto label38 = LabelTTF::create("Av", "Arial",35);
	label38->setColor(ccc3(0,0,0));
    label38->setAnchorPoint(Point(-0.80, 0.0));
	label38->setPosition(Point(0, 0));
	etiqueta38->addChild(label38); 

	Sprite* etiqueta39 = Sprite::create("inves.png"); 
	etiqueta39->setAnchorPoint(Point(0,0));
	etiqueta39->setPosition(Point(1325,1150)); 
	etiqueta39->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta39);


	auto label39 = LabelTTF::create("IIP, CIHAC", "Arial",35);
	label39->setColor(ccc3(0,0,0));
    label39->setAnchorPoint(Point(-0.20, 0.0));
	label39->setPosition(Point(0, 0));
	etiqueta39->addChild(label39);

	Sprite* etiqueta40 = Sprite::create("clinic.png"); 
	etiqueta40->setAnchorPoint(Point(0,0));
	etiqueta40->setPosition(Point(1325,1025)); 
	etiqueta40->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta40);


	auto label40 = LabelTTF::create("Clinica(OBS)", "Arial",35);
	label40->setColor(ccc3(0,0,0));
    label40->setAnchorPoint(Point(-0.20, 0.0));
	label40->setPosition(Point(0, 0));
	etiqueta40->addChild(label40);

	Sprite* etiqueta41 = Sprite::create("facu.png"); 
	etiqueta41->setAnchorPoint(Point(0,0));
	etiqueta41->setPosition(Point(1100,875)); 
	etiqueta41->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta41);


	auto label41 = LabelTTF::create("Enfermeria", "Arial",35);
	label41->setColor(ccc3(0,0,0));
    label41->setAnchorPoint(Point(-0.20, 0.0));
	label41->setPosition(Point(0, 0));
	etiqueta41->addChild(label41);

	Sprite* etiqueta42 = Sprite::create("facu.png"); 
	etiqueta42->setAnchorPoint(Point(0,0));
	etiqueta42->setPosition(Point(1400,800)); 
	etiqueta42->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta42);


	auto label42 = LabelTTF::create("Art.Dramaticas", "Arial",35);
	label42->setColor(ccc3(0,0,0));
    label42->setAnchorPoint(Point(-0.20, 0.0));
	label42->setPosition(Point(0, 0));
	etiqueta42->addChild(label42);

	Sprite* etiqueta43 = Sprite::create("tv.png"); 
	etiqueta43->setAnchorPoint(Point(0,0));
	etiqueta43->setPosition(Point(1490,725)); 
	etiqueta43->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta43);


	auto label43 = LabelTTF::create("Canal 15", "Arial",35);
	label43->setColor(ccc3(0,0,0));
    label43->setAnchorPoint(Point(-0.30, 0.0));
	label43->setPosition(Point(0, 0));
	etiqueta43->addChild(label43);

	Sprite* etiqueta44 = Sprite::create("radio.png"); 
	etiqueta44->setAnchorPoint(Point(0,0));
	etiqueta44->setPosition(Point(1600,900)); 
	etiqueta44->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta44);


	auto label44 = LabelTTF::create("Radio UCR", "Arial",35);
	label44->setColor(ccc3(0,0,0));
    label44->setAnchorPoint(Point(-0.20, 0.0));
	label44->setPosition(Point(0, 0));
	etiqueta44->addChild(label44);

	Sprite* etiqueta45 = Sprite::create("caje.png"); 
	etiqueta45->setAnchorPoint(Point(0,0));
	etiqueta45->setPosition(Point(850,775)); 
	etiqueta45->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta45);


	auto label45 = LabelTTF::create("Cajeros/JAP", "Arial",35);
	label45->setColor(ccc3(0,0,0));
    label45->setAnchorPoint(Point(-0.20, 0.0));
	label45->setPosition(Point(0, 0));
	etiqueta45->addChild(label45);

	Sprite* etiqueta46 = Sprite::create("ofi.png"); 
	etiqueta46->setAnchorPoint(Point(0,0));
	etiqueta46->setPosition(Point(1125,700)); 
	etiqueta46->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta46);


	auto label46 = LabelTTF::create("CASED", "Arial",35);
	label46->setColor(ccc3(0,0,0));
    label46->setAnchorPoint(Point(-0.30, 0.0));
	label46->setPosition(Point(0, 0));
	etiqueta46->addChild(label46);

	Sprite* etiqueta47 = Sprite::create("sindi.png"); 
	etiqueta47->setAnchorPoint(Point(0,0));
	etiqueta47->setPosition(Point(1325,630)); 
	etiqueta47->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta47);


	auto label47 = LabelTTF::create("SINDEU", "Arial",35);
	label47->setColor(ccc3(0,0,0));
    label47->setAnchorPoint(Point(-0.30, 0.0));
	label47->setPosition(Point(0, 0));
	etiqueta47->addChild(label47);

	Sprite* etiqueta48 = Sprite::create("ofi.png"); 
	etiqueta48->setAnchorPoint(Point(0,0));
	etiqueta48->setPosition(Point(900,400)); 
	etiqueta48->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta48);


	auto label48 = LabelTTF::create("C.C.Poblacion", "Arial",35);
	label48->setColor(ccc3(0,0,0));
    label48->setAnchorPoint(Point(-0.15, 0.0));
	label48->setPosition(Point(0, 0));
	etiqueta48->addChild(label48);

	Sprite* etiqueta49 = Sprite::create("ofi.png"); 
	etiqueta49->setAnchorPoint(Point(0,0));
	etiqueta49->setPosition(Point(850,250)); 
	etiqueta49->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta49);


	auto label49 = LabelTTF::create("CCA", "Arial",35);
	label49->setColor(ccc3(0,0,0));
    label49->setAnchorPoint(Point(-0.45, 0.0));
	label49->setPosition(Point(0, 0));
	etiqueta49->addChild(label49);

	Sprite* etiqueta50 = Sprite::create("ofi.png"); 
	etiqueta50->setAnchorPoint(Point(0,0));
	etiqueta50->setPosition(Point(1025,170)); 
	etiqueta50->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta50);


	auto label50 = LabelTTF::create("Of.Juridica", "Arial",35);
	label50->setColor(ccc3(0,0,0));
    label50->setAnchorPoint(Point(-0.20, 0.0));
	label50->setPosition(Point(0, 0));
	etiqueta50->addChild(label50);

	 Sprite* etiqueta51 = Sprite::create("pc.png");
	 etiqueta51->setAnchorPoint(Point(0,0));
	 etiqueta51->setPosition(Point(1430,2500));
	 etiqueta51->setScale(1.60f, 1.60f);
	 Map->addChild(etiqueta51);

	 auto label51 = LabelTTF::create("C.I","Arial",35);
	 label51->setColor(ccc3(0,0,0));
	 label51->setAnchorPoint(Point(-0.85, 0.0));
	 label51->setPosition(Point(0, 0));
	 etiqueta51->addChild(label51); 


	Sprite* etiqueta52 = Sprite::create("facu.png"); 
	etiqueta52->setAnchorPoint(Point(0,0));
	etiqueta52->setPosition(Point(700,2960)); 
	etiqueta52->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta52);


	auto label52 = LabelTTF::create("Bibliotecologia", "Arial",35);
	label52->setColor(ccc3(0,0,0));
    label52->setAnchorPoint(Point(-0.20, 0.0));
	label52->setPosition(Point(0, 0));
	etiqueta52->addChild(label52); 


	Sprite* etiqueta53 = Sprite::create("facu.png"); 
	etiqueta53->setAnchorPoint(Point(0,0));
	etiqueta53->setPosition(Point(610,3000)); 
	etiqueta53->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta53);


	auto label53 = LabelTTF::create("Tec. Salud", "Arial",35);
	label53->setColor(ccc3(0,0,0));
    label53->setAnchorPoint(Point(-0.25, 0.0));
	label53->setPosition(Point(0, 0));
	etiqueta53->addChild(label53); 

	Sprite* etiqueta54 = Sprite::create("facu.png"); 
	etiqueta54->setAnchorPoint(Point(0,0));
	etiqueta54->setPosition(Point(700,3100)); 
	etiqueta54->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta54);


	auto label54 = LabelTTF::create("Preescolar", "Arial",35);
	label54->setColor(ccc3(0,0,0));
    label54->setAnchorPoint(Point(-0.25, 0.0));
	label54->setPosition(Point(0, 0));
	etiqueta54->addChild(label54); 
	
	Sprite* etiqueta55 = Sprite::create("ofi.png"); 
	etiqueta55->setAnchorPoint(Point(0,0));
	etiqueta55->setPosition(Point(700,2450)); 
	etiqueta55->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta55);


	auto label55 = LabelTTF::create("Casa de Idiomas", "Arial",35);
	label55->setColor(ccc3(0,0,0));
    label55->setAnchorPoint(Point(-0.15, 0.0));
	label55->setPosition(Point(0, 0));
	etiqueta55->addChild(label55); 


	Sprite* etiqueta56 = Sprite::create("edi.png");
	etiqueta56->setAnchorPoint(Point(0,0));
	etiqueta56->setPosition(Point(2200,1000)); 
	etiqueta56->setScale(1.60f, 1.60f);
	Map->addChild(etiqueta56);


	auto label56 = LabelTTF::create("Edificio Saprissa", "Arial",35);
	label56->setColor(ccc3(0,0,0));
    label56->setAnchorPoint(Point(-0.130, 0.00));
	label56->setPosition(Point(0, 0));
	etiqueta56->addChild(label56);  

}


void  Etiquetas::setNewLabels(int a) {

/*
	if (getSize == asdq, asq)
	for (getsize =Xtamaño; 0<tamaño de etiquetas; 0++){
		etiquetas"%d"i->setScale....
	
	}*/


}
