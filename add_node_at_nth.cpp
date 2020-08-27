

void insert_at_nth(int element,int pos,Node ** head){
    Node* node1 = new Node();
    node1->data = element;
    node1->link = NULL;
    if(pos==1){
            /*if an element is to be assigned at the first position , the address of the new node is to be stored
            in the head and the address of the previous first node is to be stored in the link of of the new first node*/
        node1->link = *head;
        *head = node1;
        return;
    }
    Node* node2 = *head;
    // tarverse to the node just before the position where the node is to be inserted at
    for(int i = 0;i<pos-2;i++){
        node2 = node2->link;
    }
    //store the address of the previous next node to the new node's link
    node1->link = node2->link;
    //store the address of the new node to the previous node's link
    node2->link = node1;
}

void add_node_at_nth(){
    Node* head = new Node();
    head = NULL;
    insert_at_nth(2,1,&head);
    insert_at_nth(3,2,&head);
    insert_at_nth(4,1,&head);
    insert_at_nth(5,2,&head);
    print(head);
}
