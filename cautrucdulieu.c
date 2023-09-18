//#include <stdio.h>
//#include <stdlib.h>
// struct node{
//    int data;
//    struct node *next ;
//};
//typedef struct node node ;
//node *makeNode (int x){
//    node *NewNode =(node*)malloc(sizeof(node));
//    NewNode -> data = x;
//    NewNode -> next  =NULL;
//    return NewNode ;
//}
//void duyet(node *head){//hàm duyệt danh sách liên kết
//    while (head !=0){
//        printf ("%d\t",head->data);
//        head = head-> next;
//    }
//    printf ("\n");
//}
//
//int count(node *head){ //hàm đếm số node trong danh sách liên kết
//    int dem=0;
//    while(head!=NULL){
//        ++dem;
//        head=head->next;//địa chỉ của node tiếp theo trong danh sách liên kết gán lại cho head
//    } return dem;
//}
//
//void pushfront (node **head, int x){ //chèn node vào đầu danh sách (**head là con trỏ trỏ đến con trỏ)
//    node *NewNode = makeNode(x);// bước 1:phần next của newnode => head
//    NewNode ->next =*head ;//*head là địa chỉ của node head trong dslk(toán tử giải tham chiếu)
//    //bước 2: cập nhật node head => newnode
//    *head= NewNode ;
//}
//
//void pushback (node **head,int x){ // hàm sẽ sai nếu danh sách lúc đầu rỗng vì lúc đó node Head đã là NULL
//    node *temp = *head;
//    node *NewNode =makeNode (x);
//    // vì vậy cần thêm hàm if sau :
//    if(*head==NULL){
//        *head=NewNode;
//    }
//    while (temp -> next!=NULL){
//        temp=temp->next;
//    }//cho phần next của node temp ->newnode
//    temp->next =NewNode;
//}
//  
//void insert(node **head,int k,int x){ //chèn
//    int n= sizeof(*head);
//    if(k<0||k>n+1) return ;
//    if(k==1) pushfront (&head,x);
//    node *temp=*head;
//    for (int i=1;i<=k-1;i++){
//        temp=temp->next ;
//    }
//    node *NewNode =makeNode(x);
//    NewNode ->next =temp->next;//gán địa chỉ node thứ k cho newnode
//    temp->next=NewNode;//gán địa chỉ của NewNode cho next của temp, để NewNode trở thành node kế tiếp của temp
//}
//
//void deletefront(node **head){
//    if(*head==NULL)return;
//    node *temp=*head; // giải phóng
//    if(temp-> next == NULL) free(temp);
//    if(temp-> next != NULL){
//        *head=(*head) -> next;
//        free (temp);
//    }
//}
//
//void deleteback(node **head){
//    /* B1: Tìm tới node thứ 2 từ cuối lên gọi là temp
//       B2: Cho phần next của temp trỏ vào NULL
//       B3: Giải pgongs node cuối cùng trong DSLK */
//    node *temp=*head;
//    if(*head==NULL) return ; // empty
//    if(temp->next==NULL) { // one element
//        free(temp);
//        free(head);
//    }
//    
//    node *first = *head;
//    node *second;
//    second = first -> next;
//    while(second->next != NULL){
//        first = second;
//        second = second -> next;
//    }
//    first -> next = NULL;
//    free(second);
////    node *last =temp->next;//node cuối
////    temp->next =NULL;
//   // free (temp);
//}
//
//void search(node **head,int x){
//    
//}
//
//void delete(node **head,int k){
//    int n= sizeof(*head);
//    if(k<0||k>n) return ;
//    if(k==1) free(head);
//    else {                                           //    node *first = *head ;
//        node *temp=*head;                            //    node *second;
//        for(int i=1;i<=k-2;i++){                     //    second = first-> next ;
//            temp=temp-> next;                        //    for (int i=1;i<=k-2;i++){
//        }                                            //        first=second;
//        node *kth=temp->next;//node thứ k            //        second=second->next;
//        // k-1 kết nối với k+1                       //    }
//        temp->next=kth->next;                        //    first->next =second->next;
//        free (kth);                                  //    free(second);
//    }
//}
//
//int main (){
//    node *head=NULL;
//    int n;
//    int k;//vị trí muốn chèn vào
//    int number;
////    for(int i=1;i<=5;i++){
////        pushfront (&head,i);
////    }
//    
//    while (1){
//        printf ("1. Chèn trước DSLK \n");
//        printf ("2. Chèn sau DSLK \n");
//        printf ("3. Chèn giữa DSLK \n");
//        printf ("4. Xoá trước DSLK \n");
//        printf ("5. Xoá sau DSLK \n");
//        printf ("6. In ra DSLK \n");
//        printf ("7. Xoá node ở vị trí k \n");
//        printf ("8. Thoát chương trình !\n");
//        printf ("mời nhập lựa chọn từ 1 đến 8 :");
//        scanf ("%d",&n);
//        //printf ( "-----------------------" );
//        
//        switch (n){
//            case (1):
//                printf ("mời bạn nhập số muốn chèn vào đầu DSLK :");
//                scanf ("%d",&number);
//                pushfront (&head,number);
//                break;
//            case (2):
//                printf ("mời bạn nhập số muốn chèn vào sau DSLK :");
//                scanf ("%d",&number);
//                pushback(&head, number);
//                break;
//            case (3):
//                printf ("bạn muốn nhập số bao nhiêu :");
//                scanf ("%d",&number);
//                printf ("bạn muốn vào vị trí nào :");
//                scanf ("%d",&k);
//                insert(&head,k,number);
//                break;
//            case (4):
//                deletefront(&head);
//                break;
//            case (5):
//                deleteback(&head);
//                break;
//            case (6):
//                duyet(head);
//                printf ("số node của danh sách liên kết là :%d",count(head));
//                break;
//            case (7):
//                printf ("xoá node vị trí thứ :");
//                scanf ("%d",&k);
//                delete(&head,k);
//                break;
//            default :
//                printf ("Mời nhập lại theo đúng Menu !\n");
//                continue;
//        }
//    }
//    return 0;
//}
