#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définition des constantes
#define MAX_LIGNE 1024
#define FICHIER_COMPTES "comptes.csv"
#define FICHIER_TRANSACTIONS "transactions.csv"

// Structure pour stocker les informations d'un compte
typedef struct {
    char numeroCompte[20];
    char prenom[50];
    char nom[50];
    char email[100];
    char telephone[20];
    char adresse[100];
    double solde;
    int actif;
} Compte;

// Structure pour stocker les informations d'une transaction
typedef struct {
    char numeroCompte[20];
    char type[20];
    double montant;
    char date[20];
    char compteDestination[20];
} Transaction;

// Prototypes des fonctions
void afficherMenu();
void creerCompte();
void listerComptes();
void effectuerDepot();
void effectuerRetrait();
void effectuerTransfert();
void rechercherCompte();
void afficherHistoriqueTransactions();
void enregistrerTransaction(Transaction t);
Compte* trouverCompte(const char* numeroCompte);
void mettreAJourCompte(Compte compte);
void supprimerCompte();
void trierComptes();
void mettreAJourComptetransfert;

