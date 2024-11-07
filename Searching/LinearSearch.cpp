//#include <iostream>
//
//int linearSearchIterative(int* arr, size_t size, int value)
//{
//	if (!arr)
//	{
//		std::cout << "Invalid array!" << std::endl;
//		return -1;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == value)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
//
//// return the index if value is in the array or -1 if it's not
//int linearSearchRecursive1(int* arr, size_t size, int value, int index)
//{
//	if (size == 0)
//	{
//		return -1;
//	}
//
//	if (arr[0] == value)
//	{
//		return index;
//	}
//
//	return linearSearchRecursive1(arr + 1, size - 1, value, index + 1);
//}
//
//// return true if value is in the array and false if it's not
//bool linearSearchRecursive2(int* arr, size_t size, int value)
//{
//	if (size == 0)
//	{
//		return false;
//	}
//
//	return arr[0] == value || linearSearchRecursive2(arr + 1, size - 1, value);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,9,7,4 };
//	int index = 0;
//
//	std::cout << "Linear search iterative: " << std::endl;
//	int linear_iterative = linearSearchIterative(arr, 6, 9);
//	std::cout << linear_iterative << std::endl;
//
//	std::cout << "Linear search recursive: " << std::endl;
//	int linear_recursive1 = linearSearchRecursive1(arr, 6, 1, index);
//	std::cout << linear_recursive1 << std::endl;
// 	
//	std::cout << "Linear search recursive: " << std::endl;
//	bool linear_recursive2 = linearSearchRecursive2(arr, 6, 1);
//	std::cout << std::boolalpha << linear_recursive2 << std::endl;
//
//	return 0;
//}