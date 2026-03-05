#include <stdio.h>

int main() {
    int n, i;
    double value, sum = 0.0;

    // Membaca 'n'
    scanf("%d", &n);

    // Membaca 'n' buah nilai dan menghitung jumlahnya
    for (i = 0; i < n; i++) {
        scanf("%lf", &value);
        sum += value;
    }

    // Menghitung rata-rata
    double average = sum / n;

    // Menampilkan jumlah dan rata-rata dengan format yang diminta
    printf("%.0f\n", sum);
    printf("%.2f\n", average);

    return 0;
}