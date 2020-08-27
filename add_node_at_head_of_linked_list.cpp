//this code is used to implement the appending element to a linked list at the very beginning (next to head)

//inserts an element at the head node of the linked list
void Insert(int element,Node**head){

    //dynamically allocate a new node
    Node* node = new Node();
    //allocate the data 'element' to the node
    node->data = element;
    // make it point to the first node that had the data parameter in the linked list (NULL only if head is NULL i.e. empty list)
    node->link = *head;
    //assign the node pointer to the head (i.e. the head now points to the new node instead of the previous first node and node is the new first node of the linked list)
    *head = node;
}


void add_node_at_beginning()
{
    //dynamically initialize a new node called the head node .
    Node* head = new Node();
    //Initially the address it points to is NULL as no elements are added to the linked list
    head = NULL;
    int n;
    cout<<"Enter the number of elements to be added to the linked list : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter the element to be inserted : ";
        cin>>element;
        //insert element to the linked list ,also passed the address to the head pointer as reference to the start of the linked list.
        Insert(element,&head);
        //print linked list
        print(head);
    }
}
