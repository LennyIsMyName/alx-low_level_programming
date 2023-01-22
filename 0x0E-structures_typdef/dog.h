#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: owner
 */

struct 
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog mi_dog;
void asn_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H */
