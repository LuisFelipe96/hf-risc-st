#include <hf-risc.h>
#include <hf-unit.h>

const float pi = 3.1415926535897932384626433;
const int digits = 26;

// function under test 
float cos(float arg);

// list of individual tests
void cos_infinity_test_1();
void cos_infinity_test_2();
void cos_zero_test_1();
void cos_zero_test_2();
void cos_zero_test_3();
void cos_1_degree_test();
void cos_90_degrees_test();
void cos_89_degrees_test();
void cos_180_degrees_test();
void cos_300_degrees_test();
void cos_Neg90_degrees_test();
void cos_720_degrees_test();


// main test
void hfunit_run_tests(){
	cos_infinity_test_1();
	cos_infinity_test_2();
	cos_zero_test_1();
	cos_zero_test_2();
	cos_zero_test_3();	
	cos_1_degree_test();
	cos_90_degrees_test();
	cos_89_degrees_test();
	cos_180_degrees_test();
	cos_300_degrees_test();
	cos_Neg90_degrees_test();
	cos_720_degrees_test();
}

/*	
==== CLASSES DE EQUIVALÊNCIA ====
|   Entrada	  | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|-------------|--------------------------------|-----------------------------------|
|	ângulo 	  |        números reais           |                                   |
|(em radianos)|     -infinito;+infinito        |                                   |
|-------------|--------------------------------|-----------------------------------|
*/
/*	
==== VALORES LIMITES ====
Ângulo:	-infinito; +infinito; 0; valor muito pequeno (quase zero)
*/

/*
Entrada: -infinito (0x7F800000) => valor limite
Resultado esperado: 0
*/
void cos_infinity_test_1(){
	float radians = 0x7F800000f;
	float expected = 0.0;
	float output;
	char buf[30];
	ftoa(radians, buf, digits);
	//printf("\nAngle is %s rad.\n", buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(-infinity)",0);
}

/*
Entrada: +infinito (0xFF800000) => valor limite
Resultado esperado: 0
*/
void cos_infinity_test_2(){
	float radians = 0xFF800000f;
	float expected = 0.0;
	float output;
	char buf[30];
	ftoa(radians, buf, digits);
	//printf("\nAngle is %s rad.\n", buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(+infinity)",0);
}

/*
Entrada: 0 => valor limite
Resultado esperado: 1
*/
void cos_zero_test_1(){
	float radians = 0.0;
	float expected = 1.0;
	float output;
	char buf[30];
	ftoa(radians, buf, digits);
	//printf("\nAngle is %s rad.\n", buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: (+) quase zero (0x00800000) => valor limite
Resultado esperado: 1
*/
void cos_zero_test_2(){
	float radians = 0x00800000f;
	float expected = 1.0;
	float output;
	char buf[30];
	ftoa(radians, buf, digits);
	//printf("\nAngle is %s rad.\n", buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos((+)quase zero)",0);
}

/*
Entrada: (-) quase zero (0x80000001) => valor limite
Resultado esperado: 1
*/
void cos_zero_test_3(){
	float radians = 0x80800000f;
	float expected = 1.0;
	float output;
	char buf[30];
	ftoa(radians, buf, digits);
	//printf("\nAngle is %s rad.\n", buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos((-)quase zero)",1);
}

/*
	TESTES EXTRAS COM VALORES INTERMEDIÁRIOS
*/

/*
Entrada: 1° = pi/180 rad
Resultado esperado: 0.99984769515
*/
void cos_1_degree_test(){
	float degree = 1.0;
	float radians;
	float expected = 0.99984769515;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: 90° = pi/2 rad
Resultado esperado: 0
*/
void cos_90_degrees_test(){
	float degree = 90.0;
	float radians;
	float expected = 0.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: 89° = 89*pi/180 rad
Resultado esperado: 0.01745240643
*/
void cos_89_degrees_test(){
	float degree = 89.0;
	float radians;
	float expected = 0.01745240643;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: 180° = pi rad
Resultado esperado: -1
*/
void cos_180_degrees_test(){
	float degree = 180.0;
	float radians;
	float expected = -1.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: 300° = 300*pi/180 rad
Resultado esperado: 0.5
*/
void cos_300_degrees_test(){
	float degree = 300.0;
	float radians;
	float expected = 0.5;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}
/*
Entrada:-90° = - pi rad
Resultado esperado: 0
*/
void cos_Neg90_degrees_test(){
	float degree = -90.0;
	float radians;
	float expected = 0.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	/*printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);*/
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}

/*
Entrada: 720° = 720*pi/180 rad
Resultado esperado: 1.0
*/
void cos_720_degrees_test(){
	float degree = 720.0;
	float radians;
	float expected = 1.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	//printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = cos(radians);
	//printf(" ");
	//printBits(sizeof(float),&expected);
	//printf("=");
	//printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	//printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	//printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "cos(0)",0);
}
