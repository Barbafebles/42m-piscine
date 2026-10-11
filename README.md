# Piscine de 42 Madrid

Colección de ejercicios formativos en C, organizados por módulo (`C00` a `C06`) y ejercicio (`ex00`, `ex01`, etc.). Reflejan mi aprendizaje inicial; no son una aplicación única ni experiencia profesional.

## Contenido

Se practican salida básica, punteros, arrays, cadenas, conversiones, recursión y argumentos de programas. El estado de evaluación de cada ejercicio no está documentado aquí.

## Compilar un ejercicio

Con un compilador C, desde la raíz:

```sh
cc -Wall -Wextra -Werror -c C01/ex06/ft_strlen.c -o /tmp/ft_strlen.o
```

Ese comando genera un objeto; para ejecutar una función sin `main` hace falta un programa de prueba propio. Algunos ejercicios de C06 incluyen su propio `main` y se compilan individualmente:

```sh
cc -Wall -Wextra -Werror C06/ex01/ft_print_params.c -o /tmp/print_params
/tmp/print_params uno dos
```

No compilar todos los ejercicios juntos: repiten nombres de funciones y varios contienen `main`.
