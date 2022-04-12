/**
 * struct dog - dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Stores dog information
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *, char *, float, char *);
