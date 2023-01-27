#include "videos.h"
#include "iostream"
using namespace std;

videos::videos()
{
    id = 0;
    nombre = "nada";
    duracion = 0;
    genero = "ninguno";
    p_s = "N";
    pas = pelicula();
    sas = serie();
}

videos::videos(int i, string n, double dur, string gen)
{
    id = i;
    nombre = n;
    duracion = dur;
    genero = gen;
}
void videos::set_as_pelicula(pelicula p){
    pas = p;
    p_s = "P"; //Peliculas
}

void videos::set_as_serie(serie s){
    sas = s;
    p_s = "S"; //Series
}

void videos::show(){

        //Mostrar datos del video
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Duracion: " << duracion << endl;
        cout << "Genero: " << genero << endl;

        if (p_s == "P" ){
            cout << "Calificacion: " << pas.calificacion << endl << endl;
        }

        if (p_s == "S" ){
            cout << "No. de Temporadas: " << sas.num_temp << endl;
            cout << "No. de Capitulos: " << sas.num_ep << endl << endl;
            cout << "Evaluacion por temporada: " << endl << endl;

            for (int contador = 0; contador < sas.num_temp; contador++){
                cout << "Temporada " << contador + 1 << ": " << sas.calificaciones[contador] << endl;
            }
            cout << endl << "Evaluacion general: " << sas.cal_gral << endl << endl;
        }
    }
