//M�todos para a implementa��o das Ordena��es

typedef struct Registro{
	int matricula[8];
	char nome[20];	
}Registro;

void inserirNumeros();
void bubbleSort();
void selectionSort();
void insertionSort();
void recursaoQuickSort(int ini, int fim,int k);
void quickSort();
void intercala(int ini, int q, int fim, int y);
void mergeSortRecursao(int ini, int fim , int y);
void mergeSort();
void intercala();
void imprimir();
void salvaVetor();
void resetVetor();
