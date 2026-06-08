*Este proyecto ha sido creado como parte del currículo de 42 por pnarvaez*

# Libft - Mi Primera Librería en C

## Descripción

**Libft** es una librería estándar personalizada implementada en C desde cero como primer proyecto del currículo de 42 Madrid. El objetivo principal es recrear las funciones más comúnmente utilizadas de la librería estándar de C (`libc`) con el propósito educativo de entender profundamente cómo funcionan estas funciones a nivel de implementación.

### Objetivo del Proyecto

Este proyecto busca:
- Replicar funciones fundamentales de la librería estándar C
- Comprender los mecanismos internos de operaciones de memoria, strings y estructuras de datos
- Desarrollar habilidades en programación C, gestión de memoria y manipulación de punteros
- Crear una base sólida de herramientas reutilizables para proyectos posteriores del currículo

### Visión General

La librería Libft proporciona un conjunto completo de funciones para:
- **Validación de caracteres**: Funciones tipo `isalpha`, `isdigit`, etc.
- **Manipulación de memoria**: `memcpy`, `memmove`, `memset`, etc.
- **Operaciones con strings**: `strlen`, `strchr`, `strjoin`, `split`, etc.
- **Conversiones**: `atoi`, `itoa`
- **Asignación de memoria**: `calloc`, `malloc`
- **Operaciones con listas enlazadas**: Estructura `t_list` con operaciones CRUD
- **E/S con file descriptors**: Funciones de escritura a archivos

---

## Instrucciones

### Requisitos Previos

- Compilador GCC o Clang
- Make
- Sistema operativo Unix/Linux o macOS

### Compilación

Para compilar la librería y generar el archivo `libft.a`:

```bash
cd libft
make
```

Esto generará:
- `libft.a`: Archivo de librería estática (object files compilados)
- `*.o`: Archivos objeto compilados

### Limpieza

Para eliminar los archivos objeto:

```bash
make clean
```

Para eliminar todos los archivos generados incluyendo `libft.a`:

```bash
make fclean
```

Para recompilar desde cero:

```bash
make re
```

### Instalación

No se requiere instalación en el sentido tradicional. Para usar Libft en tu proyecto:

1. Copia el contenido de este repositorio en tu directorio de proyecto
2. Incluye `libft.h` en tus archivos C:
   ```c
   #include "libft.h"
   ```
3. Compila tu programa enlazando contra `libft.a`:
   ```bash
   gcc -o mi_programa mi_programa.c libft.a
   ```

---

## Referencia Detallada de la Librería

### 1. Funciones de Validación de Caracteres

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_isalpha(int c)` | Verifica si es letra (a-z, A-Z) | 1 si verdadero, 0 si falso |
| `ft_isdigit(int c)` | Verifica si es dígito (0-9) | 1 si verdadero, 0 si falso |
| `ft_isalnum(int c)` | Verifica si es alfanumérico | 1 si verdadero, 0 si falso |
| `ft_isascii(int c)` | Verifica si está en rango ASCII (0-127) | 1 si verdadero, 0 si falso |
| `ft_isprint(int c)` | Verifica si es carácter imprimible | 1 si verdadero, 0 si falso |

### 2. Funciones de Conversión de Caracteres

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_toupper(int c)` | Convierte a mayúscula | Carácter convertido |
| `ft_tolower(int c)` | Convierte a minúscula | Carácter convertido |

### 3. Funciones de Manipulación de Memoria

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_strlen(const char *s)` | Calcula longitud de string | Longitud (size_t) |
| `ft_memset(void *s, int c, size_t n)` | Rellena memoria con byte | Puntero a memoria |
| `ft_bzero(void *s, size_t n)` | Rellena memoria con ceros | Nada (void) |
| `ft_memcpy(void *dest, const void *src, size_t n)` | Copia memoria (sin solapamiento) | dest |
| `ft_memmove(void *dest, const void *src, size_t n)` | Copia memoria (con solapamiento seguro) | dest |
| `ft_memchr(const void *s, int c, size_t n)` | Busca byte en memoria | Puntero al byte o NULL |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compara bloques de memoria | 0, <0, o >0 |

### 4. Funciones de Manipulación de Strings

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_strlcpy(char *dst, const char *src, size_t size)` | Copia string de forma segura | Longitud total |
| `ft_strlcat(char *dst, const char *src, size_t size)` | Concatena string de forma segura | Longitud total |
| `ft_strchr(const char *s, int c)` | Busca carácter en string | Puntero al carácter o NULL |
| `ft_strrchr(const char *s, int c)` | Busca último carácter en string | Puntero al carácter o NULL |
| `ft_strncmp(const char *s1, const char *s2, size_t n)` | Compara n caracteres | 0, <0, o >0 |
| `ft_strnstr(const char *big, const char *little, size_t len)` | Busca substring en string | Puntero a substring o NULL |
| `ft_atoi(const char *nptr)` | Convierte string a entero | Valor entero |
| `ft_strdup(char *src)` | Duplica string en memoria nueva | Puntero a nuevo string |

