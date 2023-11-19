#include <time.h>
#include <iostream>
using namespace std;

void modeArray(int array[], int index, int arraySize, int& count, int& sum) {
	if (index < arraySize) {
		if (!(index % 2 == 0 && index % 3 == 0)) {
			sum += array[index];
			count++;
			array[index] = 0;
		}
		modeArray(array, index + 1,arraySize,  count, sum);
	}
	
}
void outArray(const int array[],int index, int arraySize) {
	if (index < arraySize) {
		cout << array[index] << " ";
		outArray(array, index + 1, arraySize);
	}
	else {
		cout << "\n";
	}

}
void inArray(int array[], int index, int arraySize) {
	if (index < arraySize) {
		array[index] = 4 + rand() % (16 - 4 + 1);
		inArray(array, index + 1, arraySize);
	}
}
int main()
{
	const int arraySize = 23;
	int sum = 0;
	int count = 0;
	int array[arraySize];
	srand((unsigned)time(NULL));
	inArray(array, 0, arraySize);
	outArray(array, 0, arraySize);
	modeArray(array, 0, arraySize, count, sum);
	cout << "sum: " << sum << "\n";
	cout << "count: " << count << "\n";
	outArray(array, 0, arraySize);
}

