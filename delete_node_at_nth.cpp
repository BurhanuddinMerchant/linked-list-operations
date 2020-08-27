void delete_nth_node(int n,Node* *head){
    Node *node1 = *head;
    if(n==1){
        *head = node1->link;
        delete node1;
        return;
    }
    for(int i=0;i<n-2;i++){
        node1 = node1->link;
    }
    Node *node2 = node1->link;
    node1->link = node2->link;
    delete node2;
}

//inserts an element at the head node of the linked list
void Insert_elements_deleting_ll(int element,Node**head){

    //dynamically allocate a new node
    Node* node = new Node();
    //allocate the data 'element' to the node
    node->data = element;
    // make it point to the first node that had the data parameter in the linked list (NULL only if head is NULL i.e. empty list)
    node->link = *head;
    //assign the node pointer to the head (i.e. the head now points to the new node instead of the previous first node and node is the new first node of the linked list)
    *head = node;
}


void delete_node(){
    Node* head = new Node();
    head = NULL;
    Insert_elements_deleting_ll(2,&head);
    Insert_elements_deleting_ll(4,&head);
    Insert_elements_deleting_ll(6,&head);
    Insert_elements_deleting_ll(5,&head);
    print(head);
    int n;
    cout<<"Enter the node position which is to be deleted : ";
    cin>>n;
    delete_nth_node(n,&head);
    print(head);
}
