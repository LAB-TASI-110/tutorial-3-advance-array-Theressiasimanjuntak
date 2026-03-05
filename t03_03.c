#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    
    // Membaca 'n'
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nilai
    double values[n]; 
    double min_val = 1e9 + 7; // Inisialisasi dengan nilai yang sangat besar
    double max_val = -1e9 - 7; // Inisialisasi dengan nilai yang sangat kecil

    // Membaca 'n' buah nilai dan menghitung jumlahnya, serta mencari min/max
    for (i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
        if (values[i] < min_val) {
            min_val = values[i];
        }
        if (values[i] > max_val) {
            max_val = values[i];
        }
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

    // Menghitung rentang nilai (maksimum - minimum)
    double range_val = max_val - min_val;

    // Menampilkan jumlah, rata-rata, banyaknya nilai di atas/sama dengan rata-rata, dan rentang
    printf("%.0f\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);
    printf("%.0f\n", range_val); // Menampilkan range tanpa desimal sesuai contoh output

    return 0;
} 