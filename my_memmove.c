//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	my_memmove(arr + 3, arr, 16);
//	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}