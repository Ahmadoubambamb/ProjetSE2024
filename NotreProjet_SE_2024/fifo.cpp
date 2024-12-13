#include "fifo.h"
#include "file_attente.h"
/*
fifo:: fifo(int n){
nbreP = n;
longueur = 0;
tabprocess_fifo = new processus*[n];
}
*/
void fifo::ajout(processus *p){
    if(longueur < nbreP)
    tabprocess_fifo[longueur++] = p;
}

bool fifo::tab_est_a_zero(int * tab,int n){
    for(int i = 0;i< n ;i++)
        if(tab[i] != 0)
            return false;
     return true;
}

void fifo::algofifo(){
    int i=0,j=0,k=0,somme;
    int nombre_process=longueur;
    file_attente fprocess(),fdisk();
    while(nombre_process>0){
        if(tabprocess_fifo[i]->tabUcalcul)
            somme=tabprocess_fifo[i]->tabUcalcul[j];

        for(i+1;i<longueur;i++)
            fpross->emfiler(tabprocess_fifo[i]);
        if(!tabprocess_fifo[i]->tabES)
            i++;
        else{
            fdisk->emfiler(tabprocess_fifo[i]);
            somme=tabprocess_fifo[i]->tabES[k];
        }
    //s'il y'a au moins un processus qui a terminer
    nombre_process--;
  }
}


