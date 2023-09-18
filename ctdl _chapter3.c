// /*Khai báo ngăn xếp là một danh sách đặc.last in first out*/
//#include <stdio.h>
//#include <stdlib.h>
//int n=0, st[10000];//st :stack (ngăn xếp)
//void push( int x){ // thêm vào
//    st[n]=x; // st[n] với n là số lượng phần tử trong ngăn xếp
//    ++n ;
//}
//
//void pop (){ //xoá phần tử lấy ra
//    if(n>=1){
////-- n;
//        n=n-1;
//    }
//}
//
//int top(){// lấy phần tử đầu ngăn xếp
//    return st[n-1]; // n-1 là chỉ số cuối cùng trong mảng
//}
//int size(){
//    return n;
//}
//void inds(){
//    int data=st[0];
//    printf ("các phần tử của ds là :");
//    for( int i=0;i<=(n-1);i++){
//        printf ("%d",st[i]);
//        printf ("\t");
//    }
//    //return data;
//}
//
//main (){
//    int lc;
//    int x;
//    while (1){
//        printf ("\n--------------------\n");
//        printf ("1.push \n");
//        printf ("2.pop \n");
//        printf ("3.top \n");
//        printf ("4.in ds từ đáy lên đỉnh\n");
//        printf ("5.thoát \n");
//        printf ("--------------------\n");
//        printf ("moi nhap lựa chọn :");
//        scanf ("%d",&lc);
//        switch (lc){
//            case (1):
//                printf ("nhập x = ");
//                scanf ("%d",&x);
//                push(x);
//                break;
//            case (2):
//                pop();
//                break;
//            case (3):
//               printf("%d",top());
//                break;
//            case (4):
//                inds();
//            case (5):
//                break;
//        }
//    }
//}
//
//
//*Khai báo ngăn xếp là một danh sách liên kết.*
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//struct node {
//    int data;
//    struct node *next ;
//};
//typedef struct node node ;
//node *mackenode(int x){
//    node *newNode =(node*)malloc(sizeof(node));// hàm malloc () cấp phát bộ nhớ
//    newNode->data=x;
//    newNode->next = NULL;
//    return newNode;
//}
//
//void duyet(node *head){
//    while (head!=0){
//        printf ("%d\t",head->data);
//        head=head->next;
//    }
//    printf ("\n");
//}
//void push (node **head,int x){
//    node *newNode = mackenode(x);
//    node *temp=*head;
//    if(*head==0){
//        *head=newNode;
//    }
//    while(temp->next!=NULL) {
//        temp=temp->next;
//    }
//    temp->next=newNode;
//}
//
//void pop(node **head){
//    node *temp=*head;
//    node *second ;
//    if(temp->next==NULL){
//        free (head);
//        free (temp);
//    }
//    while (temp->next!=NULL){
//        second =temp;
//        temp=temp->next;
//    }
//    second->next =NULL;
//    free(temp);
//}
//
//void top(node **head){
//    node *temp=*head;
//    
//    if(temp->next==NULL){
//        printf ("%d",temp->data);
//    }
//    while (temp->next!= NULL){
//        temp=temp->next;
//    }
//    printf ("%d",temp->data);
//}
//
//node* timkiem(node **head ,int x){
//    node *temp=*head;
//    while ((temp->next!=NULL)&&(temp->data !=x)){
//        temp=temp->next;
//        }
//    return temp;
//}
//
//// ham dao nguoc list
//void daodslk(node **head){
//        node *prev   = NULL;
//        node *current=*head;
//
//        node *next;
//        
//       while (current != NULL) {
//          next  = current->next;
//          current->next = prev;
//          prev = current;
//          current = next;
//       }
//        
//       *head=prev;
//    }
//
//main (){
//    
//    node *head=NULL;
//    int lc;
//    int x;
//    for (int i=0;i<=5;i++){
//        push (&head,i);
//    }
//    while (1){
//        printf ("\n--------------------\n");
//        printf ("1.push \n");
//        printf ("2.pop \n");
//        printf ("3.top \n");
//        printf ("4.in ds từ đáy lên đỉnh\n");
//        printf ("5.tìm kiếm ptu trong dslk \n");
//        printf (".thoát \n");
//        printf ("--------------------\n");
//        printf ("moi nhap lựa chọn :");
//        scanf ("%d",&lc);
//        switch (lc){
//            case (1):
//                printf ("nhập x = ");
//                scanf ("%d",&x);
//                push(&head,x);
//                break;
//            case (2):
//                pop(&head);
//                break;
//            case (3):
//               top(&head);
//                break;
//            case (4):
//                duyet(head);
//            case (5):
//                printf ("moi nhap so can tim kiem x =");
//                scanf("%d",&x);
//                timkiem(&head,x);
//                break;
//        }
//    }
//}
//
