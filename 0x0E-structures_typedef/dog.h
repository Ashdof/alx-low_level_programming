#ifndef DOG_HEADER
#define DOG_HEADER

/** dog_t: a dog struct
 * @name: name of dog
 * @age: age of dog
 * :owner: owner of dog
 *
 * description: defines a new dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/** dog_t - define a new struct of type dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_HEADER */
