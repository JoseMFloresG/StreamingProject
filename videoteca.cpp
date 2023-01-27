#include "videoteca.h"
#include "iostream"
#include "videos.h"

using namespace std;

videoteca::videoteca()
{
    cantidadVideos = 1;
    coleccion = new videos[cantidadVideos];
}

videoteca::videoteca(int cant){
    cantidadVideos = cant;
    coleccion = new videos[cantidadVideos];
}

void videoteca::show(){

    for (int i = 0; i < cantidadVideos; i++){
        //Mostrar datos de los videos
        cout << "ID: " << coleccion[i].id << endl;
        cout << "Nombre: " << coleccion[i].nombre << endl;
        cout << "Duracion: " << coleccion[i].duracion << endl;
        cout << "Genero: " << coleccion[i].genero << endl;

        if (coleccion[i].p_s == "P" ){
            cout << "Calificacion: " << coleccion[i].pas.calificacion << endl << endl;
        }

        if (coleccion[i].p_s == "S" ){
            cout << "No. de Temporadas: " << coleccion[i].sas.num_temp << endl;
            cout << "No. de Capitulos: " << coleccion[i].sas.num_ep << endl << endl;
            cout << "Evaluacion por temporada: " << endl << endl;

            for (int contador = 0; contador < coleccion[i].sas.num_temp; contador++){
                cout << "Temporada " << contador + 1 << ": " << coleccion[i].sas.calificaciones[contador] << endl;
            }
            cout << endl << "Evaluacion general: " << coleccion[i].sas.cal_gral << endl << endl;
        }
    }
}

void videoteca::set_video(int i, videos vas){
    coleccion[i] = vas;
}
