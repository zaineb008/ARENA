#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TENTATIVES 3

// Affichage des énoncés de chaque défi
void afficher_enonce(int choix) {
    printf("\n=== ENONCE DU DEFI ===\n");
    switch(choix) {
        case 1:
            printf(" =========Défi Le Compte est Bon ==============\n");
            printf("           • Objectif : Trouver une combinaison d'opérations pour atteindre un\n");
            printf("           nombre cible\n");
            printf("           • inputs: 6 entier et un entier cible ");
            printf("           • Sortie : Une séquence d'opérations valide (chaine de caractere ) dans l'ordre d'apparition dans le tableau ");
            printf("           • Exemple : Avec [2, 3, 5, 7, 10, 25] et cible 133 →(((((2+3)+25)*5)-7)-10) = 133\n");
            break;
        case 2:
            printf("=== Défi : Mastermind Algorithmique ===\n");

            printf("            Objectif :\n");
            printf("            Deviner une séquence secrète composée de 4 chiffres (entre 0 et 9).\n");

            printf("            Description du défi :\n");
            printf("            Le programme génère automatiquement une combinaison secrète.\n");
            printf("            L'étudiant propose une combinaison de 4 chiffres.\n");
            printf("            Le système renvoie deux informations :\n");
            printf("            • Le nombre de chiffres bien placés.\n");
            printf("            • Le nombre de chiffres corrects mais mal placés.\n");

            printf("            Votre mission :\n");
            printf("            ✔ Générer la séquence secrète.\n");
            printf("            ✔ Lire la proposition de l'utilisateur.\n");
            printf("            ✔ Comparer les deux séquences.\n");
            printf("            ✔ Calculer “bien placés” et “mal placés”.\n");
            printf("            ✔ Compter le nombre d'essais jusqu'à trouver la bonne combinaison.\n");

            printf("            But final :\n");
            printf("           Trouver la combinaison exacte\n");
            break;
        case 3:
            printf("========Défi Course de Robots===========\n");                           
            printf("            • Objectif : Trouver le chemin le plus court dans un labyrinthe\n");
            printf("            • Entrée : Une grille avec murs, départ et arrivée\n");
            printf("            • Sortie : La séquence de mouvements (N,S,E,O)\n");
            printf("            • Visualisation : Afficher le parcours solution \n");
            break;
        case 4:
            printf("===== Défi : Tri Ultime =====\n");
            printf("            Objectif :\n");
            printf("            Trier un tableau d'entiers selon une règle dynamique basée sur\n");
            printf("            un entier de comparaison.\n");
            printf("             Description :\n");
            printf("            Le tableau doit être trié en fonction de la somme de ses éléments\n");
            printf("            et de l'entier d.\n");
            printf("            Règles de tri :\n");
            printf("            • Si la somme des éléments > d → tri en ordre croissant\n");
            printf("            • Sinon → tri en ordre décroissant\n");
            printf("            Entrée :\n");
            printf("            n : taille du tableau\n");
            printf("            d : entier de comparaison\n");
            printf("            t : le tableau non trié d'entiers\n");
            printf("            Sortie :\n");
            printf("            Le tableau trié selon la règle ci-dessus\n");
            printf("            Le nombre total de comparaisons\n");
            printf("            Le nombre total de permutations\n");
            printf("            But :\n");
            printf("            Écrire un programme qui trie le tableau de manière efficace tout en\n"); 
            printf("            respectant la règle basée sur d et la somme des éléments\n");
            break;
        case 5:
            printf("=== Défi : Jeu Billard ===\n");

            printf("               Objectif :\n");
            printf("                Remplir un stock avec des boules numérotées et afficher le résultat final.\n");
            printf("                Description :\n");
            printf("                - Le joueur fait tomber des boules numérotées (1 à 8 dans des trous pour remplir le stock initialement vide.\n");
            printf("                - Le jeu se termine lorsque toutes les boules ont été insérées dans le stock.\n");
            printf("                - Une fois terminé le programme doit\n");
            printf("                   • Sortir toutes les boules du stock.\n");
            printf("                    • Afficher les numéros des boules dans l'ordre de sortie.\n");

            printf("                Entrées :\n");
            printf("                - Les numéros des boules tombées, un par ligne ou séparés par espace.\n");

            printf("                Sortie :\n");
            printf("               - La file (stock) rempli, affichée avec les numéros dans l'ordre de sortie.\n");break;           
        case 6:
            printf("=== Défi : Historique Dynamique de Messages ===\n");

            printf("                Objectif :\n");
            printf("                Gérer un historique de messages utilisant deux structures de données :\n");
            printf("                • Une liste chaînée pour stocker les messages dans l'ordre.\n");
            printf("                • Une pile (STACK) pour gérer la fonctionnalité UNDO.\n");

            printf("                Types de requêtes possibles :\n");
            printf("               ADD x\n");
            printf("                    Ajoute le message x à la fin de la liste chaînée.\n");
            printf("                    Ajoute également x au sommet de la pile.\n");
            printf("                UNDO\n");
            printf("                    Annule le dernier message ajouté.\n");
            printf("                   Le message est retiré de la pile et supprimé de la liste chaînée.\n");
            printf("                PRINT\n");
            printf("                    Affiche l'ensemble des messages encore présents dans la liste chaînée,\n");
            printf("                    dans leur ordre d'arrivée.\n");
            printf("                Votre mission :\n");
            printf("                ✔ Implémenter une liste chaînée pour l'historique.\n");
            printf("                ✔ Implémenter une pile pour les opérations UNDO.\n");
            printf("                ✔ Exécuter les requêtes ADD, UNDO et PRINT.\n");
            printf("                ✔ Assurer que UNDO supprime toujours le dernier message ajouté.\n");break;
        case 7:
            printf("=== Défi : Arbre Binaire de Recherche (BST) ===\n");

            printf("                Objectif :\n");
            printf("                Construire un arbre binaire de recherche (BST) à partir d'une série de nombres\n");
            printf("                et afficher certaines informations importantes sur cet arbre.\n");
            printf("                Description du défi :\n");
            printf("               L'utilisateur saisit une suite de nombres.\n");
            printf("                Le programme construit un BST selon les règles suivantes :\n");
            printf("                • Les valeurs plus petites vont dans le sous-arbre gauche.\n");
            printf("                • Les valeurs plus grandes dans le sous-arbre droit.\n");
            printf("               Travail demandé :\n");
            printf("                ✔ Construire le BST à partir des valeurs saisies.\n");
            printf("                ✔ Afficher le parcours In-Order (ce qui donne les valeurs triées).\n");
            printf("                ✔ Calculer le nombre total de nœuds.\n");
            printf("                ✔ Trouver la valeur minimum.\n");
            printf("                ✔ Trouver la valeur maximum.\n");
            printf("                But final :\n");
            printf("                Comprendre et manipuler les arbres binaires de recherche.\n");break;
        default:
            printf("Défi inconnu.\n");break;                    
    }
    printf("====================\n");
}

