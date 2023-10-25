#include <stddef.h>  /* Pour inclure size_t*/

/* Structure pour représenter un élément de la liste */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * listint_len - Retourne le nombre d'éléments dans une liste chaînée de type listint_t.
 * @h: Pointeur vers le premier élément de la liste.
 *
 * Return: Le nombre d'éléments dans la liste.
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        num++;
        h = h->next;
    }

    return (num);
}
