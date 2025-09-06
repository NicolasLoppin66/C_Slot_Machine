#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Programme principal du jeu de machine à sous
int main() {
    const char *symbols[] = {"🍒", "🍋", "🔔", "💎", "7", "🍀"};
    const int symbol_count = sizeof(symbols) / sizeof(symbols[0]);
    char choice;

    // Initialisation du générateur de nombres aléatoires avec l'heure actuelle
    srand( (unsigned int) time(NULL) );

    // Message d'accueil
    printf("🎰 Welcome to the slot machine ! 🎰\n");

    do
    {
        // Génération de trois indices aléatoires pour les symboles
        int i1 = rand() % symbol_count;
        int i2 = rand() % symbol_count;
        int i3 = rand() % symbol_count;

        // Affichage du résultat du tirage
        printf("\nSpinning...\n\n");
        printf("| %s | %s | %s |\n\n", symbols[i1], symbols[i2], symbols[i3]);
    
        // Vérification des combinaisons gagnantes
        if (i1 == i2 && i2 == i3) 
        {
            // Jackpot : les trois symboles sont identiques
            printf("🎉🎉🎉 Jackpot! You win! 🎉🎉🎉\n");
        } 
        else if (i1 == i2 || i2 == i3 || i1 == i3) 
        {
            // Petit prix : deux symboles identiques
            printf("✨ You win a small prize! ✨\n");
        } 
        else 
        {
            // Aucun gain
            printf("☹️ No match, better luck next time! ☹️\n");
        }

        // Demande à l'utilisateur s'il veut rejouer
        printf("Play again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    
    // Message de fin de jeu
    printf("Thanks for playing! 🎲\n");

    return 0;
}