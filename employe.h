#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Employe
{
public:
    Employe();
    Employe(int,QString,QString,QString,int,int,QString);
    //getters
    int getId();
    int getSalaire();
    int getNumTel();
    QString getNom();
    QString getPrenom();
    QString getRole();
    QString getEmail();

    //Setters
    void setId(int);
    void setSalaire(int);
    void setNumTel(int);
    void setNom(QString);
    void setPrenom(QString);
    void setEmail(QString);
    void setRole(QString);

    bool ajouterEmployes();
    QSqlQueryModel * afficherEmployes();
    bool supprimerEmployes(int);
    bool modifierEmployes ();


    QSqlQueryModel * AfficherTrieCIN();
    QSqlQueryModel * AfficherTrieNom();

    QSqlQueryModel * rechercherCIN(QString);
    QSqlQueryModel * rechercherNom(QString);

private:
    int id,salaire,num_tel;
    QString nom,prenom,email,role;

};

#endif // EMPLOYE_H
