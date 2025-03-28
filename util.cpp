#include "util.h"
string print_array(int* array, int size) {
	string string_array = to_string(array[0]);
	for (int i = 1; i < size; i++) {
		string_array += " " +  to_string(array[i]);
	}

	return string_array;
}

bool check_equality_of_array(int* array, int* expected, int size) {
	bool result = true;
	for (int i = 0; i < size; i++) {
		if (array[i] != expected[i]) {
			result = false;
			break;
		}
	}

	return result;
}