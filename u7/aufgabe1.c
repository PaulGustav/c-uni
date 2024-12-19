#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int check_input(int *input, char type[]) {
	printf("%s: ", type);

	if (scanf("%d", input) != 1) {
		fprintf(stderr, "Fehler: Bitte eine ganze Zahl eingeben.\n");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

int populate_matrix(int rows, int cols, int matrix[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("Reihe %d, Zahl %d: ", i + 1, j + 1);
			if (scanf("%d", &matrix[i][j]) != 1) {
				fprintf(stderr, "Bitte eine ganze Zahl eingeben.\n");
				return EXIT_FAILURE;
			}
		}
	}
	
	return EXIT_SUCCESS;
}

bool check_dimensions(int rows_a, int rows_b, int cols_a, int cols_b) {
	if (cols_a != rows_b) {
		fprintf(stderr, "Fehler: Array-Dimensionen passen nicht zusammen.\n");
		return false;
	}
	return true;
}

int main() {
	// Rows & Columns
	int rows_a, rows_b, columns_a, columns_b;

	// Config Strings
	char rows[] = "Zeilen";
	char columns[] = "Spalten";
	
	printf("--Initialisierung der ersten Matrix--\n");
	check_input(&rows_a, rows);
	check_input(&columns_a, columns);

	printf("\n--Initialisierung der zweiten Matrix--\n");
	check_input(&rows_b, rows);
	check_input(&columns_b, columns);

	if (check_dimensions(rows_a, rows_b, columns_a, columns_b) == false) {
		return EXIT_FAILURE;
	}
	
	printf("\n--Werte der ersten Matrix--\n");
	int matrix_a[rows_a][columns_a];
	populate_matrix(rows_a, columns_a, matrix_a);

	printf("\n--Werte der zweiten Matrix--\n");
	int matrix_b[rows_b][columns_b];
	populate_matrix(rows_b, columns_b, matrix_b);
	
	int result_matrix[rows_a][columns_b];
	for (int a_row = 0; a_row < rows_a; a_row++) {
		for (int b_column = 0; b_column < columns_b; b_column++) {
			result_matrix[a_row][b_column] = 0;
			for (int a_column = 0; a_column < columns_a; a_column++) { // a_colums = 5 = b_rows
				result_matrix[a_row][b_column] += matrix_a[a_row][a_column] * matrix_b[a_column][b_column];
			}
		}
	}

	printf("\n--Ergebnismatrix--\n");
	for (int i = 0; i < rows_a; i++) {
		for (int j = 0; j < columns_b; j++) {
			printf("%d ", result_matrix[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
