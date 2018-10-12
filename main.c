#include <stdio.h>
#include <stdbool.h>

// Kiểm tra độ dài 3 cạnh tam giác.
// - Độ dài một cạnh phải lớn hơn 0.
// - Độ dài tổng hai cạnh phải lớn hơn cạnh thứ 3.
bool validateData(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Độ dài một cạnh của tam giác phải lớn hơn 0!");
        return false;
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Tổng độ dài hai cạnh không thể nhỏ hơn hoặc bằng cạnh còn lại!");
        return false;
    }
    return true;
}

// Tính nửa chu vi của tam giác.
float calculateHalfPastP(int a, int b, int c) {
    return (float) (a + b + c) / 2;
}

int main() {
    int a, b, c;
    printf("Vui lòng nhập độ dài cạnh thứ nhất: \n");
    scanf("%d", &a);
    printf("Vui lòng nhập độ dài cạnh thứ hai: \n");
    scanf("%d", &b);
    printf("Vui lòng nhập độ dài cạnh thứ ba: \n");
    scanf("%d", &c);
    bool isValidateData = validateData(a, b, c);
    if (isValidateData) {
        printf("Kết quả nửa chu vi tam giác là: %.2f", calculateHalfPastP(a, b, c));
    }
    return 0;
}