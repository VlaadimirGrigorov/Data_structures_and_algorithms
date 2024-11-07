//#include <iostream>
//
//int binarySearchIterative(const int* arr, size_t size, int value)
//{
//	if (!arr)
//	{
//		std::cout << "Invalid array!" << std::endl;
//		return -1;
//	}
//
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right)
//	{
//		// safer way
//		int mid = left + ((right - left) / 2);
//
//		if (arr[mid] == value)
//		{
//			return mid;
//		}
//		else if (arr[mid] < value)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//	return -1;
//}
//
//// the difference is that we need to pass left and right as parameters
//int binarySerchRecursiveHelper(const int* arr, size_t size, int left, int right, int value)
//{
//	if (size == 0)
//	{
//		return -1;
//	}
//	int mid = left + (right - left) / 2;
//	if (arr[mid] == value)
//	{
//		return mid;
//	}
//	else if (arr[mid] < value)
//	{
//		return binarySerchRecursiveHelper(arr, size - 1, mid + 1, right, value);
//	}
//	else
//	{
//		return binarySerchRecursiveHelper(arr, size - 1, left, mid - 1, value);
//	}
//}
//
//int binarySearchRecursive(const int* arr, size_t size, int value)
//{
//	if (!arr)
//	{
//		std::cout << "Invalid array!" << std::endl;
//		return -1;
//	}
//
//	int left = 0, right = size - 1;
//
//	return binarySerchRecursiveHelper(arr, size, left, right, value);
//}
//
//int binarySearchRecursive1(const int* arr, size_t size, int value)
//{
//	if (size == 0)
//	{
//		return -1;
//	}
//
//	int mid = size / 2;
//	if (arr[mid] == value)
//	{
//		return mid;
//	}
//	else if (arr[mid] < value)
//	{
//		int result =  binarySearchRecursive1(arr + mid + 1, size - mid - 1, value);
//		return (result == -1) ? -1 : mid + 1 + result;
//	}
//	else
//	{
//		return binarySearchRecursive1(arr, mid, value);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 , 8, 9 };
//
//	std::cout << "Binary search iterative: " << std::endl;
// 	int binary_iterative = binarySearchIterative(arr, 9, 9);
//	std::cout << binary_iterative << std::endl;
//
//	std::cout << "Binary search recursive: " << std::endl;
//	int binary_recursive = binarySearchRecursive(arr, 9, 3);
//	std::cout << binary_recursive << std::endl;
//
//	std::cout << "Binary search recursive 1: " << std::endl;
//	int binary_recursive1 = binarySearchRecursive1(arr, 9, 1);
//	std::cout << binary_recursive1 << std::endl;
//
//
//	return 0;
//}