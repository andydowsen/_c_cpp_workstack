#include "CMakeProject1.h"

static inline void __minimum_element_in_array() {
	int __target_array_[] = { 5, 2, 9, 1, 5, 6 };
	int* min_element_ptr = __target_array_;
	int size_of_arary__ = sizeof(__target_array_) / sizeof(__target_array_[0]);
	for (unsigned int i = 0; i < size_of_arary__; i++) {
		if (*(__target_array_ + i) < *min_element_ptr) {
			*min_element_ptr = *(__target_array_ + i);
		} else { continue; }
	} printf("Min Element: %d\n", *min_element_ptr);
}

static inline void __maximum_element_in_array(int __target_array_[]) {
	int* max_element__ptr__ = __target_array_;
	int size_of__array_ = sizeof(__target_array_) / sizeof(__target_array_[0]);
	for (unsigned int i = 0; i < size_of__array_; i++) {
		if (*(__target_array_ + i) > *max_element__ptr__) {
			*max_element__ptr__ = *(__target_array_ + i);
		} else { continue; }
	} printf("Max Element: %d\n", *max_element__ptr__);
}

static inline void __count_occurence_linear_search(int _numeric_search, int sample_array__[]) {
	int occurence_count__ = 0;
	const int size_of_array__ = sizeof(sample_array__) / sizeof(sample_array__[0]);
	for (unsigned int i = 0; i < size_of_array__; i++) {
		if (*(sample_array__ + i) == _numeric_search) {
			occurence_count__++;
		} else if (occurence_count__ == 0) { occurence_count__ = -0x1; };
	} printf("Occurence Count: %d\n", occurence_count__);
}

static inline void __array_reversal_() {
	int _loop_run_array_value__ = 0; 
	int _reversal_array[] = { 1, 2, 3, 4, 5 };
	int size_of_array__ = sizeof(_reversal_array) / sizeof(_reversal_array[0]);
	for (size_t i = 0; i < size_of_array__/2; i++) {
		_loop_run_array_value__ = *(_reversal_array + i);
		_reversal_array[i] = _reversal_array[size_of_array__ - i -1];
		_reversal_array[size_of_array__ - i - 1] = _loop_run_array_value__;
	} for (unsigned int i = 0; i < size_of_array__; i++){
		printf_s("%d ", _reversal_array[i]);
	}
}

static inline void __palindrome_check(char _target__string[], int _string_length__) {
	for (unsigned int i = 0; i < _string_length__; ++i) {
		if () {

		}
	}
}

static int print_face_work() {
	int _target_array__[] = { 5, 2, 9, 1, 5, 6 };
	int size_of_array__ = sizeof(_target_array__) / sizeof(_target_array__[0]);
	char _target_string__[] = "level";
	int size_of_string__ = sizeof(_target_string__) / sizeof(_target_string__[0]);
	__palindrome_check(_target_string__, size_of_string__);
	return 0; 
}