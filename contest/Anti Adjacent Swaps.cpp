#include <iostream>
#include <vector>

bool canSortArray(std::vector<int> &arr, int N)
{
    for (int i = 0; i < N - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            // Check if the elements are not adjacent
            if (i + 2 < N && arr[i] > arr[i + 2])
            {
                // Swap the elements to make the array sorted
                std::swap(arr[i], arr[i + 2]);
            }
            else
            {
                // If not possible to swap, return false
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N;
        std::cin >> N;

        std::vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> arr[i];
        }

        if (canSortArray(arr, N))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}
