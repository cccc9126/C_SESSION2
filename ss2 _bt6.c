#include <stdio.h>

int main(int argc, const char * argv[]) {
    const float PI = 3.14;
    float banKinh = 5;
    float chuVi, dienTich;
    chuVi = 2*PI*banKinh;
    dienTich = PI*banKinh*banKinh;
    printf("chu vi hinh tron la %f\ndien tich hinh tron la %f\n",chuVi, dienTich);
    return 0;
}
