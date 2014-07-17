#include "Posicion.h"
#include <stdlib.h>
#include <string>
#include <locale>

USING_NS_CC;

//Constructor 
Posicion::Posicion(float x, float y, std::string etiqueta)
		:Coordx(x)
		,Coordy(y)
		,nombre(etiqueta)
	{
	} 

//Constructor por defecto.
Posicion::Posicion(void)
{
} 

void Posicion::agregarEtiquetas(float x, float y, std::string etiqueta)
{   //Se invoca el constructor.
	Posicion nuevo(x,y,etiqueta);
	//Se agrega al final del vector el objeto recientemente agregado.
	lugares.push_back(nuevo);
} 

//Llena el vector "Lugares" con las etiquetas del mapa y sus respectivas posiciones.
void Posicion::llenarVector()
{
	agregarEtiquetas(0,-1024,"Derecho");
	agregarEtiquetas(-650,-800,"Ingenieria");
	agregarEtiquetas(-810,-1850,"Odontologia");
	agregarEtiquetas(-770,-1325,"Economicas");
	agregarEtiquetas(-375,-2022,"Letras");
	agregarEtiquetas(-1000,-875,"Monge");
	agregarEtiquetas(-1320,-951,"Generales");
	agregarEtiquetas(-1335,-970,"Comedor");
	agregarEtiquetas(-510,-390,"Arquitectura");
	agregarEtiquetas(-1895,-880,"Educacion");
	agregarEtiquetas(-2030,-1055,"Bellas Artes");
	agregarEtiquetas(-1795,-1360,"Quimica");
	agregarEtiquetas(-1160,-1140,"Sociales");
	agregarEtiquetas(-110,-790,"Auditorio");
	agregarEtiquetas(0,-735,"Anfiteatro");
	agregarEtiquetas(0,-670,"ORI");
	agregarEtiquetas(0,-430,"Admin. B");
	agregarEtiquetas(0,-565,"Admin. C");
	agregarEtiquetas(0,-445,"Contraloria");
	agregarEtiquetas(-2045,-1505,"Musica");
	agregarEtiquetas(-810,-1565,"Informatica"); 
	agregarEtiquetas(-635,-1695,"Geologia");
	agregarEtiquetas(-1170,-1960,"Medicina");
	agregarEtiquetas(-1505,-2050,"Farmacia");
	agregarEtiquetas(-1810,-1710,"Microbiologia");
	agregarEtiquetas(-885,-1075,"Fisica");
	agregarEtiquetas(-885,-1050,"Matematica");
	agregarEtiquetas(-1720,-1885,"Inv. Sociales");
	agregarEtiquetas(-1730,-1515,"Biologia");
	agregarEtiquetas(-2045,-2155,"Agronomia");
	agregarEtiquetas(-2045,-2240,"Zootecnia");
	agregarEtiquetas(-2005,-2300,"CIGRAS");
	agregarEtiquetas(-1885,-2300,"CITA");
	agregarEtiquetas(-2045,-2300,"Tec. de Alimentos");
	agregarEtiquetas(-2045,-2300,"CIGRAS");
	agregarEtiquetas(-2045,-1445,"Sala Cullell");
	agregarEtiquetas(-475,-890,"Tinoco");
	agregarEtiquetas(-140,-550,"OEPI");
	agregarEtiquetas(-195,-460,"Av");
	agregarEtiquetas(-590,-555,"IIP, CIHAC");
	agregarEtiquetas(-595,-445,"Clinica(OBS)");
	agregarEtiquetas(-420,-340,"Enfermeria");
	agregarEtiquetas(-705,-285,"Art.Dramaticas");
	agregarEtiquetas(-710,-240,"Canal 15");
	agregarEtiquetas(-800,-360,"Radio UCR");
	agregarEtiquetas(-245,-270,"Cajeros/JAP");
	agregarEtiquetas(-415,-210,"CASED");
	agregarEtiquetas(-585,-155,"SINDEU");
	agregarEtiquetas(-290,0,"C.C.Poblacion");
	agregarEtiquetas(-165,0,"CCA");
	agregarEtiquetas(-350,0,"Of.Juridica");
	agregarEtiquetas(-620,-1570,"C.I");
	agregarEtiquetas(-160,-1900,"Bibliotecologia");
	agregarEtiquetas(-40,-1930,"Tec. Salud");
	agregarEtiquetas(-110,-2000,"Preescolar");
	agregarEtiquetas(-180,-1515,"Casa de Idiomas");
	agregarEtiquetas(-1325,-435,"Edificio Saprissa");
}


int Posicion::obtenerEtiquetas(const std::string etiqueta)
{ 
	//Variable que sirve de bandera en los siguientes ciclos
	bool encontrado = false;
	std::locale loc;

	//Ciclo que recorre todo el vector "Lugares"
	for (int i = 0;i<lugares.size();++i)
	{
		//Ciclo que recorre el texto de las etiquetas y lo compara con el texto a buscar ignorando mayúsculas y minúsculas.
		for (int j = 0; j < lugares[i].nombre.length(); ++j)
		{
			if (std::tolower(lugares[i].nombre[j],loc)==std::tolower(etiqueta[j],loc))
				encontrado = true;
			else
			{
				encontrado = false;
				break;
			}
		}
		if (encontrado)
			return i;
	}
	//Retorna -1 en caso de no encontrarse una etiqueta con el mismo texto.
	return -1;
} 


