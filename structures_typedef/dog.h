#ifndef HEADER
#define HEADER dog.h
/**
 * struct dog - New struct dog with name, age, owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
*/
struct dog
{
	char *name;
	float age;
	char  *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
