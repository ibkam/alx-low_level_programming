#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: age interger
 * @owner: character string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
