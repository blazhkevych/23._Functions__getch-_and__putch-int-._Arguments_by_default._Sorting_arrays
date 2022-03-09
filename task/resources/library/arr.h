// Функция инициализирует одномерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(int arr[], int size, int min, int max);

// Функция инициализирует двумерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(int arr[][4], int row, int min, int max);

// Функция выводит одномерный массив на экран.
void PrintArray(int arr[], int size);

// Функция выводит двумерный массив на экран.
void PrintArray(int arr[][4], int row);

// Функция реализует линейный поиск заданного ключа в двумерном массиве.
int LinearSearch(int arr[][4], int row, int key);

// Функция реализует бинарный поиск заданного ключа в двумерном массиве.
int BinarySearch(int arr[][4], int row, int key);

// Функция сортировки двумерного массива.
void Sort(int arr[][4], int row);

// Функция сортировки одномерного массива (по возрастанию или убыванию).
void Sort(int arr[], int size, bool flag);

// Функция сортирует первую половину одномерного массива по убыванию, а вторую - по возрастанию.
void SortHalfDescHalfAscend(int arr[], int size);

// Функция сортирует элементы между двумя индексами.
void SortBetweenTwoIndices(int arr[], int size);

// Функция меняющая порядок следования элементов передаваемого ей одномерного массива на противоположный.
void ReversesElemArray(int arr[], int size);

// Функция находит позицию крайнего отрицательного элемента (самого левого отрицательного элемента).
int LeftmostNegativeElement(int arr[], int size);

// Функция находит позицию крайнего отрицательного элемента (самого правого отрицательного элемента).
int RightmostNegativeElement(int arr[], int size);
