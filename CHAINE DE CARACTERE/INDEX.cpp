#include<iostream>
#include"BIBLI.h"
int reponse,a,lon;
int main(){
     char chaine[100];
    //  std::cin.getline(chaine,100);
    //  std::cout<<"la chaine est : "<<chaine<<std::endl; 
    char dest[100];
    char caractere;
     std::cout<<"saisir la chaine a traiter"<<std::endl;
    std::cin.getline(chaine,100);
    while(reponse!=13){
    std::cout<<"que voulez vous faire?"<<std::endl;
    std::cout<<"-------------------------------------------------------------------"<<std::endl;
    std::cout<<"               OPERATION SUR LES CHAINES DES CARACTERES            "<<std::endl;
    std::cout<<"-------------------------------------------------------------------"<<std::endl;
    std::cout<<"|[1] : pour avoir la longueur d'une chaine de caractere           |"<<std::endl;
    std::cout<<"|[2] : pour copier le conrenue d'une chaine de caractere          |"<<std::endl;
    std::cout<<"|[3] : pour concatener deux chaine de caractere                   |"<<std::endl;
    std::cout<<"|[4] : pour comparer deux chaine de caractere                     |"<<std::endl;
    std::cout<<"|[5] : pour rechercher un caractere dans une chaine de caractere  |"<<std::endl;
    std::cout<<"|[6] : pour inverser une chaine de caractere                      |"<<std::endl;
    std::cout<<"|[7] : pour convertir en majuscule                                |"<<std::endl;
    std::cout<<"|[8] : pour coonvertir en minuscule                               |"<<std::endl;
    std::cout<<"|[9] : pour trouver un mot dans une phrase                        |"<<std::endl;
    std::cout<<"|[10] : pour extraire une sous chaine dans une chaine             |"<<std::endl;
    std::cout<<"|[11] : pour suprimer un caractere dans une chaine                |"<<std::endl;
    std::cout<<"|[12] : pour compter le nombre de mots dans une chaine            |"<<std::endl;
    std::cout<<"|[13] : pour sortir du programme                                  |"<<std::endl;
    std::cin>>reponse;
    switch (reponse)
    {
    case 1:{
            std::cout<<"la longueur de la chaine est : "<<longueur(chaine)<<std::endl;
        break;
    }
    case 2:{
            copie(dest,chaine);
            std::cout<<"la chaine copier est : "<<dest<<std::endl;
        break;
    }case 3:{
        std::cout<<"saisir la deuxieme chaine"<<std::endl;
        std::cin>>dest;
        concatene(dest,chaine);
        std::cout<<"la concatenation est : "<<dest<<std::endl;
        break;
    }case 4:{
        std::cout<<"saisir la deuxieme chaine"<<std::endl;
        std::cin>>dest;
        if(compare(chaine,dest)==1){
            std::cout<<"la chaine:"<<dest<<"; est plus grande que la chaine : "<<chaine<<";"<<std::endl;
        }else if(compare(chaine,dest)==-1){
            std::cout<<"la chaine:"<<chaine<<"; est plus grande que la chaine : "<<dest<<";"<<std::endl;
        }else{
            std::cout<<"elle sont egales"<<std::endl;
        }

        break;
    }case 5:{
        std::cout<<"saisir le caractere a recherche"<<std::endl;
        std::cin>>caractere;
        char *res = cherche_char(chaine,caractere);
        std::cout<<"le caractere rechercher est a la "<<(res-chaine)<<" position"<<std::endl;

        break;
    }case 6:{
        inverse(chaine);
        std::cout<<"linverse est :"<<chaine<<std::endl;
        break;
    }case 7:{
        to_upper(chaine);
        std::cout<<"la chaine en majuscule est :"<<chaine<<std::endl;
        break;
    }case 8:{
        to_lower(chaine);
        std::cout<<"la chaine en minuscule est :"<<chaine<<std::endl;
        break;
    }case 9:{
        std::cout<<"saisir le mot a rechercher"<<std::endl;
        std::cin>>dest;
        char *res=cherche_mot(chaine,dest);
        std::cout<<"la position du mot est"<<(res-chaine)<<std::endl;
        break;
    }case 10:{
        std::cout<<"saisir le debut"<<std::endl;
        std::cin>>a;
        std::cout<<"saisir la taille"<<std::endl;
        std::cin>>lon;
        sous_chaine(chaine,dest,a,lon);
        std::cout<<"la sous chaine est : "<<dest<<std::endl;
        break;
    }case 11:{
        std::cout<<"saisir le caractere a suprimer"<<std::endl;
        std::cin>>caractere;
        supprime_caractere(chaine,caractere);
        std::cout<<"la nouvelle chaine est : "<<chaine<<std::endl;
        break;
    }case 12:{
        std::cout<<"cette phrase est compose de : "<<compte_mots(chaine)<<" mots"<<std::endl;
        break;    
    }
    }
    }
    return 0;
}