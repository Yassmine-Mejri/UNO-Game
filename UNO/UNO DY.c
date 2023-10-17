#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char B[2][13];
char R[2][13];
char V[2][13];
char J[2][13];
char J1 [2][108];
char J2 [2][108];
char cartealeatoire[2][1];
int joker=4,plus4=4,i=0,nbc1=0,nbc2=0,j=0,k,m,M,f=-1,p=0,l=0 ,parti=1,score1,score2;
char couleur [4]={'B','J','R','V'};
char coul;
char cst [2][1];
char cat [2][1];
char c,r ,P;
char u;
char e=0;
void rempc(char c[2][13]);
void affichage(char J[2][13], char d);
char carteRand();
void affichage2(char c [2][108],int nbc, char d );
int  rech (char c [2][108], int nbc,char cat [2][1] );
void decalage (char c [2][108],int nbc,int k );
int main (){
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("\n");
    printf ("******************************************************   BIENVENU  ************************************************ \n");
    printf("\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("\n");
    printf ("******************************************************   ENTRER   ************************************************* \n");
    printf("\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("\n");
    printf ("***************************************************************************************  YASSMINE MEJRI  ********** \n");
    printf ("***************************************************************************************  DHOUHA BOUHLEL  ********** \n");
    printf("\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
    printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
      while (e != '\r' && e != '\n') {
        e = getchar();
    }



    srand(time(NULL));
    do {
      printf("\n");
      printf("\n");
      printf("\n");
            printf(" -----------------------------------------------  PARTI NUMERO %i-----------------------------------------------------\n ",parti);
    //  affichage tab couleur
    printf ("\n");
   /* printf ("tab du couleur \n ");
    for (i=0;i<=3;i++)
     {
     printf ("%c\t",couleur[i] );
     }
     printf("\n");*/

    // Matrice de chaque couleur
    rempc(B);
   // affichage(B, 'B');
    rempc(R);
   // affichage(R, 'R');
    rempc(J);
   // affichage(J, 'J');
    rempc(V);
   // affichage(V, 'V');
    //Affichage joker et plus4 avant la distribution
    printf("\n");
  //  printf("Joker : %i || +4 : %i\n",joker,plus4);

     //remplissage du joueur 1

     for (i=0;i<6;i++){
      nbc1++;
      carteRand();
      J1[0][i]=cartealeatoire[0][0];
      J1[1][i]=cartealeatoire[1][0];
     }
     affichage2(J1,nbc1, '1');
     //remplissage du joueur 2

     for (i=0;i<6;i++){
       nbc2++;
       carteRand();
       J2[0][i]=cartealeatoire[0][0];
       J2[1][i]=cartealeatoire[1][0];
     }
     affichage2(J2,nbc2, '2');
     // carte sur table
     int m = rand() % 3;
        switch(m) {
            case 0: {
                int n = rand() % 13;
                if (B[1][n] == '2' || B[1][n] == '1') {
                    cst[0][0] = 'B';
                    cst[1][0] = B[0][n];
                    if (B[1][n] == '2') {
                        B[1][n] = '1';
                    } else if (B[1][n] == '1') {
                        B[1][n] = '0';
                    }
                }
            }
            break;
            case 1: {
                int n = rand() % 13;
                if (V[1][n] == '2' || V[1][n] == '1') {
                    cst[0][0] = 'V';
                    cst[1][0] = V[0][n];
                    if (V[1][n] == '2') {
                        V[1][n] = '1';
                    } else if (V[1][n] == '1') {
                        V[1][n] = '0';
                    }
                }
            }
            break;
            case 2: {
                int n = rand() % 13;
                if (R[1][n] == '2' || R[1][n] == '1') {
                    cst[0][0] = 'R';
                    cst[1][0] = R[0][n];
                    if (R[1][n] == '2') {
                        R[1][n] = '1';
                    } else if (R[1][n] == '1') {
                        R[1][n] = '0';
                    }
                }
            }
            break;
            case 3: {
                int n = rand() % 13;
                if (J[1][n] == '2' || J[1][n] == '1') {
                    cst[0][0] = 'J';
                    cst[1][0] = J[0][n];
                    if (J[1][n] == '2') {
                        J[1][n] = '1';
                    } else if (J[1][n] == '1') {
                        J[1][n] = '0';
                    }
                }
            }
            break;
        }
         m=0;
        printf ("la carte sur table est ");
        printf("%s ",cst);
           if(cst[1][0]=='b'||cst[1][0]=='r'){
                  m++;
           }else if (cst [1][0]=='+'){
                  m++;
                 for (j=nbc1;j<=nbc1+2;j++){
                      carteRand();
                     J1[0][j]=cartealeatoire[0][0];
                     J1[1][j]=cartealeatoire[1][0];
                  }
                   nbc1=nbc1+2;
                   affichage2(J1,nbc1,'1');
            }


    // fin du carte sur table
    // jeu
      printf("\n");
      printf ("------------------------------------------------ DEBUT DE JEU ----------------------------------------------------------\n");
      printf("\n");
      do {
                  if ( m % 2 == 0){
                         printf("\n");
                  printf ("------------------------------------------------ C'EST TON TOUR J1 -----------------------------------------------------\n");
                         i=0;
                         while (i<=nbc1 && p==0){
                              if((J1[0][i]==cst[0][0]||J1[1][i]==cst[1][0]||J1[1][i]=='J'|| J1[1][i] =='*')){
                              printf ("tu peut jouer sans piocher \n");
                              p=1;
                             }
                             i++;
                          }
                        i=0;
                        while (i<=nbc1 && l==0){
                             if((J1[0][i]==cst[0][0]||J1[1][i]==cst[1][0]||J1[1][i]=='J')){
                             printf ("tu peut jouer sans +4 \n");
                            l=2;
                            }
                            i++;
                        }
                        do {
                            printf ("saisir votre carte svp ");
                            scanf ("%s",&cat);
                            f = rech (J1,nbc1,cat);
                       }while (f==-1);
                       // si la carte est joker
                       if (cat[0][0]=='-'&& cat[0][1]=='J'){
                       m++;
                       do {
                           printf ("choisir la couleur entre {V,B,R,J}");
                           scanf ("%c",&coul);
                       }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                             cst[0][0]=coul;
                             cst[1][0]=cat[1][0];
                              printf ("--------------------------------------- la carte sur table est: %s------------------------------ \n", cst );
                             decalage (J1,nbc1,f);
                             affichage2(J1, nbc1 ,'1');
                          // si la carte est +2
                          }else if (cat[0][0]==cst[0][0] && cat [1][0]=='+'){
                                    for (j=0;j<2;j++){
                                        nbc2++;
                                        carteRand();
                                        J2[0][nbc2]=cartealeatoire[0][0];
                                        J2[1][nbc2]=cartealeatoire[1][0];
                                        }
                                        affichage2(J2, nbc2 , '2' );
                                        cst[0][0]=cat[0][0];
                                        cst[1][0]=cat[1][0];
                                         printf ("------------------------------------- la carte sur table est: %s--------------------------- \n", cst );
                                        decalage (J1,nbc1,f);
                                        affichage2(J1, nbc1 ,'1');
                            }else if (cat[0][0]==cst[0][0]){
                                    if( cat[1][0]==cst[1][0]){
                                            m++;
                                            decalage (J1,nbc1,f);
                                            affichage2(J1, nbc1 ,'1');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                             printf ("------------------------------------ la carte sur table est: %s------------------------------ \n", cst );
                                    }else if(cat[1][0]=='b'||cat[1][0]=='r'){
                                            decalage (J1,nbc1,f);
                                            affichage2(J1, nbc1,'1');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                            printf ("------------------------------------ la carte sur table est: %s------------------------------ \n", cst );
                                    }else if ( cat[1][0]!=cst[1][0]){
                                            m++;
                                            decalage (J1,nbc1,f);
                                            affichage2(J1, nbc1 ,'1');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                            printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                    }
                              }else if (cat[1][0]==cst[1][0]){
                                      //si la carte block ou reverse
                                      if(cat[1][0]=='b'||cat[1][0]=='r'){
                                      decalage (J1,nbc1,f);
                                      affichage2(J1, nbc1 ,'1');
                                      cst[0][0]=cat[0][0];
                                      cst[1][0]=cat[1][0];
                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                      // si la carte de diff couleur
                                      }else if (cat[0][0]!=cst[0][0]){
                                       m++;
                                       decalage (J1,nbc1,f);
                                       affichage2(J1, nbc1 ,'1');
                                       cst[0][0]=cat[0][0];
                                       cst[1][0]=cat[1][0];
                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                      }
                               }else if ((cat[0][0]=='-'&& cat[1][0]=='*')){
                                     for ( j=0;j<4;j++){
                                         nbc2++;
                                         carteRand();
                                         J2[0][nbc2]=cartealeatoire[0][0];
                                         J2[1][nbc2]=cartealeatoire[1][0];
                                         }
                                         affichage2(J2, nbc2 ,'2');
                                     do {
                                        printf ("choisir la couleur entre={V,B,R,J} :");
                                        scanf ("%c",&coul);
                                    }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                       cst[0][0]=coul;
                                       cst[1][0]=cat[1][0];
                                        printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                       decalage (J1,nbc1,f);
                                       affichage2(J1, nbc1 ,'1');
                                 }else if ((cat[0][0]!=cst[0][0]||cat[1][0]!=cst[1][0]||cat[1][0]=='J'|| cat [1][0] =='*')) {
                                         do {
                                             printf ("Tu peut pas jouer . Pour piocher une carte entre 'P' \n");
                                             scanf("%c",&P);
                                         }while (P!='P');
                                         nbc1++;
                                         carteRand();
                                         J1[0][nbc1]=cartealeatoire[0][0];
                                         J1[1][nbc1]=cartealeatoire[1][0];
                                         affichage2(J1, nbc1 ,'1');
                                        if (J1[0][nbc1]==cst[0][0]||J1[1][nbc1]==cst[1][0]||J1[1][i]=='J'|| J1[1][i] =='*'){
                                            do {
                                                 printf ("tu veut le jouer Oui/Non \n");
                                                 scanf ("%c",&r);
                                            }while (r!='O');
                                            do {
                                                printf ("saisir votre carte svp ");
                                                scanf ("%s",&cat);
                                                f = rech (J1,nbc1,cat);
                                            }while (f==-1);
                                                cst[0][0]=cat[0][0];
                                                cst[1][0]=cat[1][0];
                                                printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                decalage (J1,nbc1,f);
                                                if (cat[0][0]=='-'&& cat[0][1]=='J'){
                                                      m++;
                                                      do {
                                                            printf ("choisir la couleur entre {V,B,R,J}");
                                                            scanf ("%c",&coul);
                                                      }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                                             cst[0][0]=coul;
                                                             cst[1][0]=cat[1][0];
                                                              printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                             decalage (J1,nbc1,f);
                                                             affichage2(J1, nbc1 ,'1');
                                               // si la carte est +2
                                              }else if (cat[0][0]==cst[0][0] && cat [1][0]=='+'){
                                                  printf (" les cartes ajouter \n");
                                                     for (j=0;j<2;j++){
                                                            nbc2++;
                                                        carteRand();
                                                        J2[0][nbc2]=cartealeatoire[0][0];
                                                        J2[1][nbc2]=cartealeatoire[1][0];
                                                      }
                                                      affichage2(J2, nbc2 ,'2');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                      decalage (J1,nbc1,f);
                                                      affichage2(J1, nbc1 ,'1');
                                            }else if (cat[0][0]==cst[0][0]){
                                                  if( cat[1][0]==cst[1][0]){
                                                      m++;
                                                      decalage (J1,nbc1,f);
                                                      affichage2(J1, nbc1 ,'1');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }else if(cat[1][0]=='b'||cat[1][0]=='r'){
                                                      decalage (J1,nbc1,f);
                                                      affichage2(J1, nbc1,'1');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }else if ( cat[1][0]!=cst[1][0]){
                                                       m++;
                                                       decalage (J1,nbc1,f);
                                                       affichage2(J1, nbc1 ,'1');
                                                       cst[0][0]=cat[0][0];
                                                       cst[1][0]=cat[1][0];
                                                      printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                   }
                                            }else if (cat[1][0]==cst[1][0]){
                                                //si la carte block ou reverse
                                                if(cat[1][0]=='b'||cat[1][0]=='r'){
                                                   decalage (J1,nbc1,f);
                                                   affichage2(J1, nbc1 ,'1');
                                                   cst[0][0]=cat[0][0];
                                                   cst[1][0]=cat[1][0];
                                                    printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                   // si la carte de diff couleur
                                                  }else if (cat[0][0]!=cst[0][0]){
                                                     m++;
                                                     decalage (J1,nbc1,f);
                                                     affichage2(J1, nbc1 ,'1');
                                                     cst[0][0]=cat[0][0];
                                                     cst[1][0]=cat[1][0];
                                                      printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }
                                           }else if ((cst[0][0]=='-'&& cst[1][0]=='*') &&(l==0)){
                                                 for ( j=0;j<4;j++){
                                                         nbc2++;
                                                    carteRand();
                                                    J2[0][nbc2]=cartealeatoire[0][0];
                                                    J2[1][nbc2]=cartealeatoire[1][0];
                                                }
                                                affichage2(J2, nbc2 ,'2');
                                               do {
                                                  printf ("choisir la couleur entre={V,B,R,J} :");
                                                  scanf ("%c",&coul);
                                              }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                                   cst[0][0]=coul;
                                                   cst[1][0]=cat[1][0];
                                                    printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                   decalage (J1,nbc1,f);
                                                   affichage2(J1, nbc1 ,'1');
                                               }
                                         }else {
                                         printf ("tu ne peut pas jouer \n");
                                         m++;
                                         }
                                 }
                                        if (nbc1 == 0) {
                                            clock_t x_startTime,x_finishTime;
                                            // debut
                                            x_startTime=clock();
                                            scanf(" %c",&u);
                                            // fin
                                           x_finishTime=clock();
                                           printf("%ld",x_finishTime - x_startTime);
                                          if(x_finishTime - x_startTime > 3000 && u != 'U')  {
                                               for ( j=0;j<2;j++){
                                                    carteRand();
                                                    nbc1++;
                                                    J1[0][nbc1]=cartealeatoire[0][0];
                                                    J1[1][nbc1]=cartealeatoire[1][0];
                                                }
                                           }
                    m++;
                    }
                  }else if (  m %2!=0){
                   printf ("------------------------------------------------ C'EST TON TOUR J2 -----------------------------------------------------\n");
                         i=0;
                         while (i<=nbc2 && p==0){
                              if((J2[0][i]==cst[0][0]||J2[1][i]==cst[1][0]||J2[1][i]=='J'|| J2[1][i] =='*')){
                              printf ("tu peut jouer sans piocher \n");
                              p=1;
                             }
                             i++;
                          }
                        i=0;
                        while (i<=nbc2 && l==0){
                             if((J2[0][i]==cst[0][0]||J2[1][i]==cst[1][0]||J2[1][i]=='J')){
                             printf ("tu peut jouer sans +4 \n");
                            l=2;
                            }
                            i++;
                        }
                        do {
                            printf ("saisir votre carte svp ");
                            scanf ("%s",&cat);
                            f = rech (J2,nbc2,cat);
                       }while (f==-1);
                       // si la carte est joker
                       if (cat[0][0]=='-'&& cat[0][1]=='J'){
                       m++;
                       do {
                           printf ("choisir la couleur entre {V,B,R,J}");
                           scanf ("%c",&coul);
                       }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                             cst[0][0]=coul;
                             cst[1][0]=cat[1][0];
                             printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                             decalage (J2,nbc2,f);
                             affichage2(J2, nbc2 ,'2');
                          // si la carte est +2
                          }else if (cat[0][0]==cst[0][0] && cat [1][0]=='+'){
                                    printf (" les cartes ajouter \n");
                                    for (j=0;j<2;j++){
                                        nbc1++;
                                        carteRand();
                                        J1[0][nbc1]=cartealeatoire[0][0];
                                        J1[1][nbc1]=cartealeatoire[1][0];
                                        }
                                        affichage2(J1, nbc1 ,'1');
                                        cst[0][0]=cat[0][0];
                                        cst[1][0]=cat[1][0];
                                        printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                        decalage (J2,nbc2,f);
                                        affichage2(J2, nbc2 ,'2');
                            }else if (cat[0][0]==cst[0][0]){
                                    if( cat[1][0]==cst[1][0]){
                                            m++;
                                            decalage (J2,nbc2,f);
                                            affichage2(J2, nbc2 ,'2');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                             printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                    }else if(cat[1][0]=='b'||cat[1][0]=='r'){
                                            decalage (J2,nbc2,f);
                                            affichage2(J2, nbc2,'2');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                             printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );;
                                    }else if ( cat[1][0]!=cst[1][0]){
                                            m++;
                                            decalage (J2,nbc2,f);
                                            affichage2(J2, nbc2 ,'2');
                                            cst[0][0]=cat[0][0];
                                            cst[1][0]=cat[1][0];
                                             printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                    }
                              }else if (cat[1][0]==cst[1][0]){
                                      //si la carte block ou reverse
                                      if(cat[1][0]=='b'||cat[1][0]=='r'){
                                      decalage (J2,nbc2,f);
                                      affichage2(J2, nbc2 ,'2');
                                      cst[0][0]=cat[0][0];
                                      cst[1][0]=cat[1][0];
                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                      // si la carte de diff couleur
                                      }else if (cat[0][0]!=cst[0][0]){
                                       m++;
                                       decalage (J2,nbc2,f);
                                       affichage2(J2, nbc2 ,'2');
                                       cst[0][0]=cat[0][0];
                                       cst[1][0]=cat[1][0];
                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                      }
                               }else if ((cat[0][0]=='-'&& cat[1][0]=='*') ){
                                     for ( j=0;j<4;j++){
                                         nbc1++;
                                         carteRand();
                                         J1[0][nbc1]=cartealeatoire[0][0];
                                         J1[1][nbc1]=cartealeatoire[1][0];
                                     }
                                         affichage2(J1, nbc1 ,'1');
                                     do {
                                        printf ("choisir la couleur entre={V,B,R,J} :");
                                        scanf ("%c",&coul);
                                    }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                       cst[0][0]=coul;
                                       cst[1][0]=cat[1][0];
                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                       decalage (J2,nbc2,f);
                                       affichage2(J2, nbc2 ,'2');
                                 }else if  ((cat[0][0]!=cst[0][0]||cat[1][0]!=cst[1][0]||cat[1][0]=='J'|| cat [1][0] =='*')) {
                                         do {
                                             printf ("Tu peut pas jouer piocher une carte entre 'P' \n");
                                             scanf("%c",&P);
                                         }while (P!='P');
                                         nbc1++;
                                         carteRand();
                                         J2[0][nbc2]=cartealeatoire[0][0];
                                         J2[1][nbc2]=cartealeatoire[1][0];
                                         affichage2(J2, nbc2 ,'2');
                                        if (J2[0][nbc1]==cst[0][0]||J2[1][nbc1]==cst[1][0]||J2[1][i]=='J'|| J2[1][i] =='*'){
                                            do {
                                                 printf ("tu veut le jouer Oui/Non \n");
                                                 scanf ("%c",&r);
                                            }while (r!='O');
                                            do {
                                                printf ("saisir votre carte svp ");
                                                scanf ("%s",&cat);
                                                f = rech (J2,nbc2,cat);
                                            }while (f==-1);
                                                cst[0][0]=cat[0][0];
                                                cst[1][0]=cat[1][0];
                                                 printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                decalage (J2,nbc2,f);
                                                if (cat[0][0]=='-'&& cat[0][1]=='J'){
                                                      m++;
                                                      do {
                                                            printf ("choisir la couleur entre {V,B,R,J}");
                                                            scanf ("%c",&coul);
                                                      }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                                             cst[0][0]=coul;
                                                             cst[1][0]=cat[1][0];
                                                              printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                             decalage (J2,nbc2,f);
                                                             affichage2(J2, nbc2 ,'2');
                                               // si la carte est +2
                                              }else if (cat[0][0]==cst[0][0] && cat [1][0]=='+'){
                                                  printf (" les cartes ajouter \n");
                                                     for (j=0;j<2;j++){
                                                        nbc1++;
                                                        carteRand();
                                                        J1[0][nbc1]=cartealeatoire[0][0];
                                                        J1[1][nbc1]=cartealeatoire[1][0];
                                                      }
                                                      affichage2(J1, nbc1 ,'1');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                      decalage (J2,nbc2,f);
                                                      affichage2(J2, nbc2 ,'2');
                                            }else if (cat[0][0]==cst[0][0]){
                                                  if( cat[1][0]==cst[1][0]){
                                                      m++;
                                                      decalage (J2,nbc2,f);
                                                      affichage2(J2, nbc2 ,'2');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }else if(cat[1][0]=='b'||cat[1][0]=='r'){
                                                      decalage (J2,nbc2,f);
                                                      affichage2(J2, nbc2,'2');
                                                      cst[0][0]=cat[0][0];
                                                      cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }else if ( cat[1][0]!=cst[1][0]){
                                                       m++;
                                                       decalage (J2,nbc2,f);
                                                       affichage2(J2, nbc2 ,'2');
                                                       cst[0][0]=cat[0][0];
                                                       cst[1][0]=cat[1][0];
                                                       printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                   }
                                            }else if (cat[1][0]==cst[1][0]){
                                                //si la carte block ou reverse
                                                if(cat[1][0]=='b'||cat[1][0]=='r'){
                                                   decalage (J2,nbc2,f);
                                                   affichage2(J2, nbc2 ,'2');
                                                   cst[0][0]=cat[0][0];
                                                   cst[1][0]=cat[1][0];
                                                   printf ("la carte sur table est:%s \n", cst );
                                                   // si la carte de diff couleur
                                                  }else if (cat[0][0]!=cst[0][0]){
                                                     m++;
                                                     decalage (J2,nbc2,f);
                                                     affichage2(J2, nbc2 ,'2');
                                                     cst[0][0]=cat[0][0];
                                                     cst[1][0]=cat[1][0];
                                                     printf ("-------------------------------la carte sur table est:%s--------------------------- \n", cst );
                                                  }
                                           }else if ((cat[0][0]=='-'&& cat[1][0]=='*')){
                                                 for ( j=0;j<4;j++){
                                                    nbc1++;
                                                    carteRand();
                                                    J1[0][nbc1]=cartealeatoire[0][0];
                                                    J1[1][nbc1]=cartealeatoire[1][0];
                                                }
                                                affichage2(J1, nbc1 ,'1');
                                               do {
                                                  printf ("choisir la couleur entre={V,B,R,J} :");
                                                  scanf ("%c",&coul);
                                              }while ((coul!='V')&&(coul!='B')&&(coul!='R')&&(coul!='J'));
                                                   cst[0][0]=coul;
                                                   cst[1][0]=cat[1][0];
                                                   printf ("------------------------------la carte sur table est:%s ----------------------------\n", cst );
                                                   decalage (J2,nbc2,f);
                                                   affichage2(J2, nbc2 ,'1');
                                               }
                                         }else {
                                         printf ("tu ne peut pas jouer \n");
                                         m++;
                                         }
                                }
                                if (nbc2 == 0) {
                                   clock_t x_startTime,x_finishTime;
                                   x_startTime=clock();  // start clock
                                   scanf(" %c",&u);
                                   x_finishTime=clock();  // finish clock
                                   printf("%ld",x_finishTime - x_startTime);
                                   if(x_finishTime - x_startTime > 3000 && u != 'U')  {
                                         for ( j=0;j<2;j++){
                                                nbc2++;
                                             carteRand();
                                             J2[0][nbc2]=cartealeatoire[0][0];
                                             J2[1][nbc2]=cartealeatoire[1][0];
                                           }

                                  }
                    m++;
                                }
                }


}while (nbc1!=1||nbc2!=1);
      parti++;
    }while (parti>=2);
if(nbc1 == -1 || nbc2 == -1) {
            //score 1 ere joueur
            for ( i = 0; i <=nbc1; i++) {
                if(J1[1][i] == '*' || J1[1][i] == 'J' ) {
                    score1 =score1+ 50;
                } else if(J1[1][i] == 'b' ||J1[1][i] == 'r' || J1[1][i] == '+') {
                    score1 =score1+ 20;
                } else {
                    switch (J1[1][i]) {
                    case '1':
                        score1 = score1 +1 ;
                        break;
                    case '2':
                        score1 = score1 + 2;
                        break;
                    case '3':
                        score1 = score1 + 3;
                        break;
                    case '4':
                        score1 = score1 + 4;
                        break;
                    case '5':
                        score1 = score1 + 5;
                        break;
                    case '6':
                        score1 = score1 + 6;
                        break;
                    case '7':
                        score1 = score1 + 7;
                        break;
                    case '8':
                        score1 = score1 + 8;
                        break;
                    case '9':
                        score1 = score1 + 9;
                        break;
                    }
                }
            }
}
            for ( i = 0; i <=nbc2; i++)
            { // score 2 eme joueur
                if(J2[1][i] == '*' || J2[1][i] == 'J') {
                    score2 = score2 + 50;
                } else if(J2[1][i] == 'b' ||J2[1][i] == 'r' || J2[1][i] == '+')  {
                    score2 = score2 + 20;
                } else {
                    switch (J2[1][i]) {
                     case '1':
                        score2 = score2 +1 ;
                        break;
                    case '2':
                        score2 = score2 + 2;
                        break;
                    case '3':
                        score2 = score2 + 3;
                        break;
                    case '4':
                        score2 = score2 + 4;
                        break;
                    case '5':
                        score2 = score2 + 5;
                        break;
                    case '6':
                        score2 = score2 + 6;
                        break;
                    case '7':
                        score2 = score2 + 7;
                        break;
                    case '8':
                        score2 = score2 + 8;
                        break;
                    case '9':
                        score2 = score2 + 9;
                        break;
                    }
                }
            }
}
//remplissage du chaque couleure
void rempc(char c[2][13]) {
    int i;
    char j;
    for (i = 0; i <= 9; i++) {
        j = i + '0';
        c[0][i] = j;
    }
    c[0][10] = '+';
    c[0][11] = 'b';
    c[0][12] = 'r';
    c[1][0] = '1';
    for (i = 1; i <= 13; i++) {
        c[1][i] = '2';
    }

}
// affichage  du matrice du chaque couleure
void affichage(char c[2][13], char d) {
    int i, j;
    printf("\n");
    printf("\n tab couleur du %c est:\n", d);
    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 12; j++) {
            printf("%4c", c[i][j]);
        }
        printf("\n");
    }
}
// affichage carte jr
void affichage2(char c [2][108],int nbc, char d){
      int i,j;

   printf("\n les cartes du joueur %c sont :\n",d);
   printf("-----------*-----------*-----------*---------------*-------------*--------------*-------------*------------*---------\n");
  for(i=0;i<=1;i++) {
    for(j=0;j<=nbc ;j++) {
        printf("%4c",c[i][j]);
    }
        printf("\n");
   }
printf("-----------*------------*------------*--------------*----------------*--------------*------------*-----------*----------\n");
}
// Retourne une carte
char carteRand() {


   cartealeatoire[0][0]='/0';
   cartealeatoire[1][0]='/0';
   do {
    int x = rand()%108;
    if (x>=0 && x<=3) {
        if (joker > 0) {
            joker--;
            cartealeatoire[0][0]='-';
            cartealeatoire[1][0]='J';

        }
    } else if(x>=4 && x<=7) {
         if (plus4 > 0) {
            plus4--;
            cartealeatoire[0][0]='-';
            cartealeatoire[1][0]='*';

        }
    } else if(x>=8) {
        int m = rand() % 4;
        switch(m) {
            case 0: {
                int n = rand() % 13;
                if (B[1][n] == '2' || B[1][n] == '1') {
                    cartealeatoire[0][0] = 'B';
                    cartealeatoire[1][0] = B[0][n];
                    if (B[1][n] == '2') {
                        B[1][n] = '1';
                    } else if (B[1][n] == '1') {
                        B[1][n] = '0';
                    }
                }
            }
            break;
            case 1: {
                int n = rand() % 13;
                if (V[1][n] == '2' || V[1][n] == '1') {
                    cartealeatoire[0][0] = 'V';
                    cartealeatoire[1][0] = V[0][n];
                    if (V[1][n] == '2') {
                        V[1][n] = '1';
                    } else if (V[1][n] == '1') {
                        V[1][n] = '0';
                    }
                }
            }
            break;
            case 2: {
                int n = rand() % 13;
                if (R[1][n] == '2' || R[1][n] == '1') {
                    cartealeatoire[0][0] = 'R';
                    cartealeatoire[1][0] = R[0][n];
                    if (R[1][n] == '2') {
                        R[1][n] = '1';
                    } else if (R[1][n] == '1') {
                        R[1][n] = '0';
                    }
                }
            }
            break;
            case 3: {
                int n = rand() % 13;
                if (J[1][n] == '2' || J[1][n] == '1') {
                    cartealeatoire[0][0] = 'J';
                    cartealeatoire[1][0] = J[0][n];
                    if (J[1][n] == '2') {
                        J[1][n] = '1';
                    } else if (J[1][n] == '1') {
                        J[1][n] = '0';
                    }
                }
            }
            break;
        }
      }
} while (cartealeatoire[0][0]=='/0' && cartealeatoire[1][0]=='/0');
}
// decalage
void decalage(char Jx [2][108],int nbc,int k ){
int j;
char aux,aux2;
         for (j=k;j<=nbc-1;j++)
         {
         aux=Jx[0][j];
         aux2=Jx[1][j];
         Jx[0][j]=Jx[0][j+1];
         Jx[1][j]=Jx[1][j+1];
         Jx[0][j+1]=aux;
         Jx[1][j+1]=aux2;
         }
          Jx[0][nbc]=NULL;
          Jx[1][nbc]=NULL;
          nbc--;
}
// verification du carte
int rech (char Jx [2][108], int nbc,char cat [2][1] ){
   int k=-1 ;
   int test=0;
   while ((k <=nbc )&&(test==0)){
         k++;
       if (cat[0][0]== Jx[0][k] && cat[1][0]==Jx[1][k]) {
        test=1;
       }
   }
   if (test==0){
    k=-1;
   }
return k;
}

