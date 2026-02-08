#include <stdio.h>
#include <stdlib.h>
#include<string.h>


    void tour_echauffement();
    void score();
    void reset();
    void help();
    void start2();
    char interface();
    int espece=0;
     typedef struct joueur
    {
       char nomjoueur[10];
       int score;
    } joueur;

    joueur tab[10];
char interface()
{
    char entree;
    system("color 90");
    printf("---------");
    printf(" Welcome to the game ---------- \n \t Become a millionnaire\n");
    printf("----------------------------------------\n");
    printf("- Press S to start the game\n");
    printf("- Press V to view the highest score\n");
    printf("- Press R to reset score\n");
    printf("- Press H for help\n");
    printf("- Press Q to quit\n");
    printf("----------------------------------------\n");
    scanf("%c",&entree);
    system("cls");
    return entree;
}
void help()
{
    printf("regles du jeu:\n");
    printf("un groupe de 10 participants au maximum joue un seul a la fois pour repondre a quelques qcm et voir enfin le meilleur scor.\n");
}
int edit_score(int espece)
{
    espece=espece+100000;
    printf("votre score est %d\n",espece);
    return espece;

}
/*void score(int nombrejoueurs,int y)
{
    int i,j,x;
    for(i=1;i<=nombrejoueurs;i++)
        {

        for (j=i+1;j<nombrejoueurs;j++)
            {
                if (tab[j].score<tab[i].score)
                {
                    x=tab[j].score;
                    tab[j].score=tab[i].score;
                    tab[i].score=x;

                }
             }
            }
    for(i=0;i<nombrejoueurs;i++)
        printf("%d\t",tab[i].score);


    printf("highest score %d",tab[0].score);*/


