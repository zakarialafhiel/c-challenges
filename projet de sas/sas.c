#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max 5

struct Info
{
    int id;
    char nom[50];
    char prenom[50];
    char email[200];
    float solde;
    char historique[100];
};
struct Info prs;
int taille = 0;

struct Produit
{
    int idproduit;
    char nom[50];
    char categorie[50];
    float prix;
    int stock;
    char description[100];
};
struct Produit pr[Max];
int stats = 0;

void Profile()
{
    int choix;
    printf("________gestion votre compte________\n");
    printf("1. Creer un compte\n");
    printf("2. Modifier votre compte\n");
    printf("3. Consultation du profil\n");
    printf("4. retourner au menu principal\n");
    printf("Enter votre choix : ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        if (taille == 1)
        {
            printf("vous avez déjà un compte!\n");
            return;
        }
        printf("_________Entre informations suivants_________\n");
        printf("-Entre le prenom : ");
        scanf("%s", prs.prenom);
        printf("-Entre le nom : ");
        scanf("%s", prs.nom);
        snprintf(prs.email, sizeof(prs.email), "%s.%s@email.com", prs.prenom, prs.nom);

        prs.id = rand();
        prs.solde = 0.0f;
        taille++;
        printf("Votre operation a eu succes!\n");
        printf("Votre solde : 0.00 MAD\n");
        break;
    case 2:
        if (taille == 0)
        {
            printf("vous devez créer un compte!\n");
            return;
        }
        printf("_________Entre votre nouvelle informations_________\n");
        printf("-Entre le prenom : ");
        scanf("%s", prs.prenom);
        printf("-Entre le nom : ");
        scanf("%s", prs.nom);
        snprintf(prs.email, sizeof(prs.email), "%s.%s@email.com", prs.prenom, prs.nom);
        break;
    case 3:
        if (taille == 0)
        {
            printf("vous devez créer un compte!\n");
            return;
        }
        printf("_________Votre profil _________\n");
        printf("Le prenom :  %s\n", prs.prenom);
        printf("Le nom :  %s\n", prs.nom);
        printf("Le email:  %s\n", prs.email);
        printf("Le Id :  %d\n", prs.id);
        printf("Le solde :  %.2f\n", prs.solde);
        break;
    case 4:
        return;
    default:
        printf("veuillez saisir une option existante!\n");
    }
}

void Solde()
{
    int choix;
    float add;
    printf("1. pour regarder votre solde\n");
    printf("2. pour ajouter de l'argent\n");
    printf("3. retourner au menu principal\n");
    printf("entre votre choix : ");
    scanf("%d", &choix);
    if (taille == 0)
    {
        printf("vous devez créer un compte!\n");
        return;
    }
    switch (choix)
    {
    case 1:
        printf("Le solde : %.2f\n", prs.solde);
        return;
    case 2:
        printf("combien d'argent voulez-vous ajouter : ");
        scanf("%f", &add);
        prs.solde += add;
        printf("Nouveau solde : %.2f\n", prs.solde);
        return;
    case 3:
        return;
    default:
        printf("veuillez saisir une option existante!\n");
    }
}

void Stats()
{
    printf("______Votre statistiques______\n");
    printf("combien de produits vous avez achetés :  %d\n", stats);

    printf("\n");
}

void Toutsproduits()
{
    pr[0].idproduit = 1;
    strcpy(pr[0].nom, "portable");
    strcpy(pr[0].categorie, "Electronique");
    pr[0].prix = 799.00f;
    pr[0].stock = 5;
    strcpy(pr[0].description, "PC portable performant pour bureautique et jeux");

    pr[1].idproduit = 2;
    strcpy(pr[1].nom, "smartphone");
    strcpy(pr[1].categorie, "Electronique");
    pr[1].prix = 499.00f;
    pr[1].stock = 10;
    strcpy(pr[1].description, "Telephone Android avec double SIM");

    pr[2].idproduit = 3;
    strcpy(pr[2].nom, "casque");
    strcpy(pr[2].categorie, "Accessoires");
    pr[2].prix = 89.00f;
    pr[2].stock = 15;
    strcpy(pr[2].description, "Casque audio confortable avec micro");

    pr[3].idproduit = 4;
    strcpy(pr[3].nom, "souris");
    strcpy(pr[3].categorie, "Accessoires");
    pr[3].prix = 25.00f;
    pr[3].stock = 20;
    strcpy(pr[3].description, "Souris optique USB");

    pr[4].idproduit = 5;
    strcpy(pr[4].nom, "clavier");
    strcpy(pr[4].categorie, "Accessoires");
    pr[4].prix = 45.00f;
    pr[4].stock = 12;
    strcpy(pr[4].description, "Clavier AZERTY ergonomique");
}

