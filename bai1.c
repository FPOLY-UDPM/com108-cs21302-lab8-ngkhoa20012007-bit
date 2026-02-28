/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49647]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN 
//  Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh 
//  viên, ngành học, điểm trung bình. 
//  Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

typedef struct {
    char maSV[20];
    char tenSV[100];
    char nganhHoc[100];
    float diemTB;
} SinhVien;

int main() {
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); // Xóa ký tự Enter còn sót lại

    SinhVien sv[n];

    // Nhập thông tin
    for(int i = 0; i < n; i++) {
        printf("\n===== Sinh vien %d =====\n", i + 1);

        printf("Ma sinh vien: ");
        fgets(sv[i].maSV, sizeof(sv[i].maSV), stdin);
        sv[i].maSV[strcspn(sv[i].maSV, "\n")] = 0;

        printf("Ten sinh vien: ");
        fgets(sv[i].tenSV, sizeof(sv[i].tenSV), stdin);
        sv[i].tenSV[strcspn(sv[i].tenSV, "\n")] = 0;

        printf("Nganh hoc: ");
        fgets(sv[i].nganhHoc, sizeof(sv[i].nganhHoc), stdin);
        sv[i].nganhHoc[strcspn(sv[i].nganhHoc, "\n")] = 0;

        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
        getchar();
    }

    // Xuất thông tin
    printf("\n===== DANH SACH SINH VIEN =====\n");
    for(int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("Ma SV: %s\n", sv[i].maSV);
        printf("Ten SV: %s\n", sv[i].tenSV);
        printf("Nganh hoc: %s\n", sv[i].nganhHoc);
        printf("Diem TB: %.2f\n", sv[i].diemTB);
    }

    return 0;
}