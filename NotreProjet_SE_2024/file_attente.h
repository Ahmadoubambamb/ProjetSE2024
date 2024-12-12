#ifndef FILE_ATTENTE_H
#define FILE_ATTENTE_H
#include "processus.h"
struct noeud{
    processus *prc;
    struct liste *suivant;
};

class file_attente{
   private:
    noeud *tete;
    noeud *queue;
    int taille;
public:
    file_attente();
    ~file_attente();
    bool est_vide();
    void emfiler(processus *);
    processus *defiler();
};

#endif // FILE_ATTENTE_H
