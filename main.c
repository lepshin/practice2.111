#include <stdio.h>
#include <math.h>
//Practice2 #11 Var4
int main(void) {
    double x, y;
    printf("Введите координату x: ");
    scanf("%lf", &x);
    printf("Введите координату y: ");
    scanf("%lf", &y);
    printf("x = %6.3lf; y = %6.3lf\n", x, y);
    if ((x>= 0 && y <= 0 && pow(x, 2) + pow(y, 2) <=1) ||  (x >= -1 && y <= 1&& x <= 0 && y>= 0))  {//первое условие нижняя часть графика(круг), второе условие верхний квадрат
        printf("Точка попадает в область\n");
    } else{
        printf("Точка не попадает в область\n");
    }
    return 0;
}
