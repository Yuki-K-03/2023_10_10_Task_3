#include <iostream>
#include <ctime>
using namespace std;


void InputArray(int* array, const int size) {
	for (int i = 0; i < size; i++) {
		array[i] = i;
	}
}

void ShowArrayShuffle(const int* array, const int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

void FisherYates(int* array, const int size) {
	srand((unsigned int)time(NULL));

	int randNum = 0;
	for (int i = 1; i <= size - 1; i++) {
		randNum = rand() % (size - i);
		swap(array[size - i], array[randNum]);
	}
}

void mainShuffle() {
	int* array;
	int size = 0;
	printf("’l‚Ì”\n> ");
	cin >> size;

	array = new int[size];

	InputArray(&array[0], size);

	ShowArrayShuffle(&array[0], size);

	FisherYates(&array[0], size);

	ShowArrayShuffle(&array[0], size);

	if (array != NULL) {
		delete[] array;
		array = NULL;
	}
}