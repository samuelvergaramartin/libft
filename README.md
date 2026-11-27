_Este proyecto ha sido creado como parte del currículo de 42 por samuver_

# libft

`libft` es una biblioteca estática en C que reúne implementaciones propias de
funciones habituales de la biblioteca estándar, además de utilidades para
trabajar con cadenas, memoria, conversiones, descriptores de archivo y listas
enlazadas. El objetivo del proyecto es comprender y reimplementar estas
operaciones respetando las restricciones y la Norminette de 42.

## Descripción

La biblioteca se compila como `libft.a` y contiene las funciones obligatorias
de `libft`, incluidas las funciones de listas enlazadas. Todas las declaraciones
públicas están en [`libft.h`](libft.h).

### Funciones incluidas

#### Comprobación de caracteres

| Función | Descripción |
| --- | --- |
| `int ft_isalpha(int c)` | Comprueba si `c` es un carácter alfabético o no. Devuelve `1` si es alfabético, `0` si no lo es.|
| `int ft_isdigit(int c)` | Comprueba si `c` es un dígito entre `0` y `9`. Devuelve `1` si es un digito, `0` si no lo es.|
| `int ft_isalnum(int c)` | Comprueba si `c` es una letra o un dígito. Devuelve `1` si es una letra o dígito, `0` si no lo es.|
| `int ft_isascii(int c)` | Comprueba si `c` pertenece al rango ASCII, de 0 a 127. Devuelve `1` si es ASCII, `0` si no lo es.|
| `int ft_isprint(int c)` | Comprueba si `c` es un carácter imprimible, de 32 a 126. Devuelve `1` si es imprimible, `0` si no lo es.|

#### Memoria y cadenas

| Función | Descripción |
| --- | --- |
| `size_t ft_strlen(const char *s)` | Devuelve la longitud de una cadena, sin contar el terminador nulo. |
| `void *ft_memset(void *s, int c, size_t n)` | Rellena los primeros `n` bytes de memoria con `c` y devuelve `s`. |
| `void ft_bzero(void *s, size_t n)` | Establece los primeros `n` bytes de memoria a cero. |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copia `n` bytes de `src` a `dest`; las zonas no deben solaparse. |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | Copia `n` bytes de forma segura aunque las zonas se solapen. |
| `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copia una cadena en `dst` con terminación nula cuando hay espacio y devuelve la longitud de `src`. |
| `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Añade `src` a `dst` con límite de tamaño y devuelve la longitud que se intentó crear. |
| `char *ft_strchr(const char *s, int c)` | Devuelve un puntero a la primera aparición de `c` en `s`. |
| `char *ft_strrchr(const char *s, int c)` | Devuelve un puntero a la última aparición de `c` en `s`. |
| `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compara como máximo los primeros `n` caracteres de dos cadenas. |
| `void *ft_memchr(const void *s, int c, size_t n)` | Busca `c` en los primeros `n` bytes y devuelve su posición. |
| `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compara los primeros `n` bytes de dos zonas de memoria. |
| `char *ft_strnstr(const char *big, const char *little, size_t len)` | Busca `little` dentro de los primeros `len` caracteres de `big`. |
| `char *ft_strdup(const char *s)` | Reserva memoria y devuelve una copia de la cadena `s`. |

#### Conversiones y asignación dinámica

| Función | Descripción |
| --- | --- |
| `int ft_atoi(const char *nptr)` | Convierte el comienzo numérico de una cadena en un entero. |
| `ft_calloc(size_t nmemb, size_t size)` | Reserva memoria para `nmemb` elementos de `size` bytes e inicializa todos los bytes a cero. |
| `char *ft_itoa(int n)` | Convierte un entero en una cadena reservada dinámicamente. |
| `int ft_tolower(int c)` | Convierte una letra mayúscula a minúscula. |
| `int ft_toupper(int c)` | Convierte una letra minúscula a mayúscula. |

#### Operaciones sobre cadenas

