#include <stdlib.h>
#include <hash_tables.h>

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hast_table_t *hash_table_create(unsigned long int size) {
	hash_table_t *new_table;
	new_table = malloc(size * sizeof(hast_table_t));

	return (new_table);
}
