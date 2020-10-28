#include <stdlib.h>
#include <string.h>
#include "DoublyLinkedList.h"

#define START_ASCII_DIGIT 48
#define END_ASCII_DIGIT 58
#define MAX_DIGIT_STRING_SIZE 512


static Node* createNode (const Digit digit) {
    return NULL;
};

static int addDigit (DoublyLinkedList* doublyLinkedList, const Digit digit, const unsigned short startOrEnd) {
    return 0;
}

static Digit charToDigit (const char digitChar) {
    return 0;
}

int addDigitAtStart (DoublyLinkedList* doublyLinkedList, const Digit digit) {
    return 0;
}

int addDigitAtEnd (DoublyLinkedList* doublyLinkedList, const Digit digit) {
    return 0;
}

static void deleteNode (Node* node) {
}

int isNodeEmpty (const Node* node) {
    return 0;
}

DoublyLinkedList* createDoublyLinkedList (void) {
    return NULL;
}

DoublyLinkedList* createDoublyLinkedListFromString (const char* digitString) {
    return NULL;
}

char digitToChar (const Digit digit) {
    return 0;
}

void deleteDoublyLinkedList (DoublyLinkedList* doublyLinkedList) {
}

int getDoublyLinkedListLength (const DoublyLinkedList* doublyLinkedList) {
    return 0;
}

void removeStartFromDoublyLinkedList (DoublyLinkedList* doublyLinkedList) {
}

void removeEndFromDoublyLinkedList (DoublyLinkedList* doublyLinkedList) {
}

Digit getDigitByPlaceFromStart (const DoublyLinkedList* doublyLinkedList, unsigned int place) {
    return 0;
}
