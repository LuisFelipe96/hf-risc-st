#include <hf-risc.h>
#include <hf-unit.h>

const float pi = 3.14159265359;
const int digits = 10;

// function under test 
float sin(float arg);

// list of individual tests
void sin_0_degree_test();
void sin_1_degree_test();
void sin_90_degree_test();
void sin_179_degree_test();
void sin_181_degree_test();
void sin_180_degree_test();
void sin_330_degree_test();

// main test
void hfunit_run_tests(){
	sin_0_degree_test();
	sin_1_degree_test();
	sin_90_degree_test();
	sin_179_degree_test();
	sin_181_degree_test();
	sin_180_degree_test();
	sin_330_degree_test();
	sin_720_degree_test();
	sin_Neg90_degree_test();
	
}

// place here a nice description for each test
/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|Entrada |   Numeros reais                |  não numeros                      |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|

*/

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    0   |             0.0                |
|--------|--------------------------------|


*/
void sin_0_degree_test(){
	float degree = 0.0;	
	float radians;
	float expected = 0.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(0)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    1   |          0.01745240643         |
|--------|--------------------------------|


*/
void sin_1_degree_test(){
	float degree = 1.0;	
	float radians;
	float expected = 0.01745240643;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(1)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|   90   |             1.0                |
|--------|--------------------------------|


*/
void sin_90_degree_test(){
	float degree = 90.0;	
	float radians;
	float expected = 1.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(90)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|  179   |            0.017452            |
|--------|--------------------------------|


*/
void sin_179_degree_test(){
	float degree = 179.0;	
	float radians;
	float expected = 0.017452;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(179)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|   181  |           -0.017452            |
|--------|--------------------------------|


*/
void sin_181_degree_test(){
	float degree = 181.0;	
	float radians;
	float expected = -0.017452;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(181)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|  180   |             0.0                |
|--------|--------------------------------|


*/
void sin_180_degree_test(){
	float degree = 180.0;	
	float radians;
	float expected = 0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(180)");
}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|  330   |             -0.5                |
|--------|--------------------------------|


*/
void sin_330_degree_test(){
	float degree = 330.0;	
	float radians;
	float expected = -0.5f;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(330)");
}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|  720   |             0.0                |
|--------|--------------------------------|


*/
void sin_720_degree_test(){
	float degree = 720.0;	
	float radians;
	float expected = 0.0f;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(720)");
}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|  -90   |             -1.0                |
|--------|--------------------------------|


*/
void sin_Neg90_degree_test(){
	float degree = -90.0;	
	float radians;
	float expected = -1.0f;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, digits);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, digits);
	printf("expected: %s\n", buf);
	ftoa(output, buf, digits);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(-90");
}
