#include "CMakeProject1.h"


static inline void pointers_work() {
	int __sample_array_[] = { 1, 2, 3,4, 5 };
	const int _size = sizeof(__sample_array_) / sizeof(__sample_array_[0]);
	int *array_element__point = __sample_array_; 
	for (unsigned int i = 0; i < _size; i++) {
		printf("\t%d\n", *(__sample_array_ +i));
	}
}

static inline void pointers_check() {
	int x = 4;
	int *y = &x;
	printf("Value of x: %d\n", x);
}

int main(int argc, const char *argv[]) {
	pointers_work();
	return 0; 
}
