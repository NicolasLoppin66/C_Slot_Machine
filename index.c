#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  🎰 🎉 ✨ ☹️ 🎲

int main() {
    const char *symbols[] = {"🍒", "🍋", "🔔", "💎", "7", "🍀"};
    const int symbol_count = sizeof(symbols) / sizeof(symbols[0]);

    srand( (unsigned int) time(NULL) );

    printf("🎰 Welcome to the slot machine ! 🎰\n");

    // 0 ... 999, 999 / 6 = 0,1,2,3,4,5
    int i1 = rand() % symbol_count;
    int i2 = rand() % symbol_count;
    int i3 = rand() % symbol_count;

    printf("\nSpinning...\n\n");
    printf("| %s | %s | %s |\n\n", symbols[i1], symbols[i2], symbols[i3]);
 
    if (i1 == i2 && i2 == i3) 
    {
        printf("🎉🎉🎉 Jackpot! You win! 🎉🎉🎉\n");
    } 
    else if (i1 == i2 || i2 == i3 || i1 == i3) 
    {
        printf("✨ You win a small prize! ✨\n");
    } 
    else 
    {
        printf("☹️ No match, better luck next time! ☹️\n");
    }

    return 0;
}