int Recherchenom()
{
    char nom[30];
    int i;
    printf("Entre le nom de produit : ");
    scanf("%29s", nom);
    for (i = 0; i < Max; i++)
    {
        if (strcmp(nom, pr[i].nom) == 0)
        {
            return i;
        }
    }
    return -1;
}

int Recherchecat()
{
    char cat[30];
    int i;
    printf("Entre la categorie de produit : ");
    scanf("%s", cat);
    for (i = 0; i < Max; i++)
    {
        if (strcmp(cat, pr[i].categorie) == 0)
        {
            return i;
        }
    }
    return -1;
}

void Recherche()
{
    int choix;
    printf("1. recherche par le nom\n");
    printf("2. recherche par la categorie\n");
    printf("3. exit\n");
    printf("Entre votre choix : ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
    {
        int i = Recherchenom();
        if (i == -1)
        {
            printf("le produit n'existe pas\n");
        }
        else
        {
            printf("Le nom : %s Le prix : %.2f La quantite : %d\n", pr[i].nom, pr[i].prix, pr[i].stock);
        }
        break;
    }
    case 2:
    {
        int index = Recherchecat();
        if (index == -1)
        {
            printf("le produit n'existe pas\n");
        }
        else
        {
            printf("Le nom : %s Le prix : %.2f La quantite : %d\n", pr[index].nom, pr[index].prix, pr[index].stock);
        }
        break;
    }
    case 3:
        printf("Retour\n");
        return;
    default:
        printf("Choix invalide\n");
    }
}

void classprix()
{
    int i;
    int echange;
    int cup;
    int tab[Max] = {0, 1, 2, 3, 4};

    if (Max <= 1) {
        printf("Le marche est vide!\n");
        return;
    }

    do {
        echange = 0;
        for (i = 0; i < Max - 1; i++) {
            if (pr[tab[i]].prix > pr[tab[i + 1]].prix) {
                cup = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = cup;
                echange = 1;
            }
        }
    } while (echange == 1);

    printf("Classement par prix effectue.\n\n");
    for (i = 0; i < Max; i++) {
        printf("Le nom : %s\n Le prix : %.2f\n La quantite : %d\n La description : %s\n\n",
               pr[tab[i]].nom, pr[tab[i]].prix, pr[tab[i]].stock, pr[tab[i]].description);
    }
}

void classalpha()
{
    int i, j;
    int tab[Max] = {0, 1, 2, 3, 4};
    int echange;

    if (Max <= 1) {
        printf("Le marche est vide!\n");
        return;
    }

    do {
        echange = 0;
        for (i = 0; i < Max - 1; i++) {
            if (strcmp(pr[tab[i]].nom, pr[tab[i + 1]].nom) > 0) {
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                echange = 1;
            }
        }
    } while (echange == 1);

    printf("Classement alphabetique effectue:\n\n");
    for (i = 0; i < Max; i++) {
        printf("Le nom : %s\n Le prix : %.2f\n La quantite : %d\n La description : %s\n\n",
               pr[tab[i]].nom, pr[tab[i]].prix, pr[tab[i]].stock, pr[tab[i]].description);
    }
}

void Produits()
{
    int choix;
    int i;
    printf("1. liste produits\n");
    printf("2. recherche produits\n");
    printf("3. classement des produits\n");
    printf("4. retourner au menu principal\n");
    printf("Entre votre choix : ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("_______La liste produits_______\n");
        for (i = 0; i < 4; i++)
        {
            printf("Le nom : %s\n Le prix : %.2f\n La quantite : %d\n La description : %s\n\n",
                   pr[i].nom, pr[i].prix, pr[i].stock, pr[i].description);
        }
        break;
    case 2:
        Recherche();
        break;
    case 3:
    {
        int c;
        printf("1. classement par le prix\n2. classement par l'alphabet\n3. annuler\nVotre choix : ");
        scanf("%d", &c);
        if (c == 1)
            classprix();
        else if (c == 2)
            classalpha();
        else
            printf("Annule\n");
        break;
    }
    case 4:
        return;
    default:
        printf("Choix invalide!\n");
    }
}

