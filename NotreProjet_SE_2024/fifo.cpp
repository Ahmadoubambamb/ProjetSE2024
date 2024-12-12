#include "fifo.h"
#include "file_attente.h"


fifo::fifo(int m){
    nbreP = m;
    longueur = 0;
    tabprocess_fifo = new processus*[nbre];
}

fifo::ajout(processus *p){
    if(longueur < nbreP)
    tabprocess_fifo[longueur++] = p;
}

void fifo::algofifo(){
    file_attente filpr() , fildisk();
    while(longueur > 0){
      for(int i = 0; i <nbreP;i++)
      {if(tabprocess_fifo[i]->tabUcalcul[])

      }
      if()

}
