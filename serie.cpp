#include "serie.h"

serie::serie()
{
    num_ep = 1;
    num_temp = 1;
    cal_gral = 1;
    episodios = new episodio[num_ep];
    calificaciones = new int[num_temp];
}

serie::serie(int n,int nt)
{
    num_ep = n;
    episodios = new episodio[num_ep];

    num_temp = nt;
    calificaciones = new int[num_temp];

}
void serie::set_ep(int x,episodio epas){
    episodios[x] = epas;
}
void serie::set_cal(int temp,int cal){
    calificaciones[temp] = cal;
}
void serie::set_cal_gral(int c){
    cal_gral = c;
}
