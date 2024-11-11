#include <stdio.h>
#include <stdlib.h>

void print_choice(char choice[11]) {
	printf("%s. Gute Wahl!\n", choice);
}

int check_money(float cost) {

	printf("Bitte %.2f€ einwerfen: ", cost);

	float value;
	scanf("%f", &value);

	if (value < cost) {
		fprintf(stderr, "Fehler: Nicht genug Geld eingeworfen! Es fehlen noch: %.2f€.\n\n", cost - value);
		exit(EXIT_FAILURE);
	}

	printf("Zahlung erfolgt. Getränk wird ausgegeben.\n\n");
	if (value > cost) printf("Sie erhalten %.2f€ Rückgeld.\n\n", value - cost);
	return EXIT_SUCCESS;
}

int main() {
	char choice;
	float wasser = 0.5, bionade = 1.0, osaft = 2.0;

	printf(
		"\n***** Getränke-Automat *****\n"
		"* w) Wasser          %.2f€ *\n"
		"* B) Bionade         %.2f€ *\n"
		"* O) Orangensaft     %.2f€ *\n"
		"****************************\n",
		wasser, bionade, osaft
	);

	printf("\nIhre Auswahl: ");
	scanf("%c", &choice);
	getchar();

	switch (choice) {
		case 'w': print_choice("Wasser"); check_money(wasser);
		break;
		case 'W': print_choice("Wasser"); check_money(wasser);
		break;
		case 'b': print_choice("Bionade"); check_money(bionade);
		break;
		case 'B': print_choice("Bionade"); check_money(bionade);
		break;
		case 'o': print_choice("Orangensaft"); check_money(osaft);
		break;
		case 'O': print_choice("Orangensaft"); check_money(osaft);
		break;
		default: fprintf(stderr, "Fehler: Falsche Eingabe!\n\n");
			exit(EXIT_FAILURE);
		break;
	}
}
