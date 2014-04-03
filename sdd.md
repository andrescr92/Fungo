#![Fungo icon](https://encrypted-tbn1.gstatic.com/images?q=tbn:ANd9GcQWr0jR5_wG9R4twg-bK2-lHCTD0FnzJGEVkgKDwwEWLIyVTAL3)FunGo

<p align="justify">

**FunGo** es una aplicación tipo "Waze" (de geoposicionamiento global), con la diferencia de estar enfocada exclusivamente en la Universidad de Costa Rica, la cual posee el objetivo de guiar a los estudiantes de nuevo ingreso, y así como también a los estudiantes regulares y funcionarios de la universidad, por acceso directo al lugar de destino o simplemente conocer gran parte del recinto universitario completando una serie de retos o juegos. Se optó por realizar esta aplicación ya que muchos de los servicios que brinda la universidad se encuentran en lugares con una ubicación confusa o extraña, ya que se dan casos de estudiantes que necesitan realizar un trámite en el lado oeste de la universidad, por indicaciones confusas y/o información erronea, la persona termina en el lado este.

<br><br>

Los recintos en la aplicación estarían divididos acorde a una clasificación determinada: facultades, sodas, bibliotecas, etc. Es una aplicación que puede extenderse para proveer funcionalidades como:

1. La publicación de anuncios importantes sobre actividades u otras noticias que los estudiantes deseen dar a conocer. Esto es de gran importancia para los estudiantes ya que a muchas de las actividades que se dan en la universidad no se les da una propaganda correcta, esto hace que sean ignoradas por los universitarios.

2. Un método de puntaje, el cual consiste en que cada usuario pueda llevar un registro de puntos de acuerdo al uso que éste tenga de la aplicación. Esta función actuaria como incentivo para que los usuarios le den un mayor uso al programa y además para que se pueda valorar la veracidad de los aportes de una persona.

3. Conformar un sistema de usuarios que les permita interactuar entre ellos, en el cual el ingreso esté regulado mediante la solicitud del número de carné. Lo que se pretendería es que el estudiante pueda solicitar ayuda a otros usuarios de la aplicación cuando se le presente alguna duda respecto a la ubicación de algún lugar dentro del campus universitario, o por el contrario, desee ayudar a alguien que solicite ayuda.

4. Fotografías sobre las distintas áreas que conforman la Universidad, por ejemplo, las bibliotecas. El objetivo detrás de esta función es que sea más fácil para una persona saber su ubicación utilizando las fotografias como referencia.

5. Una categoría donde se encuentre información sobre el bus universitario y además el lugar donde se hallan sus paradas, sus horario, su posición según el satelite, etc. Esto podria beneficiar a los usuarios ya que este servicio brindado por la universidad es muchas veces un tema de confusión para las personas que lo utilizan.

6. Una brújula, la cual pueda guiar al estudiante durante su trayecto en la universidad. Esto tendría como fin brindarle al usuario una posición exacta según los puntos cardinales.

7. Un juego el cual pueda ayudar a los estudiantes de primer ingreso a ganar puntos extra, ya que con estos se le otorgan ciertos privilegios. Con este juego se pretende que el usuario de nuevo ingreso, además de familiarizarse con la aplicación, conozca las áreas mas importantes de la universidad mediante los retos que se le impongan.

8. El envío de la localización actual de una persona a otra. Esto le facilitaría a los estudiantes el poder encontrarse con sus amigos dentro del campus universitario de una manera rápida.

9. Un listado de los profesores con sus respectivas oficinas especificadas en cada facultad. Esto evitaría que exista confusión en el estudiante cuando necesite asistir a la oficina de su profesor, como por ejemplo, en horario de consulta o cualquier otra situación.

##Ficha Técnica

* *Plataforma Destino*. El software se encuentra destinado hacia 2 plataformas de dispositivos móviles (Android & IOS), y así como también está destinado para sistemas operativos de computadoras de escritorio (Windows).
<br>

* *Audiencia*. Principalmente para jóvenes y adultos, ya que  es la población principal que se puede encontrar en el recinto universtario.
<br>

* *Productos Similares*. Como se mencionó anteriormente nuestro software se inspiró en la aplicación de geoposicinamiento global para dispostivos móviles llamada "Waze". Solamente que el producto está destinado únicamente para las instalaciones universitarias, de manera que estudiantes (tanto de nuevo ingreso como veteranos), profesores, personal administrativo, empleados y visitantes de esta institución puedan ubicarse fácilmente a través del recinto.


