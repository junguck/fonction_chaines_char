#include "BIBLI.h"
int longueur(const char *chaine){
int longueur = 0;
 while (chaine[longueur] != '\0') { 
    longueur++; 
    } 
    return longueur;
}

void copie(char *dest, const char *chaine){
int i=0;
if(chaine != nullptr){
while(chaine[i] != '\0'){
    dest[i] = chaine[i];
    i++;
}
dest[i]='\0';
}
}

void concatene(char *dest, const char *source){
int sou=longueur(source);
int des=longueur(dest);
int i=0,j=des;
for(i=0;i<=sou;i++){
dest[j]=source[i];
j++;
}
}

int compare(const char *chaine,const char *chaine2){
int ch1=longueur(chaine);
int ch2=longueur(chaine2);
if(ch1<ch2){
    return 1;
}
else if(ch1>ch2){
    return -1;
}else{
    return 0;
}
}
//
void inverse(char *chaine){
int lon=longueur(chaine);
for (int i = 0; i < lon / 2; i++) {
    char tmp = chaine[i];
    chaine[i] = chaine[lon - 1 - i];
    chaine[lon - 1 - i] = tmp; 
      }
}

char *cherche_char(const char *chaine,char caractere){
   while (*chaine != '\0') {
     if (*chaine == caractere) { 
        return const_cast<char*>(chaine); 
 }
      chaine++; 
   }
       return nullptr;
}
void to_lower(char *chaine){
int i = 0;
 while (chaine[i] != '\0') {
     if (chaine[i] >= 'A' && chaine[i] <= 'Z') { 
        chaine[i] = chaine[i] + ('a' - 'A');
         } i++; 
         }
}
void to_upper(char *chaine){
int i = 0;
 while (chaine[i] != '\0') { 
    if (chaine[i] >= 'a' && chaine[i] <= 'z') {
         chaine[i] = chaine[i] - ('a' - 'A');
          } i++;
           }
            }
// char *cherche_mot(const char *phrase,const char *mot){
// int a=0,b,c,d=0,j=0,i=0,f,g=0;
// int lon = longueur(phrase);
// int lonm = longueur(mot);
// if(phrase[0] =='\0'){
// return nullptr;
// }else{
// for(b=0;b<lon;b++){
//     if(phrase[b]==' '){
//         j=b-1;
//         for(f=i;f<=j;f++){
//             c=0;
//             if(phrase[f]==mot[c]){
//                 d=d+1;
//             }
//             c++;
//         }
//         if(d=lonm){
//             return const_cast<char*>(&phrase[i]);
//         }
//         i=b+1;
//     }
// }
// }
// return nullptr;
// }
char *cherche_mot(const char *phrase, const char *mot) {
     int lon = longueur(phrase);
      int lonm = longueur(mot);
       if (lonm == 0) { 
        return nullptr;
         // Si le mot est vide, retourne nullptr
         } for (int i = 0; i <= lon - lonm; i++) { 
            int j;
             for (j = 0; j < lonm; j++) {
                 if (phrase[i + j] != mot[j]) {
                     break; }
                      } if (j == lonm) {
                         return const_cast<char*>(&phrase[i]);
                          // Trouvé le mot, retourner le pointeur vers le début 
                          } } 
                          return nullptr;
                           // Mot non trouvé 
                           }

void sous_chaine(const char *source ,char *dest ,int debut,int longueur){
int i;
 for (i = 0; i < longueur && source[debut + i] != '\0'; i++) {
     dest[i] = source[debut + i];
      } 
      dest[i] = '\0';
}
 void supprime_caractere(char *chaine,char caractere){
    char tmp[100];
    int i,j=0;
    int lon = longueur(chaine);
    for(i=0;i<lon;i++){
        if(chaine[i]==caractere){
        }else{
            tmp[j]=chaine[i];
            j++;
        }
    }
    for(i=0;i<=longueur(tmp);i++){
        chaine[i]=tmp[i];
    }

 }
// int compte_mots(const char *phrase){
// int i,j,cmt=0;
// for(i=0;i<longueur(phrase);i++){
//     if(*phrase=' '){
//         cmt++;
//         i++;
//         while(phrase[i]=' '){
//             i++;
//         }
//         i--;
//     }
// }
// return cmt;
// }
int compte_mots(const char *phrase) {
     int count = 0;
      bool inWord = false;
       while (*phrase != '\0') {
         if (*phrase == ' ') {
             inWord = false; 
             } else { 
                if (!inWord) {
                     count++; 
                     inWord = true; 
                     } 
                     }
             phrase++; 
                     } return count;
 }