| Función | Descripción |
| --- | --- |
| `char *ft_substr(const char *s, unsigned int start, size_t len)` | Devuelve una subcadena de `s` comenzando en `start` y con un máximo de `len` caracteres. |
| `char *ft_strjoin(const char *s1, const char *s2)` | Reserva y devuelve la concatenación de `s1` y `s2`. |
| `char *ft_strtrim(const char *s1, const char *set)` | Devuelve `s1` sin los caracteres de `set` al principio y al final. |
| `char **ft_split(const char *s, char c)` | Divide `s` usando `c` como separador y devuelve un array terminado en `NULL`. |
| `char *ft_strmapi(const char *s, char (*f)(unsigned int, char))` | Crea una copia de `s` aplicando `f` a cada carácter y su índice. |
| `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Aplica `f` a cada carácter de `s`, permitiendo modificar la cadena. |

#### Escritura en descriptores

| Función | Descripción |
| --- | --- |
| `void ft_putchar_fd(char c, int fd)` | Escribe un carácter en el descriptor `fd`. |
| `void ft_putstr_fd(char *s, int fd)` | Escribe una cadena en el descriptor `fd`. |
| `void ft_putendl_fd(char *s, int fd)` | Escribe una cadena y un salto de línea en el descriptor `fd`. |
| `void ft_putnbr_fd(int n, int fd)` | Escribe un entero en el descriptor `fd`. |

#### Listas enlazadas

La estructura `t_list` contiene un puntero `content` y un puntero `next` al
siguiente nodo. Las funciones de borrado reciben una función `del` para liberar
el contenido de cada nodo cuando sea necesario.

| Función | Descripción |
| --- | --- |
| `t_list *ft_lstnew(void *content)` | Reserva y devuelve un nodo nuevo con `content`. |
| `void ft_lstadd_front(t_list **lst, t_list *new)` | Añade `new` al principio de la lista. |
| `unsigned int ft_lstsize(t_list *lst)` | Devuelve el número de nodos de la lista. |
| `t_list *ft_lstlast(t_list *lst)` | Devuelve el último nodo de la lista. |
| `void ft_lstadd_back(t_list **lst, t_list *new)` | Añade `new` al final de la lista. |
| `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Libera el contenido y el nodo indicado. |
| `void ft_lstclear(t_list **lst, void (*del)(void *))` | Elimina todos los nodos y deja la lista a `NULL`. |
| `void ft_lstiter(t_list *lst, void (*f)(void *))` | Aplica `f` al contenido de cada nodo. |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Crea una nueva lista aplicando `f`; usa `del` si falla una reserva. |

## Instrucciones

### Requisitos

- Un compilador C compatible con `cc`.
- `make`.
- En Linux, las herramientas habituales de compilación.

### Compilación

Desde este directorio, ejecuta:

```bash
make
```

Esto genera la biblioteca estática `libft.a`. Los comandos disponibles son:

```bash
make         # Compila la biblioteca
make libft.a # También compila la biblioteca
make all     # Alias de make
make clean   # Elimina los archivos objeto (.o)
make fclean  # Elimina objetos y libft.a
make re      # Limpia todo y recompila todo
```

### Uso en un proyecto

Para poder usarlo en tu proyecto debes incluir las cabeceras del libft en los archivos de tu proyecto donde requieran funciones del libft:

```c
#include "libft.h"
```

Y ya puedes usarla en tus funciones con total normalidad, como en el siguiente ejemplo:
```c
// main.c

#include "libft.h"

int main(void)
{
	#include <stdio.h>
	printf("El tamaño de la cadena es: %i\n", ft_strlen("Hola"));
	return (0);
}
```
Para compilarlo debemos primero compilar todos los archivos C de nuestro proyecto y al final el libft.a:
```sh
cc -Wall -Wextra -Werror main.c libft.a
```
Y finalmente ejecutamos nuestro ejecutable:
```
./a.out
```

## Recursos

- [Documentación de `make`](https://www.gnu.org/software/make/manual/)
- [Manual de la biblioteca estándar de C](https://en.cppreference.com/w/c/header)
- [libftTester de Tripouille](https://github.com/Tripouille/libftTester), utilizado como apoyo para probar las funciones.
- `IA de brave`: Para dudas sobre las listas enlazadas, y detección de bugs en el código.
- `Compañeros del campus`: La mayoria de dudas y problemas me las han resuelto mis compañeros de 42.

La IA se ha utilizado en algunas **funciones** para entender qué hacían y también para entender las **listas enlazadas**, aparte de usar la IA para aprender algunas cosas sobre **markdown** para hacer esta documentación.