//-------------------------------------------------------
// Fonction : vider le buffer d'entrée proprement
//-------------------------------------------------------
void vider_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}



//-------------------------------------------------------
// PROGRAMME PRINCIPAL
//-------------------------------------------------------
int main() {
    char username[64];

    printf("=== ARENA DES DEFIS ALGO ===\n");
    printf("Entrez votre nom : ");
    scanf("%63s", username);
    vider_buffer();

    int choix = 0;

    while (1) {

        //*******************************
        //      MENU PRINCIPAL
        //*******************************
        printf("\nChoisissez un défi :\n");
        printf("1) Le Compte est Bon\n");
        printf("2) Mastermind\n");
        printf("3) Course de Robots\n");
        printf("4) Tri Ultime\n");
        printf("5) Jeu Billard\n");
        printf("6) Historique Messages\n");
        printf("7) Arbre BST\n");
        printf("8) Quitter\n");
        printf("Votre choix : ");

        if (scanf("%d", &choix) != 1) {
            printf("Entrée invalide.\n");
            vider_buffer();
            continue;
        }
        vider_buffer();

        if (choix == 8) {
            printf("\nMerci %s ! Au revoir.\n", username);
            break;
        }

        if (choix < 1 || choix > 8) {
            printf("Choix non valide.\n");
            continue;
        }

        afficher_enonce(choix);

        //*******************************
        //   NOM DES FICHIERS
        //*******************************
        char f_user[128], f_input[128], f_correct[128], f_judge[128];

        printf("Nom du fichier utilisateur (user.c) : ");
        scanf("%127s", f_user);
        vider_buffer();

        printf("Fichier d'entrée (ex: input.txt) : ");
        scanf("%127s", f_input);
        vider_buffer();

        printf("Fichier des sorties attendues (correct.txt) : ");
        scanf("%127s", f_correct);
        vider_buffer();

        // Choix du juge
        switch(choix) {
            case 1: strcpy(f_judge, "judge_compteestbon.exe"); break;
            case 2: strcpy(f_judge, "judge_mastermind.exe"); break;
            case 3: strcpy(f_judge, "judge_robots.exe"); break;
            case 4: strcpy(f_judge, "judge_tri.exe"); break;
            case 5: strcpy(f_judge, "judge_billard.exe"); break;
            case 6: strcpy(f_judge, "judge_historique.exe"); break;
            case 7: strcpy(f_judge, "judge_bst.exe"); break;
        }

        //*******************************
        //   BOUCLE DE TENTATIVES
        //*******************************
        int tentatives = 0;

        while (tentatives < MAX_TENTATIVES) {
            tentatives++;
            printf("\n===== TENTATIVE %d/%d =====\n", tentatives, MAX_TENTATIVES);

            // 1) Compilation
            char cmd_compile[256];
            sprintf(cmd_compile, "gcc %s -o user_exec.exe", f_user);

            printf("Compilation...\n");
            if (system(cmd_compile) != 0) {
                printf("❌ Erreur de compilation.\n");
                goto retry_question;
            }
            printf("Compilation OK ✔️\n");

            // 2) Exécution du juge
            char cmd_judge[512];
            sprintf(cmd_judge, "%s user_exec.exe %s %s", f_judge, f_input, f_correct);

            printf("Vérification par le juge...\n");
            int verdict = system(cmd_judge);

            if (verdict == 0) {
                printf("🎉 Accepted !!\n");
                break;
            } else {
                printf("❌ Wrong Answer.\n");
            }

        retry_question:
            printf("Voulez-vous réessayer ? (1=oui / 0=non) : ");
            int rep;
            if (scanf("%d", &rep) != 1) { vider_buffer(); break; }
            vider_buffer();

            if (rep == 0) break;
        }
    }

    return 0;
}