## Flujo del juego

#![Posible Interfaz](https://github.com/andrescr92/Fungo/blob/master/Posible%20Interfaz.png?raw=true)

Una vez que el usuario ejecuta la aplicación FunGo (como se puede observar en la imagen anterior) aparecerá una estrella la cual representa diversos retos a los que este podría enfrentarse si así lo desea. Estos desafíos poseen gran importancia, ya que, es mediante ellos que el usario obtiene cierta cantidad de puntos que le permitiría adquirir beneficios y una prominente posición en el ranking de Fungo, dependiendo de la cantidad de puntos acumulados. Las característicias del juego son las siguientes:

1. El juego como tal no tendrá una dificultad que incremente conforme el transcurso del mismo, sino que, el usuario es quien tiene la opción de elegir de un listado de retos, estos tienen una dificultad definida la cual irá incrementando o decreciendo conforme se vayan cumpliendo ciertos factores, por ejemplo, la calificación que le brinden los usuarios que lo resuelvan, la cantidad de personas que se interesen en realizarlo, entre otros. Además dentro de las opciones que se presentan en esta función se tiene la de proponer un nuevo reto para los demás, esto solo si la persona tiene el puntaje requerido para hacerlo. <span style="background:red">Es MUY IMPORTANTE dar algunos ejemplos de retos.</span>

2. La finalidad del juego consiste que que el usuario pueda ir ganando cierta cantidad de puntos para su cuenta, pues así podrá convertirse en un usuario privilegiado y por ende, poseer mayor impacto sobre los otros usuarios. Esto tiene relacion con una de las reglas que posee la aplicación, la cual es que solo podrán publicar en ella aquellos usuarios que tengan registrado cierta cantidad de puntos.<span style="background:red">Explicar el sistema de premiación: cuántos puntos se necesitan para cada título, desde mostazilla hasta ¿catedrático? y qué se puede hacer con cada nivel: rotular edificios, enviar fotos, proponer retos,...?</span>

3. Conforme el tiempo avanza y ciertos retos no hayan sido descifrados, su valor aumentará, es decir, el puntaje que ganaría la persona que logre conquistarlo será mayor.

4. En el momento en que un usuario ha logrado ganar el reto, este lo evaluará para que pueda existir un flujo de retos, por lo que si un reto registra un puntaje menor o malo, podría desaparecer, o al menos ir perdiendo visibilidad. Los malos retos sirven de ejemplo para que quien quiere agregar uno nuevo, sepa cuáles no gustaron.

5. El juego pretende también incentivar la colaboración, de manera que, si cierta persona ayuda a otra para que pueda superar un reto determinado, entonces esta se verá beneficiada con una bonificación de puntos.

##### Posibles retos
A continuación se presentarán algunos  retos que ejemplificaran claramente como sería la temática de estos en la aplicación:

- Uno de estos podría ser buscar la casita de mate. Y hacer alguna pregunta relacionada con los objetos que se encuentra en esta y/o su apariencia.
- Otro reto sería preguntar cuánto costaría un cuaderno de examen en "X" lugar (ya sea el kiosko, fotocopiadoras, etc…).
- Otra opción podría ser la de optar por poner una especie de aviso (o cartel) en la pizarra de información de "X" escuela, este presentaría un tiempo límite para resolverlo.
- Como último ejemplo se podría hacer un reto en el cuál se identifique la posición de alguna estatua, por ejemplo: las que están circundantes a la biblioteca Carlos Monge.

##### Sistema de Rango

Mostacilla..........0 pts<br>
Humanizado..........500 pts<br>
Enfiestado..........1000 pts<br>
Palmado.............2500 pts<br>
Bachiller...........5000 pts<br>
Catedrático.........10000 pts

Según el rango se podrá a acceder a distintas funcionalidades de la aplicación y al mismo tiempo este permite eliminar limitaciones de algunas funcionalidades. A continuación se presentarán los distintos rangos y sus beneficios: 

Las personas que se encuentren en el nivel de mostacilla podrán: 

- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Mantener 2 retos activos al mismo tiempo.

Mientras que los “humanizados(as)” podrán:
- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Publicar un reto mensual.
- Otorgar asistencia a otras personas en sus retos.
- Mantener 4 retos activos al mismo tiempo.

Los(as) enfiestados(as) tendrán el privilegio de:

- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Publicar un reto mensual.
- Otorgar asistencia a otras personas en sus retos.
- La publicación de anuncios en el mapa universitario cada 12 horas.
- Mantener 6 retos activos al mismo tiempo.

El palmado cuenta con los permisos de:
- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Publicar un reto por quincena.
- Otorgar asistencia a otras personas en sus retos.
- La publicación de anuncios en el mapa universitario cada 6 horas.
- Mantener 8 retos activos al mismo tiempo.

Las(os) “Bachiller” podrán:
- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Publicar un reto por semanal.
- Otorgar asistencia a otras personas en sus retos.
- La publicación de anuncios en el mapa universitario cada 4 horas.
- La posibilidad de moderar los anuncios y retos que se publican en la aplicación.
- Recibir un bono extra de puntos al ayudar a otras personas con sus retos.
- Mantener 10 retos activos al mismo tiempo.

Los(as) “Catedráticos(as)”  serán capaces de:
- Aceptar los retos para las personas de primer ingreso.
- Hacer uso del mapa universitario.
- Utilizar el chat.
- Publicar un reto diario.
- Otorgar asistencia a otras personas en sus retos.
- La publicación de anuncios en el mapa universitario cada hora.
- La posibilidad de moderar los anuncios y retos que se publican en la aplicación.
- Recibir un bono extra de puntos al ayudar a otras personas con sus retos.
- Mantener una cantidad ilimitada de retos activos al mismo tiempo.
- Además su nombre aparecerá en la Salón de la Fama de FunGo.

## Caracteres

El juego será controlado principalmente por los usuarios de esta aplicación (estudiantes de la Universidad de Costa Rica, personal docente, administrativos y otros (as)). Cada uno de ellos se verá representado mediante una flecha o puntero, pero existe la posibilidad de elegir un avatar personalizable que lo identifique en el bloque de información del usuario. Para iniciar un desafío, el usuario debe aceptarlo y desplazarse por el mapa para poder conquistar dicho enigma; cabe destacar que el jugador siempre será el mismo. Si la cola de retos está llena el usuario no podrá iniciar un reto hasta que cancele uno activo y/o cumpla con los que ya tiene. Y además si se canceló un reto, la persona verá reducido su puntaje según los puntos que este reto presentaba. Por ejemplo si un reto valía 10 puntos y este fue cancelado por el usuario el puntaje general del usuario bajará la misma cantidad de puntos que este presenta.

<span style="background:red">¿Se le prohibirá iniciar un nuevo reto si tiene otro pendiente? o ¿cuántos retos puede adquirir de acuerdo a su "karma" (límite mostazilla = 1, ..., límite catedrático = 10)? ¿Cuánto es el castigo por abandonar un reto: la mitad de los puntos del reto?</span>

## Controles

El usuario hará uso de los siguientes mecanismos para llevar a cabo la ejecución de la aplicación:


- El geoposicionamiento para desplazarse.
- La pantalla para elegir las diversas opciones presentes en el juego. 
- Sus manos o dedos, o los dedos y manos del asistente en caso de presentar una discapacidad (auditiva, motora, visual, etc.).
- El teclado perteneciente a cada dispositivo, ya sea virtual o físico (dependerá del modelo y/o marca de cada uno).

La aplicación consta de cuatro botones los cuales al ser seleccionados muestran diversos aspectos:

![Fungo icon](https://github.com/andrescr92/Fungo/blob/master/Controles.png?raw=true)

++Chat:++ permite a varios usuarios comunicarse de manera menos estructurada.

++Estrella:++ expone una lista con los posibles retos a escoger.

++Nombre:++ al presionarlo exhibe la información del usuario, por ejemplo:
1. Su nombre completo.
- Número de carné.
- Facultad o escuela a la que pertenece.
- Avatar.
- "Karma" o nivel de pericia

++Nivel:++ despliega los usuarios mejor puntuados hasta ese momento en una especie de "salón de la fama", esto con el fin de dar a conocer los usuarios más colaboradores o hábiles resolviendo retos o creándolos.

## Gameplay


Los retos van a encontrarse posicionados según su recompensa en puntaje, éste será proporcional a la dificultad del mismo. El puntaje se incrementará o decrecerá de acuerdo a:

- El tiempo en que ha estado vigente.
- La calificación de los usuarios con respecto a este.

Como se mencionó en el punto anterior, cada reto se encontrará posicionado según su nivel de dificultad, esto conlleva a que cada reto aumentará o reducirá el puntaje con el que se premiará a cada usuario.