#include <stdio.h>

int main() {
    int postalCode;
    printf("Введіть поштовий індекс: ");
    scanf("%d", &postalCode);
    
    switch(postalCode) {
        case 58000:
            printf("Чернівці\n");
            break;
        case 79000:
            printf("Львів\n");
            break;
        case 61100:
            printf("Харків\n");
            break;
        case 50000:
            printf("Кривий Ріг\n");
            break;
        case 87500:
            printf("Маріуполь\n");
            break;
        case 01001: 
             printf("Київ\n");
             break;
        case 65000:
             printf("Одеса\n"); 
             break; 
         default:
            printf("Місто для даного поштового індексу не знайдено\n");
            break;
    }
    
    return 0;
}
