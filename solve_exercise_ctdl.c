//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct sv {
//    char* ten;
//    char* mssv;
//    float dtb;
//};
//typedef struct sv *sv;
//struct node {
//    sv *infor;
//    struct node* next;
//};
//typedef struct node sinhvien ;
//
//sinhvien *makenode (sv x){
//    sinhvien *newnode=(sinhvien*)malloc(sizeof(newnode));
//    newnode->infor=x;
//    newnode->next =NULL;
//    return newnode ;
//}
//
//void addlast(sinhvien **head,sv x){
//    sinhvien *newnode =makenode(x);
//    sinhvien *temp=*head;
//    if(temp==NULL){
//        newnode=*head;
//    }
//    if(temp->next!=NULL){
//        temp=temp->next;
//    }
//    temp->next=newnode;
//    newnode->next =NULL;
//}
//
//void input (sinhvien **head, sv x)
//{
//    int option ;
//    printf ("nhap phim 1 de tiep tuc them sinh vien vao danh sach \n");
//    printf ("nhap phim 0 de dung them sinh vien vao danh sach\n ");
//    printf ("moi ban nhap:"); scanf ("%d",&option);
//    
//  do{
//        if (option==0) break ;
//      printf ("\nten :");fflush(stdin) ;gets(x->ten);
//      printf ("\nmssv :");fflush(stdin) ;gets(x->mssv);
//        printf ("\ndtb :"); scanf ("%f",x->dtb);
//        sinhvien *newnode=makenode(x);
//                addlast(&head,x);
//            } while (1);
//    
//}
//
//void duyet (sinhvien *head,sv x){
//    while (head!=0){
//        printf ("\n%s",x->ten);
//        printf ("\n%s",x->mssv);
//        printf ("\n%f",x->dtb);
//        head=head->next;
//    }
//    printf ("\n");
//}
//
//void hsg(sinhvien *head,sv x){
//    while (head!=0){
//        if((x->dtb)>=8.0){
//            printf ("\n%s",x->ten);
//            printf ("\n%s",x->mssv);
//            printf ("\n%f",x->dtb);
//            head=head->next;
//        }
//    }
//}
//
//void sapxep(sinhvien **head){
//    for(sinhvien *i=*head;i!=NULL;i=i->next){
//        sinhvien *minnode=i;
//        for(sinhvien *j=i->next;j!=NULL;j=j->next){
//            if((minnode->x->infor.dtb)>(j->infor->dtb)){
//                minnode=j;
//            }
//               float temp = minnode->infor->dtb;
//               minnode->infor.dtb = j->infor.dtb;
//               j->infor->dtb=temp;
//        }
//    }
//}
//
//void timdiemcao(sinhvien **head,sv x){
//    sapxep(&head);
//    sinvien *temp=*head;
//    while(temp!=NULL){
//        temp=temp->next;
//    }
//    printf ("%f",temp->dtb);
//}
//
//main (){
//    sv x;
//    sinhvien *head=NULL;
//    int option ;
//    input (&head,x);
//    duyet (head,x);
//}
