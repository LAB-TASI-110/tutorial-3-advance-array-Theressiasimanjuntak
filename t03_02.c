#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    
    // Membaca 'n'
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nilai
    double values[n]; 

    // Membaca 'n' buah nilai dan menghitung jumlahnya
    for (i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    // Menghitung rata-rata
    double average = sum / n;

    // Menghitung banyaknya nilai yang di atas atau sama dengan rata-rata
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    // Menampilkan jumlah, rata-rata, dan banyaknya nilai di atas/sama dengan rata-rata
    printf("%.0f\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);

    return 0;
}