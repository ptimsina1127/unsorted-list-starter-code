
#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length=0;
    currentPos = 0;
}

void UnsortedList::MakeEmpty() {
    length=0;
}

bool UnsortedList::IsFull() const {
    return (MAX_ITEMS==length);
}

int UnsortedList::GetLength() const {
    return length;
}

bool UnsortedList::Contains(int someItem) {
    //look at all values in array
    for(int i = 0; i < length; i++){
        if (arr[i]==someItem){
            return true;
        }
    }
    //since non of the values in the array returned true, We know someItem is not in array.
    return false;
}

void UnsortedList::AddItem(int item) {
   // if(length<MAX_ITEMS){
   if(!IsFull()){
        arr[length]=item;
        ++length;
    }
}

void UnsortedList::DeleteItem(int item) {
    //Find item
    for (int i = 0; i<length;i++){
        //found the item
        if (arr[i]==item){
            arr[i]=arr[length-1];
            length--;
            return;
        }
    }
}

void UnsortedList::ResetIterator() {

}

int UnsortedList::GetNextItem() {
    return 0;
}

