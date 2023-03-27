// Introducing... The Super Sortinator!
#include <cstdio>

int main() {
    int numbers[10] { 1, 3, 2, 4, 7, 9, 0, 5, 6, 8 };
    int tmp_numbers[10];

    for (int i : numbers) {
        tmp_numbers[numbers[i] - 1] = numbers[i];
    }

    printf(tmp_numbers);
    return 0;
}
