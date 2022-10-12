#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: age interger
 * @owner: character string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
#endif
