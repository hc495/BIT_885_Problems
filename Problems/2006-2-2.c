/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 请给出快速排序的算法
 * 
 * 分析
 * 基本算法功底。写严版以第一个为pivot的就行了。
*/

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int* array, unsigned int length) {
    __quick_sort(array, 0, length);
}

void __quick_sort(int* array, unsigned int begin, unsigned int end) { //左开右闭
    if (begin + 1 >= end) return;
    unsigned int left = begin + 1, right = end - 1;
    while (1) {
        while (left < right && array[left] <= array[begin]) left++;
        while (left < right && array[right] > array[begin]) right--;
        if (left < right) {
            swap(array + left, array + right);
        } else break;
    }
    swap(array + 0, array + right);
    __quick_sort(array, begin, right);
    __quick_sort(array, right, end);
}
