//合并两个有序数组，形成一个新的有序数组
#include<iostream>
using namespace std;
void merge( int list1[], int size1, int list2[], int size2, int list3[])
{
	int i = 0; int j = 0; int k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])list3[k++] = list1[i++];
		else list3[k++] = list2[j++];
	}
	while (i < size1 )list3[k++] = list1[i++];
	while (j< size2)list3[k++] = list2[j++];
    
}
int main()
{
	int size1, size2, i, j, k;
	const int max = 80;
	int list1[max], list2[max], list3[max * 2];
	cout << "请输入第一个数组的元素个数和有序数组";//必须是有序数组！！
	cin >> size1;
	for (i = 0; i < size1; i++)cin >> list1[i];
	cout << "请输入第二个数组的元素个数和有序数组";		cin >> size2;
	for (j = 0; j < size2; j++)cin>> list2[j] ;
	merge(list1, size1, list2, size2,list3);
	cout << "新的有序数组:";
	for (k = 0; k < size1 + size2; k++)cout << list3[k] << " ";
	return 0;
}
