#include "episodio.h"
#include "iostream"
using namespace std;

episodio::episodio()
{
    titulo = "nada";
    temporada = 0;
}

episodio::episodio(string t, int temp)
{
    titulo = t;
    temporada = temp;
}