### 5. Funciones de Manipulación Avanzada de Strings

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_substr(char const *s, unsigned int start, size_t len)` | Extrae substring | Nuevo string o NULL |
| `ft_strjoin(char const *s1, char const *s2)` | Concatena dos strings | Nuevo string concatenado o NULL |
| `ft_strtrim(char const *s1, char const *set)` | Elimina caracteres de inicio y fin | Nuevo string trimmed o NULL |
| `ft_split(char const *s, char c)` | Divide string por delimitador | Array de strings o NULL |
| `ft_itoa(int n)` | Convierte entero a string | Nuevo string o NULL |
| `ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Aplica función a cada carácter | Nuevo string modificado o NULL |
| `ft_striteri(char *s, void (*f)(unsigned int, char *))` | Itera con índice | Nada (void) |

### 6. Funciones de Asignación de Memoria

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_calloc(size_t nmeb, size_t size)` | Asigna y inicializa memoria a cero | Puntero a memoria o NULL |

### 7. Funciones de E/S con File Descriptors

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_putchar_fd(char c, int fd)` | Escribe carácter a fd | Nada (void) |
| `ft_putstr_fd(char *s, int fd)` | Escribe string a fd | Nada (void) |
| `ft_putendl_fd(char *s, int fd)` | Escribe string con newline a fd | Nada (void) |
| `ft_putnbr_fd(int n, int fd)` | Escribe número a fd | Nada (void) |

### 8. Estructura y Funciones de Listas Enlazadas

#### Estructura t_list

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### Funciones de Listas

| Función | Descripción | Retorna |
|---------|-------------|---------|
| `ft_lstnew(void *content)` | Crea nuevo nodo de lista | Nuevo nodo t_list |
| `ft_lstadd_front(t_list **lst, t_list *new)` | Añade nodo al inicio | Nada (void) |
| `ft_lstsize(t_list *lst)` | Calcula cantidad de nodos | Cantidad (int) |
| `ft_lstlast(t_list *lst)` | Obtiene último nodo | Puntero al último nodo |
| `ft_lstadd_back(t_list **lst, t_list *new)` | Añade nodo al final | Nada (void) |
| `ft_lstdelone(t_list *lst, void (*del)(void *))` | Elimina un nodo | Nada (void) |
| `ft_lstclear(t_list **lst, void (*del)(void *))` | Elimina lista completa | Nada (void) |
| `ft_lstiter(t_list *lst, void (*f)(void *))` | Itera sobre lista | Nada (void) |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Mapea función a lista | Nueva lista transformada |

---

## Recursos

### Documentación Oficial

- **Linux man pages**: `man strlen`, `man memcpy`, `man malloc`, etc.
  - Referencia: https://man7.org/linux/man-pages/

### 42 Madrid Recursos

- **42 Intra**: Plataforma de aprendizaje interna
- **Norminette**: Herramienta de verificación de estilo de código
- **Documentación del proyecto**: Available in 42 Intra

---

## Uso de Inteligencia Artificial

Durante el desarrollo de este proyecto, se utilizó asistencia de IA en las siguientes áreas:

### Tareas con Asistencia de IA

1. **Generación de Tests y Ejemplos** ✅
   - Creación de casos de prueba para validar cada función
   - Generación de ejemplos de uso para la documentación
   - Desarrollo del archivo `test_mains.txt` con mains de ejemplo para cada función

2. **Documentación y README** ✅
   - Estructura y contenido del README.md
   - Descripciones claras de funciones
   - Ejemplos de uso documentados

3. **Optimización y Revisión de Código** ✅
   - Sugerencias de mejoras en eficiencia
   - Validación de edge cases

---

## Notas sobre la Implementación


### Cumplimiento de Normas

Este proyecto cumple con:
- **Norma 42**: Estilo de código de 42 School
- **Norminette**: Validación automática de formato
- **C99 Standard**: Compatible con compiladores GCC/Clang

---

## Testing

Se incluye un archivo `test_mains.txt` con ejemplos de main para cada función. Para compilar y probar una función específica:

```bash
# Ejemplo: Probar ft_strlen
gcc -c libft.h
gcc -o test_strlen test_strlen.c libft.a
./test_strlen
```

---

## Autor

**pnarvaez** - 42 Madrid  
Proyecto realizado como parte del currículo de 42

---

## Licencia

Este proyecto es parte del currículo de 42 y se proporciona tal cual para propósitos educativos.

---

**Última actualización**: Junio 2026
