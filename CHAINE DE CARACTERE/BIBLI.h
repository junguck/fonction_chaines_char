#ifndef __BIBLI_H_INCLUDED__
#define __BIBLI_H_INCLUDED__
int longueur(const char *chaine);
void copie(char *dest, const char *chaine);
void concatene(char *dest, const char *source);
int compare(const char *chaine,const char *chaine2);
void inverse(char *chaine);
void to_upper(char *chaine);
void to_lower(char *chaine);
char *cherche_char(const char *phrase, char caractere);
char *cherche_mot(const char *phrase,const char *mot);
void sous_chaine(const char *source ,char *dest ,int debut,int longueur);
void supprime_caractere(char *chaine,char caractere);
int compte_mots(const char *phrase);
#endif