#include "tests.h"
void print(string string_array, int size, bool result) {
	cout << "Array: " << string_array
		<< ", Size = " << size
		<< "\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int array[5]{ 14, 4, 3, 2, 1};
	string string_array = print_array(array, 5);
	buble_sort(array, 5);

	int expected[]{14, 4, 3, 2, 1};
	print(string_array, 5, check_equality_of_array(array, expected, 5));
}

void test02() {
	int array[5]{ 5, 9, 10, 27, 30};
	string string_array = print_array(array, 5);
	buble_sort(array, 5);

	int expected[]{30, 27, 10, 9, 5};
	print(string_array, 5, check_equality_of_array(array, expected, 5));
}

void test03() {
	int array[5]{ 9, 2, 3, 1, 10};
	string string_array = print_array(array, 5);
	buble_sort(array, 5);

	int expected[]{10, 9, 3, 2, 1};
	print(string_array, 5, check_equality_of_array(array, expected, 5));
}