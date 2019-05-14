#include<iostream>
#include<iomanip>
using namespace std;

template<typename T>
int BinarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;
	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;

		else
			low = mid + 1;

	}
	if (-low - 1 < 0)
		return -1;
}
template<typename T>
void InsertionSort(T list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		double currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}
		list[k + 1] = currentElement;
	}
}


int main()
{
	int size = 9;
	double arr[3],array1[9] = {1,5,6,2,3,7,9,8,4};
	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < 3; i++)
			cin >> arr[i];

		cout << "From: ";
		for (int i = 0; i < size; i++)
		{
			cout << array1[i];
			if (i < 8)
				cout << ",";
		}
		cout << endl << "To: ";

		InsertionSort(array1, size);

		for (int i = 0; i < size; i++)
		{
			cout << array1[i];
			if (i < 8)
				cout << ",";
		}

		cout << endl;

		for (int i = 0; i < 3; i++)
		{
			cout << arr[i] << " at " << BinarySearch(array1, arr[i], size) << endl;
		}
		cout << endl;

		double array2[9] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
		for (int i = 0; i < size; i++)
		{
			array1[i] = array2[i];
		}
	}
	system("pause");
}