//}
void tour_echauffement()
{
    char Q1,Q2,Q3;
    int points=0;
    printf("le tour d'echauffement\n");
    printf("Q1:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q1);
    scanf("%c",&Q1);

    if (Q1=='B' || Q1=='b')
    {
        printf("\033[0;32m");
        printf("correct\n");
        printf("\033[0m");
        points++;
        printf("points= %d\n",points);

    }
    else
    {   printf("\033[0;31m");
        printf("false\n");
        printf("\033[0m");
    }
    printf("Q2:\nWhat is the largest country in Africa by total area?\nA.Algeria\nB.DR Congo\nC.Sudan\nD.Libya\n");
    scanf("%c",&Q2);
        scanf("%c",&Q2);

    if (Q2=='A' || Q2=='a')
    {
        printf("\033[0;32m");
        printf("correct\n");
        printf("\033[0m");
        points++;
        printf("points= %d\n",points);


    }
    else
    {   printf("\033[0;31m");
        printf("false\n");
        printf("\033[0m");
    }
    printf("Q3:\nWhat is the largest country in North America by total area?\nA.Canada\nB.USA\nC.Mexico\nD.Greenland\n");
    scanf("%c",&Q3);
        scanf("%c",&Q3);

    if (Q3=='A' || Q3=='a')
    {
        printf("\033[0;32m");
        printf("correct\n");
        printf("\033[0m");
        points++;
        printf("points= %d\n",points);

    }
    else
    {   printf("\033[0;31m");
        printf("false\n");
        printf("\033[0m");
    }

    if (points>=2)
  {
        printf("\033[0;32m");
        printf("bravo vous avez passer le premier tour\n");
        printf("\033[0m");
        start2();
}
    else
       {
           printf("\033[0;31m");
           printf("malheureusement vous avez perdu\n");
           printf("\033[0m");
       }


}
void start2()
{
    char Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13;
    printf("tour 2:\n");
    printf("Q4:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q4);
    scanf("%c",&Q4);
    if (Q4=='B' || Q4=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");


    printf("Q5:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q5);
    scanf("%c",&Q5);

    if (Q5=='B' || Q5=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);

    }
    else
        printf("false\n");

    printf("Q6:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q6);
    scanf("%c",&Q6);

    if (Q6=='B' || Q6=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q7:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q7);
    scanf("%c",&Q7);

    if (Q7=='B' || Q7=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q8:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q8);
    scanf("%c",&Q8);

    if (Q8=='B' || Q8=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q9:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q9);
    scanf("%c",&Q9);

    if (Q5=='B' || Q5=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q10:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q10);
    scanf("%c",&Q10);

    if (Q10=='B' || Q10=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q11:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q11);
    scanf("%c",&Q11);

    if (Q11=='B' || Q11=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");

    printf("Q12:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q12);
    scanf("%c",&Q12);

    if (Q12=='B' || Q12=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
    }
    else
        printf("false\n");


    printf("Q13:\nWhich country is the largest among these?\nA.China\nB.Russia\nC.Brazil\nD.India\n");
    scanf("%c",&Q13);
    scanf("%c",&Q13);

    if (Q13=='B' || Q13=='b')
    {
        printf("correct\n");
        espece=edit_score(espece);
        printf("%d\n",espece);

    }
    else
        printf("false\n");
    printf("vous avez gagne :%d\n",espece);


}
void reset(int nombrejoueurs)
{
    int i;
    printf("veuiller donner le nombre de joueurs entre 1 et 10");
    scanf("%d",&nombrejoueurs);
    for (i=1;i<=nombrejoueurs;i++)
    {
        tab[i].score=0;
        printf("tab[%d]=%d\n",i,tab[i].score);
    }
}
char firstpage()
{
    char entree2;
    /*int nombrejoueurs,i,j,x,ok;
    typedef struct joueur
    {
       char nomjoueur[10];
       int score;
    } joueur;

    joueur tab[10];*/
    //ok=1;
   // do{
    printf("- Press V to view the highest score\n");
    printf("- Press R to reset score\n");
    printf("- Press H for help\n");
    printf("- Press Q to quit\n");
    scanf("%c",&entree2);
    scanf("%c",&entree2);

   return entree2;
   }

    //system("cls");
   /* switch (entree)
    {
    /*case 'S':
    case 's':
        printf("start the game\n");
        do
         {
          printf("donner le nombre de joueurs:\n");
          scanf("%d",&nombrejoueurs);

         } while (nombrejoueurs<=0 || nombrejoueurs>10);
        for(i=1;i<=nombrejoueurs;i++)
           {
               printf("nom du joueur num %d :\n",i);
               scanf("%s",&tab[i].nomjoueur);
               start();
               tab[i].score=espece;
              // printf("%d", tab[i].score);
              //system("cls");


           }

        break;
    case 'V':
    case 'v':
        printf("view the highest scorre\n");
        score(nombrejoueurs,tab[i].score);
        break;
    case 'R':
    case 'r':
        printf("reset score\n");
       // reset();
        break;
    case 'H':
    case 'h':
        printf("help!\n");
        help();
        break;
    case 'Q':
    case 'q':
        printf("quit\n");
        break;
    default:

        printf("erreur please try again.\n");
        ok=0;

    }*/
   // } while (ok==0);

//}

int main()

{


    char entree,entree2;
    int nombrejoueurs,i,j,x,ok;
    char nom[10];
    /*typedef struct joueur
    {
       char nomjoueur[10];
       int score;
    } joueur;

    joueur tab[10];*/
    ok=1;
    do
{
    entree=interface();
    switch (entree)
    {
    case 'S':
    case 's':
        printf("Start the Game\n");
        do
         {
          printf("donner le nombre de joueurs entre 1 et 10 :\n");
          scanf("%d",&nombrejoueurs);

         } while (nombrejoueurs<=0 || nombrejoueurs>10);
        for(i=1;i<=nombrejoueurs;i++)
           {
               espece=0;
               printf("nom du joueur num %d :\n",i);
               scanf("%s",&tab[i].nomjoueur);
               tour_echauffement();
               tab[i].score=edit_score(espece-100000);
               //printf("scoreekk%d",tab[i].score);
           }
               //int i,j,x;

    for(i=1;i<=nombrejoueurs;i++)
        {

        for (j=i+1;j<=nombrejoueurs;j++)
            {

                if (tab[j].score<tab[i].score)
                {
                    x=tab[j].score;
                    tab[j].score=tab[i].score;
                    tab[i].score=x;
                    //strcpy(nom[10],tab[i].nomjoueur);
                   // printf("%s",tab[i].nomjoueur);


                }
             }
            }
            //printf("x= %d  tab=  %d\n",x,tab[i].score);
            entree2=firstpage();
            switch(entree2)
            {
            case 'v':
            case'V':
                printf("view the highest score\n");

      for(i=1;i<=nombrejoueurs;i++)
      {
          printf("tab[%d]:  %d\t",i,tab[i].score);
          //printf("%s",tab[i].nomjoueur);
      }
      break;
            case 'R':
    case 'r':
        printf("reset score\n");
        reset(nombrejoueurs);
        break;
    case 'H':
    case 'h':
        printf("help!\n");
        help();
        break;
    case 'Q':
    case 'q':
        printf("Quit\n");
        break;
    default:

        printf("erreur please try again.\n");


      }


   // printf("highest score %d ",tab[nombrejoueurs].score);
            //}
            //else printf("else");

              // printf("%d", tab[i].score);
              //system("cls");




        //firstpage();
        break;
    case 'V':
    case 'v':
        printf("No score yet please start the game\n");
        break;
    case 'R':
    case 'r':
        printf("reset score\n");
        reset(nombrejoueurs);
        break;
    case 'H':
    case 'h':
        printf("help!\n");
        help();
        break;
    case 'Q':
    case 'q':
        printf("Quit\n");
        break;
    default:

        printf("erreur please try again.\n");
        ok=0;

    }
    } while (ok==0);

    return 0;
}
