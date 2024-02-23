#include <iostream>
#include <vector>

// Function pointer
typedef void (*sort_func)(std::vector<int>&);
sort_func selectSortAlgorithm();

void bubbleSort(std::vector<int>&);
void selectionSort(std::vector<int>&);
void printVector(const std::vector<int>&);

int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Array before sorting:\n";
    printVector(arr);

    sort_func sortfunc = selectSortAlgorithm();
    if (sortfunc != nullptr) {
        sortfunc(arr);
        std::cout << "Array after sorting:\n";
        printVector(arr);
    } else {
        std::cout << "Invalid selection.\n";
    }

    return 0;
}

sort_func selectSortAlgorithm()
{
    int choice = 0;
    std::cout << "Select sorting algorithm:\n";
    std::cout << "1. Bubble Sort\n";
    std::cout << "2. Selection Sort\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            return &bubbleSort;
        case 2:
            return &selectionSort;
        default:
            return nullptr;
    }
}

void printVector(const std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void bubbleSort(std::vector<int>& arr) 
{
    int size = arr.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) 
{
    int size = arr.size();
    for (int i = 0; i < size - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}