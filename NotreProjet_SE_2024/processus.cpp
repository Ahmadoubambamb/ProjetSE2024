#include "processus.h"
#include <iostream>

using namespace std;

processus::processu(unsigned int idp){
    id=idp;
    priorite=rand()%3+1;
    dateArrivee=rand()%10;
    //=========generation de temps de unite calcul
    nUcalcul = rand()%3+1;
    tabUcalcul = new int[nUcalcul];
    int som = 0;
     for(int i = 0; i < nUcalcul ;i++)
     { tabUcalcul[i]=rand()%7+1;
       som += tabcalcul[i];
     }
     temps_execution = som;
    //======= generation de temps E/s
     nES = rand()%3;
     if(nES == 0) tabES = nullptr;
     else{
        tabES = new int[nES];
        for(int i = 0; i < nES ;i++)
         tabcalcul[i]=rand()%6+1;
     }
}

processus::~processus(){
    cout<<"appel du destructeur de processus\n";
    if(tabCalcul!=NULL)
        delete tabCalcul;
    if(tabES)
        delete tabES;
}

int processus::get_temps_execution(){
    return temps_execution;
}

int processus::get_priorite(){
    return priorite;
}