void Acheter()
{
    int buy;
    int choix;
    if (taille == 0)
    {
        printf("vous devez créer un compte!\n");
        return;
    }
    printf("_________|Bienvenue sur votre marketplace\n|_________\n");
    printf("___les catalogues disponible___\n");
    printf("1. Electronique\n");
    printf("2. Accessoires\n");
    printf("3. retourner au menu principal\n");
    printf("entrez la categorie (1-3) : ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("-Les produits de cette catalogue : \n");
        printf("1) %s - %.2f - %d qte\n", pr[0].nom, pr[0].prix, pr[0].stock);
        printf("2) %s - %.2f - %d qte\n", pr[1].nom, pr[1].prix, pr[1].stock);
        printf("sélectionnez ce que vous voulez acheter (1-2) : ");
        scanf("%d", &buy);
        if (buy < 1 || buy > 2)
        {
            printf("veuillez saisir un numéro existant!\n");
            return;
        }
        if (pr[buy - 1].stock <= 0)
        {
            printf("Ce produit est en rupture de stock!\n");
            return;
        }
        if (prs.solde < pr[buy - 1].prix)
        {
            printf("tu n'as pas assez d'argent pour cette operation!\n");
            return;
        }
        {
            int conf1;
            printf("1. pour confirmer cette operation\nautre nombre pour annuler\nVotre choix : ");
            scanf("%d", &conf1);
            if (conf1 != 1)
            {
                printf("votre opération est annulée!\n");
                return;
            }
        }
        prs.solde -= pr[buy - 1].prix;
        pr[buy - 1].stock--;
        stats++;
        printf("votre opération avec succes!\n");
        
        break;
    case 2:
        printf("-Les produits de cette catalogue : \n");
        printf("1) %s - %.2f - %d qte\n", pr[2].nom, pr[2].prix, pr[2].stock);
        printf("2) %s - %.2f - %d qte\n", pr[3].nom, pr[3].prix, pr[3].stock);
        printf("3) %s - %.2f - %d qte\n", pr[4].nom, pr[4].prix, pr[4].stock);
        printf("sélectionnez ce que vous voulez acheter (1-3) : ");
        scanf("%d", &buy);
        if (buy < 1 || buy > 3)
        {
            printf("veuillez saisir un numéro existant!\n");
            return;
        }
        if (pr[buy + 1].stock <= 0)
        {
            printf("Ce produit est en rupture de stock!\n");
            return;
        }
        if (prs.solde < pr[buy + 1].prix)
        {
            printf("tu n'as pas assez d'argent pour cette operation!\n");
            return;
        }
        {
            int conf;
            printf("1. pour confirmer cette operation\nautre nombre pour annuler\nVotre choix : ");
            scanf("%d", &conf);
            if (conf != 1)
            {
                printf("votre opération est annulée!\n");
                return;
            }
        }
        prs.solde -= pr[buy + 1].prix;
        pr[buy + 1].stock--;
        printf("votre opération avec succes!\n");
        stats++;
        break;
    case 3:
        return;
    default:
        printf("veuillez saisir un numéro existant!\n");
    }
}

int main()
{
    int choix = 0;
    Toutsproduits();
    do
    {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. gestion du Profil \n");
        printf("2. gestion du Solde Virtuel\n");
        printf("3. les produits\n");
        printf("4. acheter un produit\n");
        printf("5. votre statistiques \n");
        printf("6. exit \n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            Profile();
            break;
        case 2:
            Solde();
            break;
        case 3:
            Produits();
            break;
        case 4:
            Acheter();
            break;
        case 5:
            Stats();
            break;
        case 6:
            printf("Au revoir!\n");
            break;
        default:
            printf("Choix invalide!\n");
        }
    } while (choix != 6);
    return 0;
}
