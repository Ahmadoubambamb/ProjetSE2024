#include "file_attente.h"

file_attente::file_attente(){
    tete = queue = nullptr;
    taille = 0;
}

bool file_attente::est_vide(){
    return (taille == 0);
}

void file_attente::emfiler(processus * p){
    noeud *m = new noeud;
    m->prc = p;
    m->suivant = nullptr;
    if(tete == nullptr)
        tete = queue = m;
    else{
        queue->suivant = m;
        queue = queue->suivant;
    }
    taille++;
}

processus * file_attente::defiler(){
    processus *renvoi;
    if(!est_vide()){
        noeud *tmp = tete;
        tete = tete->suivant;
        renvoi = tmp->prc;
        taille--;
         return renvoi;
    }
  return nullptr;
}
