#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sys.c" // Assurez-vous que ce fichier contient les déclarations de vos fonctions

// Fonction pour obtenir le choix de l'utilisateur
int obtenirChoix() {
    int choix;
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;
}

int main() {
    int choix;

    do {
        afficherMenu(); // Affiche le menu
        choix = obtenirChoix(); // Fonction pour obtenir le choix de l'utilisateur

        switch (choix) {
            case 1:
                creerCompte(); // Appeler la fonction pour créer un compte
                break;
            case 2:
                listerComptes(); // Appeler la fonction pour lister les comptes
                break;
            case 3:
                effectuerDepot(); // Appeler la fonction pour effectuer un dépôt
                break;
            case 4:
                effectuerRetrait(); // Appeler la fonction pour effectuer un retrait
                break;
            case 5:
                effectuerTransfert(); // Appeler la fonction pour effectuer un transfert
                break;
            case 6:
                rechercherCompte(); // Appeler la fonction pour rechercher un compte
                break;
            case 7:
                afficherHistoriqueTransactions(); // Appeler la fonction pour afficher l'historique des transactions
                break;
            case 8:
                supprimerCompte(); // Appeler la fonction pour supprimer un compte
                break;
            case 9:
                trierComptes(); // Appeler la fonction pour trier les comptes
                break;
            case 0:
                printf("Au revoir!\n"); // Message de sortie
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n"); // Gestion des choix invalides
                break;
        }
    } while (choix != 0); // Continue jusqu'à ce que l'utilisateur choisisse de quitter

    return 0; // Fin du programme
}
