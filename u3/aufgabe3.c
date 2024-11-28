#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_choice(char choice[11]) {
	printf("%s. Gute Wahl!\n", choice);
}

int check_money(float cost) {

	float value;
	while(value < cost) {
		printf("Bitte %.2f€ einwerfen: ", cost);

		scanf("%f", &value);
		if (value < cost) {
			fprintf(stderr, "Fehler: Nicht genug Geld eingeworfen! Es fehlen noch: %.2f€.\n\n", cost - value);
		}
	}
	
	printf("Zahlung erfolgt. Getränk wird ausgegeben.\n\n");
	if (value > cost) printf("Sie erhalten %.2f€ Rückgeld.\n\n", value - cost);
	return EXIT_SUCCESS;
}

int main() {
	char choice;
	float wasser = 0.5, bionade = 1.0, osaft = 2.0;
	bool condition = true;

	while (condition) {
		printf(
			"\n***** Getränke-Automat *****\n"
			"* w) Wasser          %.2f€ *\n"
			"* B) Bionade         %.2f€ *\n"
			"* O) Orangensaft     %.2f€ *\n"
			"* X) Exit                  *\n"
			"****************************\n",
			wasser, bionade, osaft
		);

		printf("\nIhre Auswahl: ");
		scanf("%c", &choice);
		getchar();
		
		switch (choice) {
			case 'w': condition = false; print_choice("Wasser"); check_money(wasser);
			break;
			case 'W': condition = false; print_choice("Wasser"); check_money(wasser);
			break;
			case 'b': condition = false; print_choice("Bionade"); check_money(bionade);
			break;
			case 'B': condition = false; print_choice("Bionade"); check_money(bionade);
			break;
			case 'o': condition = false; print_choice("Orangensaft"); check_money(osaft);
			break;
			case 'O': condition = false; print_choice("Orangensaft"); check_money(osaft);
			break;
			case 'x': condition = false; printf("Auf Wiedersehen!\n");
				exit(EXIT_SUCCESS);
			break;
			case 'X': condition = false; printf("Auf Wiedersehen!\n");
				exit(EXIT_SUCCESS);
			break;
		}
	}
}
