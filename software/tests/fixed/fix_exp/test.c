#include <hf-risc.h>
#include <hf-unit.h>

// function under test 
fixed_t fixed_exp(fixed_t arg);

// list of individual tests

void fixed_exp_test();

// main test
void hfunit_run_tests(){
	fixed_exp_test();
}

// place here a nice description for each test
void fixed_exp_test(){
	fixed_t entrada = 2;
	printf("%d\n", fixed_exp(entrada));

}
