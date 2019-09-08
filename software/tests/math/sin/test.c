#include <hf-risc.h>
#include <hf-unit.h>

const float pi = 3.14159265359;
const int precision = 10;

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
	
}

// place here a nice description for each test
void sin_0_degree_test(){
	float degree = 0.0;	
	float radians;
	float expected = 0.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(0)");
}

void sin_1_degree_test(){
	float degree = 1.0;	
	float radians;
	float expected = 0.01745240643;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(1)");
}
void sin_90_degree_test(){
	float degree = 90.0;	
	float radians;
	float expected = 1.0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(90)");
}
void sin_179_degree_test(){
	float degree = 179.0;	
	float radians;
	float expected = 0.017452;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(179)");
}
void sin_181_degree_test(){
	float degree = 181.0;	
	float radians;
	float expected = -0.017452;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(181)");
}
void sin_180_degree_test(){
	float degree = 180.0;	
	float radians;
	float expected = 0;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(180)");
}

void sin_330_degree_test(){
	float degree = 330.0;	
	float radians;
	float expected = 0.5;
	float output;
	char buf[30];
	radians = degree * pi / 180;
	ftoa(radians, buf, precision);
	printf("\nAngle is %d degrees (%s rad).\n", (int)degree, buf);
	output = sin(radians);
	printf(" ");
	printBits(sizeof(float),&expected);
	printf("=");
	printBits(sizeof(float),&output);
	ftoa(expected, buf, precision);
	printf("expected: %s\n", buf);
	ftoa(output, buf, precision);
	printf("output: %s\n", buf);
	hfunit_comp_float(output,expected, "sin(330)");
}

