#include "date_util.c"
#define NAME_DATE_COMPARE_TEST_SUIT "date_compare_test_suit"

date *d1;
date *d2;
date *d3;

int date_compare_test_suit_setup() {
	d1 = malloc(sizeof(date));
	d1->day = 10;
	d1->month = 1;
	d1->year = 2013;

	d2 = malloc(sizeof(date));
	d2->day = 10;
	d2->month = 1;
	d2->year = 2014;

	d3 = malloc(sizeof(date));
	d3->day = 10;
	d3->month = 1;
	d3->year = 2014;

	return 0;
}

int date_compare_test_suit_teardown() {
	free(d1);
	free(d2);
	free(d3);
	return 0;
}

void test_date_compare_equal(void) {
	CU_ASSERT(0 == date_compare(d2, d3));
}

void test_date_compare_larger(void) {
	CU_ASSERT(1 == date_compare(d3, d1));
}

void test_date_compare_smaller(void) {
	CU_ASSERT(-1 == date_compare(d1, d2));
}

CU_ErrorCode date_compare_test_suit() {
	CU_pSuite suit = NULL;
	suit = CU_add_suite(NAME_DATE_COMPARE_TEST_SUIT,
			date_compare_test_suit_setup, date_compare_test_suit_teardown);
	if (NULL == suit) {
		return CU_get_error();
	}
	if ((NULL
			== CU_add_test(suit, "date compare equal",
					test_date_compare_equal))
			|| (NULL
					== CU_add_test(suit, "date compare larger",
							test_date_compare_larger))
			|| (NULL
					== CU_add_test(suit, "date compare smaller",
							test_date_compare_smaller))) {
		return CU_get_error();
	}

	return CUE_SUCCESS;
}
