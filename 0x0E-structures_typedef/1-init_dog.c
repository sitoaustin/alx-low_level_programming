/**
 * init_dog - a function that initializes a variable type struct
 *
 * @d: the type struct dog
 * @name: variable name
 * @age: variable age
 * @owner: a string, owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
	{
		char *name;
		int age;
		char *owner;
	};
	struct dog dogg;
	struct dogg *d;
	d = &dogg;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
