#ifndef DOG_HEADER
#define DOG_HEADER

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_HEADER */
