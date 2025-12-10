#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    /* Cas classique du projet */
    int array1[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    /* Déjà trié */
    int array2[] = {1, 2, 3, 4, 5, 6};
    size_t size2 = sizeof(array2) / sizeof(array2[0]);

    /* Tri décroissant au départ */
    int array3[] = {6, 5, 4, 3, 2, 1};
    size_t size3 = sizeof(array3) / sizeof(array3[0]);

    /* Tous égaux */
    int array4[] = {42, 42, 42, 42, 42};
    size_t size4 = sizeof(array4) / sizeof(array4[0]);

    /* Taille 1 */
    int array5[] = {98};
    size_t size5 = sizeof(array5) / sizeof(array5[0]);

    /* Taille 2 */
    int array6[] = {9, 1};
    size_t size6 = sizeof(array6) / sizeof(array6[0]);

    /* Tableau vide (size = 0) */
    int *array7 = NULL;
    size_t size7 = 0;

    printf("=== Test 1 : tableau classique ===\n");
    print_array(array1, size1);
	printf("\n");
    quick_sort(array1, size1);
	printf("\n");
    print_array(array1, size1);
    printf("\n");

    printf("=== Test 2 : déjà trié ===\n");
    print_array(array2, size2);
    quick_sort(array2, size2);
    print_array(array2, size2);
    printf("\n");

    printf("=== Test 3 : inversé ===\n");
    print_array(array3, size3);
    quick_sort(array3, size3);
    print_array(array3, size3);
    printf("\n");

    printf("=== Test 4 : tous égaux ===\n");
    print_array(array4, size4);
    quick_sort(array4, size4);
    print_array(array4, size4);
    printf("\n");

    printf("=== Test 5 : taille 1 ===\n");
    print_array(array5, size5);
    quick_sort(array5, size5);
    print_array(array5, size5);
    printf("\n");

    printf("=== Test 6 : taille 2 ===\n");
    print_array(array6, size6);
    quick_sort(array6, size6);
    print_array(array6, size6);
    printf("\n");

    printf("=== Test 7 : tableau NULL, size = 0 ===\n");
    quick_sort(array7, size7);
    printf("OK (pas de segfault)\n");

    return (0);
}
