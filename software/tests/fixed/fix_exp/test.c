#include <hf-risc.h>
#include <hf-unit.h>
#include <fixed.h>
#include <mat_type.h> 

typedef fixed_t typ_var;
// function under test 
fixed_t fix_exp(fixed_t arg);

// list of individual tests
int hfunit_comp_fixed(fixed_t f1, fixed_t f2, char *menssage);
void fix_exp_test();

// main test
void hfunit_run_tests(){
	//fix_exp_test();
	fix_exp_test0();
	fix_exp_test1();
	fix_exp_test2();
	fix_exp_testA();
	fix_exp_testNEG1();
	fix_exp_testMax();
	fix_exp_testMin();
}

/*int hfunit_comp_fixed(fixed_t f1, fixed_t f2, char *menssage){
	test_counter++;
	fixed_t precision = fix_val(0.1);
//	if (!(((f1 - precision) < f2) && ((f1 + precision) > f2)))
//(fix_exp(fix_val(1.0)) <= fix_val(2.718261)+fix_exp(0.001)) && (fix_exp(entrada) >= fix_val(2.718261)-fix_val(0.001))
	
	fix_print(f1);
	printf(" = ");
	fix_print(f2);
	printf("\n");
	if ((f2-f1 >= fix_val(0.0)-precision) && (f2-f1 <= fix_val(0.0)+precision))
	{
		printf("test %d) \'%s\' passed\n",test_counter, menssage);
		return 0;
	}else{
		
		failed_tests++;
		printf("test %d) \'%s\' failed\n",test_counter, menssage);
		return 1;
	}



}*/
// place here a nice description for each test
/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|Entrada |     qualquer numero real       |  Entrada não é um numero          |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
1001 0110 0000 0110 1000 0110 1001 0011 0000 0000 0000 0000 0010 0110 1001 0111
F    F    F    F    F    F    F    F    F    F    F    F    F    F    F    F
*/
void fix_exp_test(){
	fixed_t entrada = fix_val(0.0);
	fixed_t saida;
	//fix_print(fix_exp(entrada));
	saida=fix_exp(entrada);
	printBits(sizeof(entrada),entrada);
	hfunit_comp_fixed(saida,fix_val(1.0),"FIX_EXP0");
	entrada = fix_val(1.0);
	saida=fix_exp(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(2.718261),"FIX_EXP1");
	entrada = fix_val(2.0);
	saida=fix_exp(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(7.3890561),"FIX_EXP1");
	entrada = fix_val(3.0);
	saida=fix_exp(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(20.085537),"FIX_EXP1");
	entrada = fix_val(0xFFFFFFFFFFFFFFFF);//FFFFFFFFFFFFFFFF
	saida=fix_exp(entrada);
	printBits(sizeof(entrada),entrada);
	printf("\nMIN:");
	fix_print(entrada);
	printf(" ");
	fix_print(fix_exp(entrada));
	entrada = fix_val(0x7FFFFFFFFFFFFFFF);
	saida=fix_exp(entrada);
	printf("\nMAX:");
	fix_print(entrada);
	printBits(sizeof(entrada),entrada);
	printf(" ");
	fix_print(fix_exp(entrada));
	printf("\n");
	//fix_print(fix_val(2.718261)+fix_val(0.001));
	//fix_print(fix_val(2.718261)-fix_val(0.001));
	/*if(fix_val(1.0)<fix_val(2.0)){
		printf(":)\n");
	}*/
	//fix_print(fix_val(2.718261)-fix_exp(fix_val(1.0)));
	/*if((fix_exp(fix_val(1.0)) <= fix_val(2.718261)+fix_exp(0.001)) && (fix_exp(entrada) >= fix_val(2.718261)-fix_val(0.001))){
		printf("ok\n");
	}else{
		printf("fail\n");	

	}/**/
	
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    0   |             1.0                |
|--------|--------------------------------|


*/
void fix_exp_test0(){
	fixed_t entrada = fix_val(0.0);
	fixed_t saida;
	//fix_print(fix_exp(entrada));
	saida=fix_exp(entrada);
	//printBits(sizeof(entrada),entrada);
	hfunit_comp_fixed(saida,fix_val(1.0),"FIX_EXP0");
	
}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    1   |        2.718261                |
|--------|--------------------------------|


*/
void fix_exp_test1(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(1.0);
	saida=fix_exp(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(2.718261),"FIX_EXP1");

}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    2   |        7.3890561               |
|--------|--------------------------------|


*/
void fix_exp_test2(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(2.0);
	saida=fix_exp(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(7.3890561),"FIX_EXP2");

}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    a   |        erro                    |
|--------|--------------------------------|


*/
void fix_exp_testA(){
	fixed_t entrada;
	fixed_t saida;
	entrada = 'a';
	saida=fix_exp(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(0.0),"FIX_EXPA");

}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|   -1   |       0.36787944117            |
|--------|--------------------------------|


*/
void fix_exp_testNEG1(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(-1.0);
	saida=fix_exp(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_exp(entrada));
	hfunit_comp_fixed(saida,fix_val(0.36787944117),"FIX_EXP-1");

}
/*
|Entrada      |         Saida Esperada         | 
|-------------|--------------------------------|
|22.1807097779|      4294967295.9999           |
|-------------|--------------------------------|


*/
void fix_exp_testMax(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(22.1807097779);//9223372036854775807; //fix_val(0x8001);//fix_val(0xFFFFFFFFFFFFFFFF);
	saida=fix_exp(entrada);
	/*printf("\nMAX:");
	fix_print(entrada);
	printf(" ");
	printBits(sizeof(entrada),entrada);
	printf(" ");
	fix_print(fix_exp(entrada));
	printf("\n");*/
	hfunit_comp_fixed(saida,fix_val(4294967295.9999),"FIX_EXPMAX");
}
/*
|Entrada         |         Saida Esperada         | 
|----------------|--------------------------------|
|-4294967295.9999|             0.0                |
|----------------|--------------------------------|


*/
void fix_exp_testMin(){
	fixed_t entrada;
	fixed_t saida;
	entrada =fix_val(-4294967295.9999);// 0x8000000000000001;//fix_val(22.1807097779);//9223372036854775807; //fix_val(0x8001);//fix_val(0xFFFFFFFFFFFFFFFF);
	saida=fix_exp(entrada);
	/*printf("\nMAX:");
	fix_print(entrada);
	printf(" ");
	printBits(sizeof(entrada),entrada);
	printf(" ");
	fix_print(fix_exp(entrada));
	printf("\n");*/
	hfunit_comp_fixed(saida,fix_val(0.0),"FIX_EXPMIN");
}

