#include <hf-risc.h>
#include <hf-unit.h>
#include <fixed.h>
#include <mat_type.h> 
typedef fixed_t typ_var;
// function under test 
fixed_t fix_exp(fixed_t arg);

// list of individual tests

void fix_exp_test();

// main test
void hfunit_run_tests(){
	fix_exp_test();
}

// place here a nice description for each test
void fix_exp_test(){
	fixed_t entrada = fix_val(0.0);
	fix_print(fix_exp(entrada));
	entrada = fix_val(1.0);
	fix_print(fix_exp(entrada));
	entrada = fix_val(2.0);
	fix_print(fix_exp(entrada));
	entrada = fix_val(3.0);
	fix_print(fix_exp(entrada));
	entrada = fix_val(0xFFFFFFFF);
	fix_print(fix_exp(entrada));
	entrada = fix_val(0xE0);
	fix_print(fix_exp(entrada));
	printf("\n");
	fix_print(fix_val(2.718261)+fix_val(0.001));
	fix_print(fix_val(2.718261)-fix_val(0.001));
	if((fix_exp(fix_val(1.0)) <= fix_val(2.718261)+fix_exp(0.001)) && (fix_exp(entrada) >= fix_val(2.718261)-fix_val(0.001))){
		printf("ok");
	}else{
		printf("fail");	

	}
}
