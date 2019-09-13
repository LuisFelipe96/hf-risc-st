/*
  HF-RISC Unit Testing framework

  edit these macros to chage the behavior of HF-UNIT.
  See usage examples in the dir software/tests
*/
#include<hf-unit.h>


// =======================
// util functions
// =======================
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}




// =======================
// comparison functions
// =======================

// compare int/char/short vectors. do not use this for vector of float or double. it wont work !
int hfunit_comp_vector(void *v1,void *v2, int size, char* message){
	test_counter++;
	if (memcmp(v1,v2,size)!=0){
		failed_tests++;
		HFUNIT_MSG_FAIL(message)
		return 1;
	}else{
		HFUNIT_MSG_PASS(message)
		return 0;
	}
}

// compare floats
int hfunit_comp_float(float f1,float f2, char *message){
	test_counter++;
	float precision = 0.00001;
/*	float a = f1 -f2 - precision;
	float b = f1 -f2 + precision;
	/*printf("a: ");
	print_float(a);
	printf("\n");
	printf("b: ");
	print_float(b);
	printf("\n");*/
	if (!(((f1 -f2 - precision) < 0.0f) && ((f1 -f2 + precision) > 0.0f)))
	{
		failed_tests++;
		HFUNIT_MSG_FAIL(message)
		return 1;
	}else{
		HFUNIT_MSG_PASS(message)
		return 0;
	}
}


//compare fixed

/*int hfunit_comp_fixed(fixed_t f1, fixed_t f2, char *menssage){
	test_counter++;
	fixed_t precision = fix_val(0.00001);
//	if (!(((f1 - precision) < f2) && ((f1 + precision) > f2)))
	if (!(((f1 -f2 - precision) < fix_val(0.0f)) && ((f1 -f2 + precision) > fix_val(0.0f))))
	{
		failed_tests++;
		HFUNIT_MSG_FAIL(message)
		return 1;
	}else{
		HFUNIT_MSG_PASS(message)
		return 0;
	}



}*/
