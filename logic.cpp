#include "logic.h"
void buble_sort(int* array, int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size; i++) {
			if (array[i] > array[i + 1]) {
				int t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
			}
		}
	}
}