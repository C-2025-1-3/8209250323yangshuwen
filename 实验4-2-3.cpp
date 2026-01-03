#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n -i- 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp= arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	cout << "请输入数组元素个数：";
	int n; cin >> n;
	int* arr = new int[n];
	cout << "请输入"<<n<<"个整数：";
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, n);
	for (int i = 0; i < n; i++)cout << arr[i]<<" ";
	delete[]arr;
	arr = nullptr;
	return  0;

}