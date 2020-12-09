// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

// int IntegerLinkedList::count(int compare) // COMPLETE THIS FOR PROBLEM 2

int IntegerLinkedList::countRecurse (SNode *ptr, int compare) {
  // COMPLETE THIS FOR PROBLEM 3
  if (ptr == nullptr)
  {
    return 0;
  }
  if (ptr->elem == compare)
  {
    return 1 + countRecurse(ptr->next, compare);
  }
  else
  {
    return countRecurse(ptr->next, compare);
  }
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::countRecurseHelper (int compare) {
  return countRecurse(head, compare);
}
