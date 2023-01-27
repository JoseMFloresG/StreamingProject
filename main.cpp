#include <iostream>
#include "serie.h"
#include "videoteca.h"
#include "videos.h"
#include "episodio.h"
using namespace std;

int main()
{
    //Crear videoteca
    videoteca vt1(4);

    //Creacion de peliculas

    //Crear video 1
    videos v1(1,"Buscando a Nemo",120,"Animada");
    //Crear pelicula 1
    pelicula p1(8);
    //Asignar pelicula 1 a video 1
    v1.set_as_pelicula(p1);
    //Asignar video 1 a la videoteca
    vt1.set_video(0,v1);

    //Crear video 1
    videos v2(2,"Los Vengadores",130,"Accion");
    //Crear pelicula 1
    pelicula p2(7);
    //Asignar pelicula 1 a video 1
    v2.set_as_pelicula(p2);
    //Asignar video 1 a la videoteca
    vt1.set_video(1,v2);



    //Creacion de series

    //Crear video 3
    videos v3(3,"Breaking Bad",30,"Drama");

    //Crear serie 1
    serie s1(4,2);

    //Crear capitulos 1-4
    episodio ep1("Piloto",1);
    episodio ep2("Capitulo 2",1);
    episodio ep3("Capitulo 3",2);
    episodio ep4("Final",2);

    //Asignar capitulos 1-4 a la serie 1
    s1.set_ep(0,ep1);
    s1.set_ep(1,ep2);
    s1.set_ep(2,ep3);
    s1.set_ep(3,ep4);

    //Asignar calificaciones a temporadas 1 y 2
    s1.set_cal(0,9);
    s1.set_cal(1,7);

    //Asignar calificacion general a la serie
    s1.set_cal_gral(8);

    //Asignar serie 1 a video 3
    v3.set_as_serie(s1);

    //Asignar video 3 a la videoteca
    vt1.set_video(2,v3);


    //Crear video 4
    videos v4(4,"Stranger Things",45,"Misterio");

    //Crear serie 2
    serie s2(4,2);

    //Crear capitulos 1-4
    episodio ep5("Piloto",1);
    episodio ep6("Demogorgon",1);
    episodio ep7("El inicio",2);
    episodio ep8("Final",2);

    //Asignar capitulos 1-4 a la serie 2
    s2.set_ep(0,ep5);
    s2.set_ep(1,ep6);
    s2.set_ep(2,ep7);
    s2.set_ep(3,ep8);

    //Asignar calificaciones a temporadas 1 y 2
    s2.set_cal(0,9);
    s2.set_cal(1,7);

    //Asignar calificacion general a la serie
    s2.set_cal_gral(8);

    //Asignar serie 2 a video 4
    v4.set_as_serie(s2);

    //Asignar video 4 a la videoteca
    vt1.set_video(3,v4);


    //Mostrar videoteca
    vt1.show();

    //Mostrar video especifico (4)
    v4.show();
    return 0;
}
