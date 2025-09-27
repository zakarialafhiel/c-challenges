#include <stdio.h>
#include <string.h>

#define MAX 100

struct Livre {
    char titre[50];    
    char auteur[50];   
    float prix;        
    int quantite;      
};

struct Livre stock[MAX];
int taille = 0;

void ajouterLivre() {
    if (taille < MAX) {
        printf("\n--- Ajouter un Livre ---\n");
        printf("Titre: ");
        scanf("%s", stock[taille].titre);
        printf("Auteur: ");
        scanf("%s", stock[taille].auteur);
        printf("Prix: ");
        scanf("%f", &stock[taille].prix);
        printf("Quantite: ");
        scanf("%d", &stock[taille].quantite);

        taille++;
        printf("Livre ajoute avec succes !\n");
    } else {
        printf("Stock plein !\n");
    }
}

void afficherLivres() {
    if (taille == 0) {
        printf("\nAucun livre en stock.\n"); // Condition ajoutée
        return;
    }
    printf("\n--- Liste des Livres ---\n");
    for (int i = 0; i < taille; i++) {
        printf("%d) %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
               i + 1, stock[i].titre, stock[i].auteur, stock[i].prix, stock[i].quantite);
    }
}

int rechercherLivre(char titre[]) {
    if (taille == 0) {
        return -1; // Pas de livres dans le stock
    }
    for (int i = 0; i < taille; i++) {
        if (strcmp(stock[i].titre, titre) == 0) {
            return i;
        }
    }
    return -1;
}

void mettreAJourQuantite() {
    if (taille == 0) {
        printf("\nAucun livre en stock.\n");
        return;
    }
    char titre[50];
    printf("\nTitre du livre: ");
    scanf("%s", titre);

    int index = rechercherLivre(titre);
    if (index != -1) {
        printf("Nouvelle quantite: ");
        scanf("%d", &stock[index].quantite);
        printf("Quantite mise a jour !\n");
    } else {
        printf("Livre introuvable.\n");
    }
}

void supprimerLivre() {
    if (taille == 0) {
        printf("\nAucun livre en stock.\n");
        return;
    }
    char titre[50];
    printf("\nTitre du livre a supprimer: ");
    scanf("%s", titre);

    int index = rechercherLivre(titre);
    if (index != -1) {
        for (int i = index; i < taille - 1; i++) {
            stock[i] = stock[i + 1];
        }
        taille--;
        printf("Livre supprime !\n");
    } else {
        printf("Livre introuvable.\n");
    }
}

void afficherTotalLivres() {
    if (taille == 0) {
        printf("\nAucun livre en stock.\n");
        return;
    }
    int total = 0;
    for (int i = 0; i < taille; i++) {
        total += stock[i].quantite;
    }
    printf("\nNombre total de livres en stock: %d\n", total);
}

int main() {
    int choix;

    do {
         printf("\n===== votre bibliotheque =====\n");
        printf("\n===== MENU =====\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le total de livres\n");
        printf("7. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            ajouterLivre();
        } else if (choix == 2) {
            afficherLivres();
        } else if (choix == 3) {
            if (taille == 0) {
                printf("\nAucun livre en stock.\n");
            } else {
                char titre[50];
                printf("Titre a rechercher: ");
                scanf("%s", titre);
                int index = rechercherLivre(titre);
                if (index != -1) {
                    printf("Trouve: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
                           stock[index].titre, stock[index].auteur,
                           stock[index].prix, stock[index].quantite);
                } else {
                    printf("Livre introuvable.\n");
                }
            }
        } else if (choix == 4) {
            mettreAJourQuantite();
        } else if (choix == 5) {
            supprimerLivre();
        } else if (choix == 6) {
            afficherTotalLivres();
        } else if (choix == 7) {
            printf("Au revoir !\n");
        } else {
            printf("Choix invalide !\n");
        }

    } while (choix != 7);

    return 0;
}
