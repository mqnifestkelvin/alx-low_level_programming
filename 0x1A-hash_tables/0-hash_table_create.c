#include <stdlib.h>
#include <stdio.h>

hash_table_t *hash_table_t(unsigned long int size)
{
	hash_table_t *hashtable;

	if (!size)
		return (NULL);

	hashtable = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable)
		return (NULL);
	hashtable->size = size;
	hashtable-> = malloc(sizeof(hash_node_t *) * size);

	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL)
	}
}
