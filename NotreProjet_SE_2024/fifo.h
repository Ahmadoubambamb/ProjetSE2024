#ifndef FIFO_H
#define FIFO_H
#include <iostream>
#include "processus.h"
class fifo{
private:
    int nbreP;
    int longueur;
    processus **tabprocess_fifo;
public:
    fifo(int m){
        nbreP = m;
        longueur = 0;
        tabprocess_fifo = new processus*[nbreP];
    }
   virtual ~fifo();
    void ajout(processus *);
    bool tab_est_a_zero(int *,int);
    void algofifo();
};

#endif // FIFO_H
