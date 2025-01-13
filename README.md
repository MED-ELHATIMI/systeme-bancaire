Ce programme est un système de gestion bancaire simple qui permet aux utilisateurs de gérer des comptes bancaires. Il offre plusieurs fonctionnalités, notamment la création de comptes, la gestion des dépôts et des retraits, le transfert d'argent entre comptes, la recherche de comptes, l'affichage de l'historique des transactions, la suppression de comptes et le tri des comptes. Voici une explication détaillée des principales parties du programme :

1. Structures de Données
Compte : Une structure qui représente un compte bancaire, contenant des informations telles que le numéro de compte, le nom, le prénom, l'email, le téléphone, l'adresse, le solde et l'état actif/inactif.
Transaction : Une structure qui représente une transaction, contenant des informations sur le type de transaction (dépôt, retrait, transfert), le montant, la date et le compte de destination.
2. Fonctions Principales
afficherMenu() : Affiche le menu principal du système de gestion bancaire, permettant à l'utilisateur de choisir une action.
creerCompte() : Permet à l'utilisateur de créer un nouveau compte en saisissant les informations nécessaires. Les informations sont ensuite enregistrées dans un fichier CSV.
trouverCompte() : Recherche un compte dans le fichier CSV en fonction du numéro de compte fourni et renvoie un pointeur vers le compte trouvé.
mettreAJourCompte() : Met à jour les informations d'un compte dans le fichier CSV après qu'une opération (dépôt, retrait, transfert) a été effectuée.
effectuerDepot() : Permet à l'utilisateur d'effectuer un dépôt sur un compte existant, en mettant à jour le solde et en enregistrant la transaction.
effectuerRetrait() : Permet à l'utilisateur d'effectuer un retrait d'un compte existant, en vérifiant que le solde est suffisant avant de procéder.
enregistrerTransaction() : Enregistre les détails d'une transaction dans un fichier CSV.
afficherHistoriqueTransactions() : Affiche l'historique des transactions pour un compte donné.
supprimerCompte() : Supprime un compte existant du fichier CSV.
listerComptes() : Affiche la liste de tous les comptes enregistrés dans le fichier CSV.
effectuerTransfert() : Permet à l'utilisateur de transférer de l'argent d'un compte à un autre, en mettant à jour les soldes des deux comptes et en enregistrant la transaction.
rechercherCompte() : Permet à l'utilisateur de rechercher un compte par numéro ou par nom.
trierComptes() : Trie les comptes par nom ou par solde et les affiche.
3. Gestion des Fichiers
Le programme utilise des fichiers CSV pour stocker les informations des comptes et des transactions. Les opérations de lecture et d'écriture sont effectuées à l'aide de fonctions standard de gestion de fichiers en C (fopen, fclose, fprintf, fscanf, etc.).

4. Interaction Utilisateur
Le programme interagit avec l'utilisateur via la console, lui demandant de saisir des informations et de faire des choix à partir du menu. Les entrées de l'utilisateur sont traitées pour effectuer les opérations demandées.
