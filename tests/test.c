//
// Created by user on 27.06.2018.
//

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "calc.h"


START_TEST (test_4_8)
    {
        char s[]={'1',' ','5','.','4',' ','7','+','+'};
        ck_assert_float_eq_tol(main_fun(s),13.4,0.001);
    }
END_TEST


Suite *str_suite(void) {
    Suite *suite = suite_create("Калькулятор");
    TCase *tcase = tcase_create("case");
    tcase_add_test(tcase, test_4_8);
    suite_add_tcase(suite, tcase);
    return suite;
}

int main(int argc, char *argv[]) {
    int number_failed;
    Suite *suite = str_suite();
    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed;
}