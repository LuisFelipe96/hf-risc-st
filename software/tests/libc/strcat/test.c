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
	strcat_test1();
	strcat_test2();
	strcat_test3();
	strcat_test4();
	strcat_test5();
	strcat_test6();
	strcat_test7();
	strcat_test8();
	strcat_test9();
	//test();
}

// place here a nice description for each test
/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
| A | B  |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|



*/
void strcat_test1(){
	char orig[20] = "A";
	char dest[20] = "B";
	char expected[20] = "BA";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*20, "strcat - Classe 1");
}

/*



*/
void strcat_test2(){
	char orig[6] = "CD";
	char dest[6] = "EF";
	char expected[6] = "EFCD";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 2");
}

/*



*/
void strcat_test3(){
	char orig[6] = "";
	char dest[6] = "G";
	char expected[6] = "G";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 3");

}

/*



*/
void strcat_test4(){
	char orig[6] = "H";
	char dest[6] = "";
	char expected[6] = "H";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 4");
}

/*



*/
void strcat_test5(){
	char orig[6] = "";
	char dest[6] = "";
	char expected[6] = "";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 5");
}

/*



*/
void strcat_test6(){
	char orig[6] = "\0";
	char dest[6] = "\0";
	char expected[6] = "";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 6");
}

/*



*/
void strcat_test7(){
	char orig[6] = "@";
	char dest[6] = "&";
	char expected[6] = "&@";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 7");
}

/*



*/
void strcat_test8(){
	char orig[6] = "IJK";
	char dest[6] = "LMN";
	char expected[6] = "LMNIJK";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 8");
}

/*



*/
void strcat_test9(){
	char orig[6] = "OPQR";
	char dest[6] = "STU";
	char expected[6] = "STUOPQR";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*7, "strcat - Classe 9");
}
// place here a nice description for each test
/*void sqrt4_test(){
	float v = sqrt(4.0);
	float expected = 2.0;
	hfunit_comp_float(v,expected, "sqrt(4.0)");
}*/
