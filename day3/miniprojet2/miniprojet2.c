#include <stdio.h>
#include <string.h>
#define max 100
struct Contact
{
  char nome[50];
  char email[50];
  char telefon[50];
};
struct Contact prs[max];
int taille = 0;
void ajoute()
{
  if (taille >= max)
  {
    printf("la boîte de contacts pleine!");
    return;
  }
  printf("___________Ajoute Les Information Suivant___________\n");
  printf("_Le nome(sans espace!) : ");
  //scanf("%s", prs[taille].nome);//
  //fgets(prs[taille].nome,sizeof(prs[taille].nome),stdin);//
  scanf("%s",prs[taille].nome);
  printf("_Le telefon : ");
  scanf("%s", prs[taille].telefon);
  printf("_Email : ");
  //scanf("%s", prs[taille].email);//
    scanf("%s",prs[taille].email);
  taille++;
}
int recherche()
{
  if (taille == 0)
  {
    printf("la boîte de contacts est vide!");
    return -1;
  }
  int i;
  char nom[50];
  printf("Entre le nom : ");
  scanf("%s", nom);
  for (i = 0; i < taille; i++)
  {
    if (strcmp(prs[i].nome, nom) == 0)
    {
      return i;
    }
  }
  return -1;
}
void modifier()
{
  int index = recherche();
  if (index != -1)
  {
    printf("___________Ajoute Les Nouvelle Information ___________\n");
    printf("_Le nom(sans espace) : ");
    scanf("%s", prs[index].nome);
    // gets(prs[index].nome);//
    printf("_Le telefon : ");
    // scanf("%d", &prs[index].telefon);//
    scanf("%s", prs[index].telefon);
    printf("_email : ");
    scanf("%s", prs[index].email);
    return;
  }
  else
  {
    printf("Le nom est intouvable");
  }
}
void suprimme()
{
  int index = recherche();
  int confirme;
  int i;
  printf("1-confirme l'operation\n ");
  printf("Entrez un pour supprimer, sinon pour annuler : ");
  scanf("%d", &confirme);
  if (confirme != 1)
  {
    return;
  }
  for (i = index; i < taille - 1; i++)
  {
    prs[i] = prs[i + 1];
  }
  taille--;
}
void affichetous()
{
  if (taille == 0)
  {
    printf("la boîte de contacts est vide");
    return;
  }
  int i;
  printf("___________Tout Les contactes___________\n");
  for (i = 0; i < taille; i++)
  {
    printf("_Le nome : %s\n", prs[i].nome);
    printf("_Le telefon : %s\n", prs[i].telefon);
    printf("_email : %s\n", prs[i].email);
    printf("\n");
  }
}
int main()
{
  int choix;
  do
  {
    printf("_________CBC Contacts_________\n\n");
    printf("_________Menu_________\n");
    printf("1-Ajoute un contact\n");
    printf("2-Modifier un Contact\n");
    printf("3-Supprimer un Contact\n");
    printf("4-Afficher Tous les Contacts\n");
    printf("5-Rechercher un Contact\n");
    printf("6-Au revoir\n");
    printf("Entre ton choix : ");
    scanf("%d", &choix);
    printf("\n");
    if (choix == 1)
    {
      ajoute();
    }
    else if (choix == 2)
    {
      modifier();
    }
    else if (choix == 3)
    {
      suprimme();
    }
    else if (choix == 4)
    {
      affichetous();
    }
    else if (choix == 5)
    {
      int index = recherche();
      if (index != -1)
      {
        printf("_Le nom : %s\n", prs[index].nome);
        printf("_telefon : %s\n", prs[index].telefon);
        printf("_email : %s\n", prs[index].email);
      }
      else
      {
        printf("_Le contact est introuvable!\n");
      }
    }
    else if (choix == 6)
    {
      printf("Au revoir!\n");
    }
    else
    {
      printf("veuillez saisir un numéro existant!\n");
    }

  } while (choix != 6);
  return 0;
}
