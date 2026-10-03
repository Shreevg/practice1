#ifndef HASHMAP_H
#define HASHMAP_H

struct IntToIntHashMap{
	//TODO: fill this in
};

struct IntToIntHashMap* createIntToIntHashMap(int numBuckets);

void intToIntHashMapInsert(struct IntToIntHashMap* hmap, int key, int value);

int intToIntHashMapGet(struct IntToIntHashMap* hmap, int key);

void intToIntHashMapRemove(struct IntToIntHashMap* hmap, int key);

void destroyIntToIntHashMap(struct IntToIntHashMap* hmap);


struct StrToIntHashMap{
	//TODO: fill this in
};

struct StrToIntHashMap* createStrToIntHashMap(int numBuckets);

void strToIntHashMapInsert(struct StrToIntHashMap* hmap, char* key, int value);

int strToIntHashMapGet(struct StrToIntHashMap* hmap, char* key);

void strToIntHashMapRemove(struct StrToIntHashMap* hmap, char* key);

void destroyStrToIntHashMap(struct StrToIntHashMap* hmap);

#endif // HASHMAP_H
