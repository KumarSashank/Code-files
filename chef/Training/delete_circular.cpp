LinkedListNode *deleteatBegining(LinkedListNode *tail)
{
    LinkedListNode *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    return tail;
}

LinkedListNode *deleteTail(Linkedlistnode *tail)
{
    LinkedlistNode *t = tail;
    if (tail->next == tail)
    {
        tail = NULL;
    }
}