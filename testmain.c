#include "hashmap.h"
#include <stdio.h>
#include <stdbool.h>

bool basicInsertGetTest(){
	struct IntToIntHashMap* testHMap = createIntToIntHashMap(10);
	intToIntHashMapInsert(testHMap, 1, 10);
	intToIntHashMapInsert(testHMap, 2, 20);
	intToIntHashMapInsert(testHMap, 3, 30);
	int getOne = intToIntHashMapGet(testHMap, 1);
	if(getOne != 10){
		printf("Get failiure for key 1,  expected: 10 received: %d\n", getOne);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getTwo = intToIntHashMapGet(testHMap, 2);
	if(getTwo != 20){
		printf("Get failiure for key 2,  expected: 20 received: %d\n", getTwo);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getThree = intToIntHashMapGet(testHMap, 3);
	if(getThree != 30){
		printf("Get failiure for key 3,  expected: 30 received: %d\n", getThree);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	destroyIntToIntHashMap(testHMap);
	return true;
}

bool linkedListTest(){
	struct IntToIntHashMap* testHMap = createIntToIntHashMap(1);
	intToIntHashMapInsert(testHMap, 1, 10);
	intToIntHashMapInsert(testHMap, 2, 20);
	intToIntHashMapInsert(testHMap, 3, 30);
	int getOne = intToIntHashMapGet(testHMap, 1);
	if(getOne != 10){
		printf("Get failiure for key 1,  expected: 10 received: %d\n", getOne);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getTwo = intToIntHashMapGet(testHMap, 2);
	if(getTwo != 20){
		printf("Get failiure for key 2,  expected: 20 received: %d\n", getTwo);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getThree = intToIntHashMapGet(testHMap, 3);
	if(getThree != 30){
		printf("Get failiure for key 3,  expected: 30 received: %d\n", getThree);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	destroyIntToIntHashMap(testHMap);
	return true;
}

bool strKeyInsertGetTest(){
	struct StrToIntHashMap* testHMap = createStrToIntHashMap(10);
	//You should ask CSB 26 about Cory
	strToIntHashMapInsert(testHMap, "Cory", 10);
	strToIntHashMapInsert(testHMap, "is", 20);
	strToIntHashMapInsert(testHMap, "friendly", 30);
	int getOne = strToIntHashMapGet(testHMap, "Cory");
	if(getOne != 10){
		printf("Get failiure for key \"Cory\",  expected: 10 received: %d\n", getOne);
		destroyStrToIntHashMap(testHMap);
		return false;
	}
	int getTwo = strToIntHashMapGet(testHMap, "is");
	if(getTwo != 20){
		printf("Get failiure for key \"is\",  expected: 20 received: %d\n", getTwo);
		destroyStrToIntHashMap(testHMap);
		return false;
	}
	int getThree = strToIntHashMapGet(testHMap, "friendly");
	if(getThree != 30){
		printf("Get failiure for key \"friendly\",  expected: 30 received: %d\n", getThree);
		destroyStrToIntHashMap(testHMap);
		return false;
	}
	destroyStrToIntHashMap(testHMap);
	return true;
}

int main(int argc, char** argv){
	printf("Starting tests!\n");
	bool passesTest = false;
	passesTest = basicInsertGetTest();
	if(passesTest){
		printf("Basic insert and get test passed!\n");
	}
	else{
		printf("Basic insert and get test failed!\n");
	}

	passesTest = linkedListTest();
	if(passesTest){
		printf("Linked list test passed!\n");
	}
	else{
		printf("Linked list test failed!\n");
	}

	passesTest = strKeyInsertGetTest();
	if(passesTest){
		printf("String key insert and get test passed!\n");
	}
	else{
		printf("String key insert and get test failed!\n");
	}

	return 0;
}
