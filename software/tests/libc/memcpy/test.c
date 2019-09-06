#include <hf-risc.h>
#include <hf-unit.h>

union ufloat{
	float f;
	unsigned u;

};
// function under test 
float sqrt(float arg);

// list of individual tests
void cos1_test();
void test();

// main test
void hfunit_run_tests(){
	memcpy_test1();
	memcpy_test2();
	memcpy_test3();
	memcpy_test4();
	memcpy_test5();
	memcpy_test6();
	memcpy_test7();
	memcpy_test8();
	memcpy_test9();
	//test();
}

// place here a nice description for each test
void memcpy_test1(){
	char orig[6] = "A";
	char dest[6];
	char expected[6] = "A";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 1");
}
void memcpy_test2(){
	char orig[6] = "CD";
	char dest[6];
	char expected[6] = "CD";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 2");
}

void memcpy_test3(){
	char orig[6] = "ghb";
	char dest[6];
	char expected[6] = "ghb";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 3");

}

void memcpy_test4(){
	char orig[6] = "H";
	char dest[6] = "";
	char expected[6] = "H";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 4");
}

void memcpy_test5(){
	char orig[6] = "";
	char dest[6];
	char expected[6] = "";
	memcpy(dest,orig,sizeof(char)*6);	
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 5");
}

void memcpy_test6(){
	char orig[6] = "\0";
	char dest[6];
	char expected[6] = "";
	memcpy(dest,orig,sizeof(char)*6);	
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 6");
}

void memcpy_test7(){
	char orig[6] = "@";
	char dest[6];
	char expected[6] = "@";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 7");
}

void memcpy_test8(){
	char orig[6] = "IJK";
	char dest[6];
	char expected[6] = "IJK";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 8");
}

void memcpy_test9(){
	char orig[6] = "OPQRSTU";
	char dest[6];
	char expected[7] = "OPQRSTU";
	memcpy(dest,orig,sizeof(char)*6);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "memcpy - Classe 9");
}
// place here a nice description for each test
/*void sqrt4_test(){
	float v = sqrt(4.0);
	float expected = 2.0;
	hfunit_comp_float(v,expected, "sqrt(4.0)");
}*/
