#include <stdio.h>
#include <string.h>

#define MAX 100   // nombre max de livres

// Définition de la structure Livre
struct Livre {
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};

// Tableau de livres
struct Livre stock[MAX];
int taille = 0;   // nombre de livres dans le stock

// Fonction: Ajouter un livre
void ajouterLivre() {
    if (taille < MAX) {
        printf("\n--- Ajouter un Livre ---\n");
        printf("Titre: ");
        scanf(" %[^\n]", stock[taille].titre);
        printf("Auteur: ");
        scanf(" %[^\n]", stock[taille].auteur);
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

// Fonction: Afficher tous les livres
void afficherLivres() {
    if (taille == 0) {
        printf("\nAucun livre en stock.\n");
        return;
    }
    printf("\n--- Liste des Livres ---\n");
    for (int i = 0; i < taille; i++) {
        printf("%d) %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
               i + 1, stock[i].titre, stock[i].auteur, stock[i].prix, stock[i].quantite);
    }
}

// Fonction: Rechercher un livre par titre
int rechercherLivre(char titre[]) {
    for (int i = 0; i < taille; i++) {
        if (strcmp(stock[i].titre, titre) == 0) {
            return i; // retourne l'index si trouvé
        }
    }
    return -1; // pas trouvé
}

// Fonction: Mettre à jour la quantité
void mettreAJourQuantite() {
    char titre[50];
    printf("\nTitre du livre a modifier: ");
    scanf(" %[^\n]", titre);

    int index = rechercherLivre(titre);
    if (index != -1) {
        printf("Nouvelle quantite: ");
        scanf("%d", &stock[index].quantite);
        printf("Quantite mise a jour avec succes !\n");
    } else {
        printf("Livre introuvable.\n");
    }
}

// Fonction: Supprimer un livre
void supprimerLivre() {
    char titre[50];
    printf("\nTitre du livre a supprimer: ");
    scanf(" %[^\n]", titre);

    int index = rechercherLivre(titre);
    if (index != -1) {
        for (int i = index; i < taille - 1; i++) {
            stock[i] = stock[i + 1]; // décalage
        }
        taille--;
        printf("Livre supprime avec succes !\n");
    } else {
        printf("Livre introuvable.\n");
    }
}

// Fonction: Nombre total de livres
void afficherTotalLivres() {
    int total = 0;
    for (int i = 0; i < taille; i++) {
        total += stock[i].quantite;
    }
    printf("\nNombre total de livres en stock: %d\n", total);
}

// Programme principal
int main() {
    int choix;

    do {
      printf("\t\t\t ____votre bibliothèque____");
        printf("\n===== MENU =====\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("7. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            ajouterLivre();
        } else if (choix == 2) {
            afficherLivres();
        } else if (choix == 3) {
            char titre[50];
            printf("\nTitre a rechercher: ");
            scanf(" %[^\n]", titre);
            int index = rechercherLivre(titre);
            if (index != -1) {
                printf("Trouve: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
                       stock[index].titre, stock[index].auteur,
                       stock[index].prix, stock[index].quantite);
            } else {
                printf("Livre introuvable.\n");
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
