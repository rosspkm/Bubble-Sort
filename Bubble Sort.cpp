#include <iostream>
#define MAX 100
using namespace std;
class bubsort {
private:
	int arr[MAX], n;
public:
	void getarr();
	void showarr();
	void sortarr();
};

void bubsort::getarr() {
	cout << "How many elements you require : " << endl;
	cin >> n;
	cout << "Enter the elements:" << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}

void bubsort::showarr() {
	cout << "The sorted array using bubble sort is:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

void bubsort::sortarr() {
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < (n - i); ++j)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}

int main() {
	cout << "\n*****Bubble Sort*****\n";
	bubsort bubble;
	bubble.getarr();
	bubble.sortarr();
	bubble.showarr();
	return 0;
}