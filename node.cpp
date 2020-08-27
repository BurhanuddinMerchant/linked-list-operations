class Node{
public:
    int data;
    Node* link;
};
void print(Node* head){
    Node* node = head;
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->link;
    }
    cout<<"\n";
}
