#ifndef PROCESSUS_H
#define PROCESSUS_H

class processus {
private :
  unsigned int id;
  unsigned int priorite;
  unsigned int temps_execution;
  unsigned int date_arrivee;
   int *tabUcalcul;
  unsigned int nUcalcul;
  unsigned int nES;
   int *tabES;
  unsigned int temps_attentedisk;
  unsigned int temps_attentePrc;
public:
   processus(unsigned int idp);
   virtual ~processus();
   int get_temps_execution();
   int get_priorite();
};

#endif // PROCESSUS_H
