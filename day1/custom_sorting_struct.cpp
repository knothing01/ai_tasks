#include <iostream>
#include <vector>
#include <string.h>

enum SortingStrategy {
    BUBBLE_SORT,
    SELECTION_SORT,
};

void bubbleSort(std::vector<int>&);
void selectionSort(std::vector<int>&);
void printVector(const std::vector<int>&);
SortingStrategy getUserChoice();

// array of sorting options
struct SortingOption {
    SortingStrategy option;
    void (*sortFunc)(std::vector<int>&);
};

SortingOption option[] = {
    {BUBBLE_SORT, bubbleSort},
    {SELECTION_SORT, selectionSort}
};

void printVector(const std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void bubbleSort(std::vector<int>& arr){
    int size = arr.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) 
{
    int size = arr.size();
    for(int i = 0; i < size - 1; ++i){
        int min_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}

SortingStrategy getUserChoice() {
    int choice;
    std::cout << "Select a sorting algorithm:" << std::endl;
    std::cout << "1. Bubble Sort" << std::endl;
    std::cout << "2. Selection Sort" << std::endl;
    std::cout << "Enter your choice (1-2): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            return BUBBLE_SORT;
        case 2:
            return SELECTION_SORT;
        default:
            std::cout << "Invalid choice." << std::endl;
            return BUBBLE_SORT;
    }
}

int main()
{
    std::vector<int> arr = {10, 65, 76, 23, 45, 1};

    SortingStrategy chosenStrategy = getUserChoice();

    for (const auto& opt : option) {
        if (opt.option == chosenStrategy) {
            opt.sortFunc(arr);
            break;
        }
    }

    std::cout << "Array after sorting:\n";
    printVector(arr);

    return 0;
}
