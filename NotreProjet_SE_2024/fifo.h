#ifndef FIFO_H
#define FIFO_H
#include "processus.h"

class fifo{
private:
    int nbreP;
    int longueur;
    processus **tabprocess_fifo;
public:
    fifo(int m);
   virtual ~fifo();
    void ajout(processus *);
    void algofifo();
};

#endif // FIFO_H
