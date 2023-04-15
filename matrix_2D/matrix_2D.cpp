#include <iostream>
#include <iomanip>

void print_matriz_2D(int*, int, int);
void print_matriz_2D_transpuesta(int*, int, int);

int main()
{
	//	Matrices 2D de prueba para ejercicios 1 y 2
	int M_2D_00[5][3] =
	{
		{33,55,84},
		{11,-3,34},
		{1,3,-1},
		{4,-2,2},
		{6,5,0}
	};
	int M_2D_01[3][3] =
	{
		{1,3,-1},
		{4,-2,2},
		{6,5,0}
	};

	//	Matriz 2D 2*3
	int M_2D_02[2][3] =
	{
		{2,1,0},
		{5,-2,2}
	};

	//	Matriz 2D 2*2
	int M_2D_03[2][2] =
	{
		{3,-2},
		{0,1}
	};
	// Ejercicio 1 - Imprimir los valores de una Matriz de dos dimensiones
	std::cout << "Imprimiendo matrices 2D: " << std::endl;
	print_matriz_2D(*M_2D_00, 5, 3);
	std::cout << std::endl << std::endl;
	print_matriz_2D(*M_2D_01, 3, 3);
	std::cout << std::endl << std::endl;
	print_matriz_2D(*M_2D_02, 2, 3);
	std::cout << std::endl << std::endl;
	print_matriz_2D(*M_2D_03, 2, 2);
	std::cout << std::endl << std::endl;

	//	Ejercicio 2 - Imprimir la Matriz Transpuesta
	std::cout << "Imprimiendo matrices 2D Transpuestas: " << std::endl;
	print_matriz_2D_transpuesta(*M_2D_00, 5, 3);
	std::cout << std::endl;
	print_matriz_2D_transpuesta(*M_2D_01, 3, 3);
	std::cout << std::endl;
	print_matriz_2D_transpuesta(*M_2D_02, 2, 3);
	std::cout << std::endl;
	print_matriz_2D_transpuesta(*M_2D_03, 2, 2);


	return 0;

}


void print_matriz_2D(int* M_2D, int rows, int columns)
{
	int* p_pivot = M_2D + columns;
	for (int* p = M_2D; p < M_2D + rows * columns; p++)
	{
		if (p == p_pivot)
		{
			std::cout << std::endl;
			p_pivot += columns;
		}
		std::cout << std::setw(3) << *p;
	}
}

void print_matriz_2D_transpuesta(int* M_2D, int rows, int columns)
{
	for (int* p = M_2D; p < (M_2D + columns); p++)
	{
		for (int* p2 = p; p2 < (M_2D + rows * columns); p2 += columns)
			std::cout << std::setw(3) << *p2;
		std::cout << std::endl;
	}
}