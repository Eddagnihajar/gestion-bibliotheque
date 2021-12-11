#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 10000 /*declaration */ void Nouveau(); void Consulter(); void Modifier(); void Supprimer(); void NouveauOU(); void ConsulterOU(); void ModifierOU (); void SupprimerOU(); void NouveauP(); void ConsulterP(); void ModifierP(); void SupprimerP(); void PRETEC(); void AFFM();
struct etudiant { int ne ; char nom[20]; char prenom[20]; char Filiere[20]; int tel ;
};
typedef struct etudiant etudiant; etudiant e[200]; int nbretud=0; struct OU { int nm; char tr[50]; int AN; char Au[50]; char Sp[50];
};
typedef struct OU OUVR; OUVR OU[200]; struct PR{ int np;
int dr; int j1,j2,m1,m2,a1,a2,j3,m3,a3; int nn; int Dp;
};
typedef struct PR PRE; PRE P[200];
int i=0;int l=0;
/*tre*/ void AFFM() {/*MENU */
int iTouche; menu:
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n"); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS ");
printf("\n\t\t"); cprintf(" ");
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" "); printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" ");
iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){
/* etudiants */ case 13 : un: system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n");
printf("\n\t\t"); cprintf(" ");
textbackground(GREEN);
textcolor(YELLOW);
printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS "); printf("\n\t\t"); cprintf(" ");
textbackground(9);
textcolor(YELLOW);
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" "); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 80 : goto deux ; break; case 72 : goto cinq ; break; default: goto un ; break; case 13 : clrscr(); system("cls"); system("color f0") ; textbackground(7); textcolor(0);
ETUDIANTS :
cprintf (" GESTION DES ETUDIANTS ") ; window(5,0,5,0); cprintf (" \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ; printf(" \nchoix :"); iTouche = getche(); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){
case 59: system("cls");Nouveau();system("cls");goto ETUDIANTS; getch();clrscr(); break;
case 60 : system("cls");Consulter(); getch();clrscr();break; case 61 : system("cls");Modifier(); getch();clrscr(); break; case 62: system("cls");Supprimer(); getch();clrscr(); break; case 27 : system("cls");system("color 1e");goto menu;break; default : printf("erreur"); getch(); clrscr();
}system("cls");system("color f0"); goto ETUDIANTS;
break ;
}
break;
/*menu OUVRAGES*/ case 59 : deux : system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n");
printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS "); printf("\n\t\t"); cprintf(" ");
textbackground(GREEN); textcolor(YELLOW);
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" "); textbackground(9);
textcolor(YELLOW);
printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" "); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 80 : goto trois ; break; case 72 : goto un ; break; default :goto deux ; case 13 :
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0);
OUVRAGES:
cprintf (" GESTION DES OUVRAGES ") ;
cprintf (" \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ; printf(" \nchoix :");
iTouche = getche(); iTouche = getch(); iTouche=(int)iTouche; switch(iTouche){
case 59: system("cls");NouveauOU();system("cls");goto OUVRAGES; getch();clrscr();break; case 60 : system("cls"); ConsulterOU(); getch();clrscr();break; case 61 : system("cls");ModifierOU(); getch();clrscr(); break; case 62: system("cls"); SupprimerOU();getch();clrscr(); break; case 27 : system("cls"); system("color 1e");goto menu;break; default : printf("erreur"); getch(); clrscr();
}system("cls"); system("color f0"); goto OUVRAGES;
break;}
/*menu PRETS */ case 33 : trois: system("cls");
system("color f0"); textbackground(9); textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n");
printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" ");
textbackground(GREEN);
textcolor(YELLOW);
printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" "); textbackground(9);
textcolor(YELLOW);
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" "); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 72 : goto deux ; break; case 80 : goto quatre ; break; default : goto trois;
case 13 : clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0)
;
PRETS: cprintf (" GESTION DES PRETS ") ; cprintf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ; printf(" \nchoix :"); iTouche = getche(); iTouche = getch(); iTouche=(int)iTouche; switch(iTouche){
case 59: system("cls");NouveauP();system("cls");goto PRETS; getch();clrscr();break; case 60 : system("cls"); ConsulterP(); getch();clrscr();break; case 61 : system("cls");ModifierP(); getch();clrscr(); break; case 62: system("cls"); SupprimerP();getch();clrscr(); break; case 27 : system("cls"); ;goto menu;break; default : printf("erreur"); getch(); clrscr();
}system("cls"); system("color f0"); goto PRETS;
break;}
case 58 : quatre : system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n");
printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" "); textbackground(GREEN);
textcolor(YELLOW); printf("\n\t\t"); cprintf(" GENERATION D'ETATS ");
printf("\n\t\t"); cprintf(" "); textbackground(9);
textcolor(YELLOW); printf("\n\t\t"); cprintf(" QUITTER ");
printf("\n\t\t"); cprintf(" "); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 72 : goto trois ; break; case 80 : goto cinq ; break; default : goto quatre ; case 13 :pret: system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\n"); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" PRETS EN COURS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" ");
iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){
case 13:aun: system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\n"); printf("\n\t\t"); cprintf(" ");
textbackground(GREEN);
textcolor(YELLOW); printf("\n\t\t"); cprintf(" PRETS EN COURS "); printf("\n\t\t"); cprintf(" ");
textbackground(9); textcolor(YELLOW); printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" ");
iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 72 : goto adeux; break; case 80 : goto adeux; break;
case 13 :system("cls");PRETEC();system("cls");goto pret;getch();clrscr();break; default :goto aun; getch();system("cls"); clrscr(); }goto pret;
break; case 58: adeux: system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
printf("\n\n"); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" PRETS EN COURS "); printf("\n\t\t"); cprintf(" ");
textbackground(GREEN); textcolor(YELLOW);
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" ");
iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 72 : goto aun; break; case 80 : goto aun;
case 13 :system("cls");goto menu;getch();clrscr();break; default :goto adeux; getch();system("cls"); clrscr();
}
break;
break;default :printf("\n\n\t\t\t\t\t CLIQUER SUR ENTREE:"); getch();system("cls"); clrscr();goto pret;
}
break;
}
break;
case -123 : cinq : system("cls");
system("color f0"); textbackground(9);
textcolor(YELLOW);
printf("\n\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DE BIBLIOTHEQUE UNIVERSITAIRE "); printf("\n\t\t"); cprintf(" ");
printf("\n\n"); printf("\n\t\t"); cprintf(" "); printf("\n\t\t"); cprintf(" GESTION DES ETUDIANTS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t");cprintf(" GESTION DES OUVRAGES "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GESTION DES PRETS "); printf("\n\t\t"); cprintf(" ");
printf("\n\t\t"); cprintf(" GENERATION D'ETATS "); printf("\n\t\t"); cprintf(" ");
textbackground(GREEN); textcolor(YELLOW);
printf("\n\t\t"); cprintf(" QUITTER "); printf("\n\t\t"); cprintf(" "); textbackground(9); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){
case 72 : goto quatre ; break; case 80 : goto un ; break; default : goto cinq ; case 13 : exit(0); break;}
break;
default :printf("\n\n\t\t\t\t\t CLIQUER SUR ENTREE:"); getch();system("cls"); clrscr();
}goto menu;
}
/*fonction nouveau*/
void Nouveau(){
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES ETUDIANTS ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
textcolor(BLACK);textbackground(LIGHTGRAY);
gotoxy(15,6);printf(" Numero De L'etudiant:..........................................");
gotoxy(15,8);printf(" Nom :.........................................."); gotoxy(15,10);printf(" Prenom :.........................................."); gotoxy(15,12);printf(" Filiere :.........................................."); gotoxy(15,14);printf(" Tel :..........................................");
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,16);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n\n\n\n");
textbackground(7);textcolor(0)
;printf("\t\t\t\t\t\t\t");
cprintf ("\n\n\n\n\n\n\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ; gotoxy(40,6);
scanf("%d",& e[nbretud].ne); gotoxy(40,8);
scanf("%s",& e[nbretud].nom); gotoxy(40,10);
scanf("%s",& e[nbretud].prenom); gotoxy(40,12);
scanf("%s",& e[nbretud].Filiere); gotoxy(40,14);
scanf("%d",& e[nbretud].tel);
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,16);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n\n\n\n");
nbretud++;textbackground(7);textcolor(0)
;printf("\t\t\t\t\t\t\t");
cprintf ("\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ;
}
void Consulter(){ ;
if(nbretud==0){ cprintf (" GESTION DES ETUDIANTS ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,6);
printf("Table vide .... \n");
textbackground(7);textcolor(0)
;
cprintf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ")
;cprintf (" ESC : MENU ") ;
}else{
for(i=0;isystem("color f0") ;textbackground(7);textcolor(0)
;
cprintf (" GESTION DES etudiantS ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,5);
printf("\n\t\t Numero De L'etudiant : %d", e[i].ne); printf("\n\n\t\t Nom: %s", e[i].nom);
printf("\n\n\t\t Prenom De etudiant : %s", e[i].prenom); printf("\n\n\t\t Filiere :%s ", e[i].Filiere); printf("\n\n\t\t Tel:%d ", e[i].tel);
textbackground(LIGHTGREEN); textcolor(WHITE); cprintf("\n\n\n >> ");printf(" "); cprintf(" > ");printf(" "); cprintf(" < ");printf(" "); cprintf(" << "); printf("\t\t\t\t\t\t\t"); textbackground(7);textcolor(0);
cprintf ("\n\n\n\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ;
}}
}
void Modifier(){
int k,ne;
textbackground(7); textcolor(0);
cprintf (" GESTION DES ETUDIANTS ") ;
if(nbretud==0){
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Table vide .... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
else{
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,7);
printf("Saisir le numero d'etudiant que vous voulez modifier : "); scanf("%d",&ne); for(i=0;i if(e[i].ne==ne){ k=i;
}
gotoxy(20,9);
printf("Numero d'etudiant : "); scanf("%d",&e[k].ne); gotoxy(20,11); printf("Nom : "); scanf("%s",&e[k].nom); gotoxy(20,13); printf("Prenom : "); scanf("%s",&e[k].prenom); gotoxy(20,15);
printf("Filiere : "); scanf("%s",&e[k].Filiere); gotoxy(20,17); printf("Tel : "); scanf("%d",&e[k].tel);
cprintf ("\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
}
}
void Supprimer(){
int j,k,ne; int iTouche;
textbackground(7); textcolor(0);
cprintf (" GESTION DES ETUDIANTS ") ;
if(nbretud==0){
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Table vide .... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
else{
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Saisir le numero d'etudiant que vous voulez Supprimer : "); scanf("%d",&ne); gotoxy(20,11); printf("cliquer sur ENTRER pour confirmer la suppression ou ESC pour annuler :");
iTouche = getche(); iTouche = getche(); iTouche=(int)iTouche; switch(iTouche){ case 13: for(i=0;i if(e[i].ne==ne){
k=i;
nbretud=nbretud-1;
for(j=k;j<=nbretud;j++){ e[j]=e[j+1];
}
}
}
break;
default : printf("erreur"); getch(); clrscr();
}
}}
void NouveauOU(){
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES OUVRAGES ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
textcolor(BLACK);textbackground(LIGHTGRAY);
gotoxy(15,6);printf(" Numero :.........................................."); gotoxy(15,8);printf(" Titre :..........................................");
gotoxy(15,10);printf(" Annee d'edition :.........................................."); gotoxy(15,12);printf(" Auteur :.........................................."); gotoxy(15,14);printf(" Specialite :..........................................");
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,16);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n\n\n\n");
textbackground(7);textcolor(0)

;printf("\t\t\t\t\t\t\t");
cprintf ("\n\n\n\n\n\n\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ; gotoxy(40,6);
if (i
scanf("%d",& OU[i].nm); gotoxy(40,8); scanf("%s",& OU[i].tr); gotoxy(40,10); scanf("%d",& OU[i].AN); gotoxy(40,12); scanf("%s",& OU[i].Au); gotoxy(40,14); scanf("%s",& OU[i].Sp); gotoxy(40,16);
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,16);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n\n\n\n");
i++;textbackground(7);textcolor(0)
;printf("\t\t\t\t\t\t\t");
cprintf ("\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ;
}
else{clrscr(); system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES OUVRAGES ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ; gotoxy(20,7);
printf(" VOUS DEVEZ SAISIR LES INFORMATIONS D'ETUDIANT DANS LA GESTION D'ETUDIANT. \n"); } system("pause");
}
void ConsulterOU(){
clrscr(); system("cls");
if(nbretud==0){system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES OUVRAGES ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n printf("\n \300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,7);
printf("Table vide .... \n");
cprintf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ")
;cprintf (" ESC : MENU ") ;
}
else
{
for(i=0;isystem("color f0") ;textbackground(7);textcolor(0)
;
cprintf (" GESTION DES OUVRAGES ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,7);
printf("\n\t\t Numero : %d",OU[i].nm); printf("\n\n\t\t Titre : %s",OU[i].tr); printf("\n\n\t\t Annee d'edition : %d",OU[i].AN); printf("\n\n\t\t Auteur : %s",OU[i].Au); printf("\n\n\t\t Specialite : %s",OU[i].Sp); textbackground(LIGHTGREEN); textcolor(WHITE);
cprintf("\n\n\n >> ");printf(" "); cprintf(" > ");printf(" "); cprintf(" < ");printf(" "); cprintf(" << ");
printf("\t\t\t\t\t");
textbackground(7);textcolor(0); cprintf ("\n\n\n\n\n\n\n\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ;
}
}}
void ModifierOU(){
int k,nm;
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES OUVRAGES ") ; if(nbretud==0){
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Table vide . ... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
else{
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,7);
printf("Saisir le numero que vous voulez modifier : "); scanf("%d",&nm); for(i=0;i if(OU[i].nm==nm){ k=i;
}
gotoxy(20,9); printf("Numero : "); scanf("%d",&OU[k].nm); gotoxy(20,11);
printf("Titre : "); scanf("%s",&OU[k].tr); gotoxy(20,13);
printf("Annee d'edition : "); scanf("%d",&OU[k].AN); gotoxy(20,15);
printf("Auteur :"); scanf("%s",&OU[k].Au); gotoxy(20,17);
printf("Specialite :"); scanf("%s",&OU[k].Sp);
}
cprintf ("\n\n\n\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
}}
void SupprimerOU(){
int j,k,nm;
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES OUVRAGES ") ;
if(nbretud==0){
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3

printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Table vide .... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
else{
printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 cprintf ("\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
gotoxy(20,7);
printf("Saisir le numero que vous voulez Supprimer : "); scanf("%d",&nm); gotoxy(20,11); printf("cliquer sur ENTRER pour confirmer la suppression ou ESC pour annuler :");
for(i=0;i if(OU[i].nm==nm){ k=i;
nbretud=nbretud-1;
for(j=k;j<=nbretud;j++){
OU[j]=OU[j+1];
}
}}
}}
void NouveauP(){
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES PRETS ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
textcolor(BLACK);textbackground(LIGHTGRAY);
gotoxy(18,6);printf(" Numero De Pret :....................");
gotoxy(18,8);printf(" Date Debut De Pret :\304\304\304\304\304\304\/\304\304\304\304\304\304\/\304\304\304\304\304\304\ "); gotoxy(18,10);printf("Debut de Retour :\304\304\304\304\304\304\/\304\304\304\304\304\304\/\304\304\304\304\304\304\ ");
gotoxy(45,12);printf("Duree de Pret : ............ jour(s)");
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,21);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n");
if (l gotoxy(39,6); scanf("%d",& P[l].np); gotoxy(43,8); scanf(" %d",& P[l].j1); gotoxy(48,8); scanf("%d",& P[l].m1); gotoxy(56,8); scanf("%d",& P[l].a1); gotoxy(43,10); scanf(" %d",& P[l].j2); gotoxy(48,10); scanf("%d",& P[l].m2); gotoxy(56,10); scanf("%d",& P[l].a2); gotoxy(67,12); scanf("%d",&P[l].Dp);
textbackground(LIGHTGREEN);textcolor(WHITE); gotoxy(26,21);
printf("\t"); cprintf(" Enregistrer "); printf("\t"); cprintf(" Annuler \n");
l++;textbackground(7);textcolor(0)
;printf("\t\t\t\t\t\t\t");
cprintf ("\nF1 : NOUVEAU F2 :CONSULTER F3 : MODIFIER F4 : SUPPRIMER ESC : MENU ") ;
}
else{clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES PRETS ") ; printf("\n\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 gotoxy(20,7);
printf(" VOUS DEVEZ SAISIR LES INFORMATIONS D'ETUDIANT DANS LA GESTION D'ETUDIANT. \n"); } system("pause");
}
void ConsulterP(){
if(nbretud==0){cprintf (" GESTION DES PRETS ") ; printf("\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,5)
; printf("Table vide .... \n\n\n\n\n\n\n\n\n\n\n\n\n");
cprintf ("\n\n\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ")
;
}else{
for(i=0;i system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES PRETS ") ; printf("\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(20,2);
printf("\n\n\t\t Numero De Pret : %d", P[i].np);
printf("\n\n\t\t Date Debut De Pret : %d/%d/%d", P[i].j1,P[i].m1,P[i].a1); printf("\n\n\t\t Debut de Retour : %d/%d/%d", P[i].j2,P[i].m2,P[i].a2); printf("\t Duree de Pret : %d",P[i].Dp);
textbackground(LIGHTGREEN); textcolor(WHITE);
cprintf("\n\n\n >> ");printf(" "); cprintf(" > ");printf(" ");

cprintf(" < ");printf(" "); cprintf(" << ");
printf("\t\t\t\t\t");
textbackground(7);textcolor(0);
cprintf ("\n\n\n\n\nF1 : NOUVEAU ") ;cprintf (" F2 :CONSULTER ") ;cprintf (" F3 : MODIFIER ") ;cprintf (" F4 : SUPPRIMER ") ;cprintf (" ESC : MENU ") ;
}}
}
void ModifierP(){int k,np;
clrscr(); system("cls");system("color f0") ;textbackground(7);textcolor(0); cprintf (" GESTION DES PRETS ") ;
if(nbretud==0){
printf("\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n
\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3
gotoxy(19,5);
printf("Table vide .... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}else{
printf("\n"); printf("
\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\3 printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263"); printf("\n \263\ \263");
printf("\n \300\304\304\304\304\304\304\304\304\304\304\304\304\304
