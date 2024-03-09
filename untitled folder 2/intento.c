#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_hex_address(void *ptr) {
    unsigned long int address = (unsigned long int)ptr;
    char *hex_address = (char *)malloc(20 * sizeof(char)); // Usando malloc para asignar memoria dinámica
    if (hex_address == NULL) {
        // Manejar el error si malloc falla
        fprintf(stderr, "Error: no se pudo asignar memoria.\n");
        return;
    }
    int i = 0;

    // Convertir la dirección a una cadena de caracteres hexadecimal
    while (address != 0) {
        int remainder = address % 16;
        if (remainder < 10)
            hex_address[i++] = 48 + remainder;
        else
            hex_address[i++] = 87 + remainder;
        address /= 16;
    }
    hex_address[i] = '\0';

    // Imprimir la cadena hexadecimal con el prefijo '0x'
    putchar('0');
    putchar('x');
    for (int j = i - 1; j >= 0; j--)
        putchar(hex_address[j]);

    // Liberar la memoria asignada por malloc
    free(hex_address);
}

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%' && *(format + 1) == 'p') {
            void *ptr = va_arg(args, void *);
            // Llamar a la función para imprimir la dirección en formato hexadecimal
            print_hex_address(ptr);
            format += 2; // Avanzar el formato para pasar al siguiente caracter
        } else {
            putchar(*format);
            ++format;
        }
    }

    va_end(args);
}

int main() {
    int x = 10;
    my_printf("La dirección de memoria de x es: %p\n", (void *)&x);
    return 0;
}