#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: the new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nLen = 0;
	int oLen = 0;
	int i;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	while (name[nLen++])
		;
	while (owner[oLen++])
		;

	ndog->name = malloc(nLen * sizeof(ndog->name));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= nLen; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	ndog->owner = malloc(oLen * sizeof(ndog->owner));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= oLen; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}
