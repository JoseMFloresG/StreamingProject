#ifndef VIDEOS_H
#define VIDEOS_H
#include "iostream"
#include "pelicula.h"
#include "serie.h"

using namespace std;

class videos
{
    public:
        videos();
        int id;
        string nombre;
        double duracion;
        string genero;
        string p_s;

        pelicula pas;
        serie sas;

        videos(int,string,double,string);

        void set_as_pelicula(pelicula);
        void set_as_serie(serie);
        void show();
};

#endif // VIDEOS_H
