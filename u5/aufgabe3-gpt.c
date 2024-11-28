#include <stdio.h>
#include <stdlib.h>

int main() {
    int width;

    // Eingabe der unteren Breite des Dreiecks
    printf("Geben Sie die untere Breite des Dreiecks ein (ungerade Zahl): ");
    if (scanf("%d", &width) != 1 || width <= 0 || width % 2 == 0) {
        fprintf(stderr, "Fehler: Bitte eine positive ungerade Zahl eingeben!\n");
        exit(EXIT_FAILURE);
    }

    // Zeichnen des Dreiecks
    for (int row = 1; row <= width; row += 2) {
        int spaces = (width - row) / 2;

        // Leerzeichen für Zentrierung
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

        // Sterne drucken
        for (int star = 0; star < row; star++) {
            printf("*");
        }

        // Neue Zeile
        printf("\n");
    }

    return 0;
}
