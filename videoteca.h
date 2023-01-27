#ifndef VIDEOTECA_H
#define VIDEOTECA_H
#include "iostream"
#include "videos.h"

using namespace std;

class videoteca
{
    public:
        videoteca();
        int cantidadVideos;
        videos *coleccion;
        videoteca(int);
        void show();
        void set_video(int,videos);
};

#endif // VIDEOTECA_H
