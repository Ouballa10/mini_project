// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char titre[100][20];
    char auteur[100][20];
    float prix [100];
    int quantite[100];
    int choix,x;
     int    found;
      int i;
      char nomm[50];
       int    newq;
        char sup[50];
    do{
printf("Gestion de Stock dans une Librairie\n");

        printf("1. Ajouter un Livre au Stock:\n");
        printf("2. Afficher Tous les Livres Disponibles:\n");
        printf("3. Mettre à Jour la Quantité d'un Livre:\n");
        printf("4. Supprimer un Livre du Stock\n");
        printf("5. Afficher le Nombre Total de Livres en Stock:\n");
        printf("6. Afficher le nombre total de livres en stock:\n");
        printf("7. Quitter\n");
        printf("entrez votre choix :");
        scanf("%d", &choix);

        //***************************************************
        switch(choix)
        {
         case 1: printf("\nentrez le titer de livere %d:",x+1);
                   scanf("%s",&titre[x]);
                   printf("\nentrez le auteur de livere :");
                   scanf("%s",&auteur[x]);
                   printf("\nentrez le prix de livere :");
                   scanf("%f",&prix[x]);
                   printf("\nentrez la quantite de livere :");
                   scanf("%d",&quantite[x]);
                   x++;
           break;
         case 2 :

          for(i=0 ; i<x ; i++){
              printf("****************************** \n");
              printf("%s \n", titre[i]);
              printf("%s \n", auteur[i]);
              printf("%.2f \n", prix[i]);
              printf("%d \n", quantite[i]);
          }
          break;
         case 3 :


         found = 0;
         printf("entrer le nom de livre à mis-jour");
         scanf("%s", &nomm);
         for(i = 0; i < x; i ++)
         {
             if(strcmp(nomm, titre[i]) == 0)
             {
                 printf("entrer le stock a ajouté: ");
                 scanf("%d", &quantite[i]);
                 printf("stock à été mis-à-jouré\n");
                 found++;
                 break;
             }
         }
         if(found == 0)
         {
         printf("\nlivre non trouvé\n");
         }
          break;

          case 4 :

          found=0;
          printf("Entrer le titre de livre que vous voulez supprimer:\n");
          scanf("%s", &sup[50]);
          for(i = 0; i < x; i ++)
         {
             if(strcmp(sup, titre[i]) == 0)
             {
                 strcpy(titre[i],titre[x-1]);
                 strcpy(auteur[i],auteur[x-1]);
                 prix[i]=prix[x-1];
                 quantite[i]=quantite[x-1];
                 x--;
                found=1;
                printf("Le livre est supprime\n");
                break;
             }

         }
          if(!found){
              printf("Le titre non trouver\n");
          } break;
        }
    }while(choix!=7);







    return 0;
}
