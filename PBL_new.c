//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//struct Contact {
//    char name[100];
//    char phonenumber[100];
//    char address[100];
//    char province[100];
//};
//
//char* trim(char s[]);// xoá các kí tự trắng, kí tự xuống dòng, kí tự chuyển tab dầu và cuối chuỗi
//struct Contact* readContactFromLocal(const char* pathFile, int* count, struct Contact* contacts);//đọc dữ liệu từ file path
//void addContactToLocalFile(const struct Contact* contact, const char* pathFile);// thêm 1 contact vào file path
//void getListContact(const char* path); // lấy danh sách contact và in ra màn hình
//void printlistcontact(struct Contact* contacts,int contactcount);//in danh sách các liên hệ ra màn hình
//void findNumberPhoneDuplicate(char* path,struct Contact *contacts,int contactcount); // tìm kiếm các số điện thoại trùng nhau trong tỉnh
//void getListContactByProvince(char* path, char* province,struct Contact *contacts,int contactcount); //tìm kiếm và in ra các contact trong tỉnh tinh
//void findContactByPhoneNumber(char* path, char* phoneNumber,struct Contact *contacts,int contactcount); //tim kiem và in ra các contact có số điện thoại sdt
//void findContactByAddress(char* path, char* Adress,struct Contact *contacts,int contactcount); //tim kiem và in ra các contact có địa chỉ Address
//void writetofile(char* fileout,struct Contact* contacts,int count);// in danh sach cac lien he ra file out
//void xoa(char* path,struct Contact Newcontact,struct Contact* contacts, int *contactcount);//xoa 1 lien he bang so dien thoai, ten hoac dia chi
//void InsertContact(struct Contact NewContact, int *contactcount,struct Contact* contacts);// them contact nhập từ bàn phím
//
//int main() {
//    struct Contact* contacts;
//    char path[] = "phonenumber.txt";
//    int contactcount;
//    contacts = readContactFromLocal(path, &contactcount,contacts);
//    int optional;
//    do {
//        printf("\n\n\t\t DANH BẠ ĐIỆN THOẠI:\n");
//        printf("+");for(int i=0;i<60;i++) printf("-");printf("+\n");
//        printf("| %-59s|\n","1. Lấy danh sách contact trong file");
//        printf("| %-59s|\n","2. Tìm các số điện thoại trùng nhau và xóa");
//        printf("| %-59s|\n","3. Liệt kê danh bạ từng tỉnh");
//        printf("| %-59s|\n","4. Tìm kiếm liên hệ theo số điện thoại");
//        printf("| %-59s|\n","5. Tìm kiếm liên hệ theo địa chỉ");
//        printf("| %-59s|\n","6. Tìm kiếm liên hệ theo tên");
//        printf("| %-59s|\n","7. Thêm liên hệ");
//        printf("| %-59s|\n","8. Xóa liên hệ");
//        printf("| %-59s|\n","9. In danh sách liên hệ ra file phonenumberout.txt");
//        printf("| %-59s|\n","10. Thoát chương trình");
//        printf("+");for(int i=0;i<60;i++) printf("-");printf("+\n\n");
//        printf("Mời bạn nhập lựa chọn: ");
//        scanf("%d", &optional);
//
//        if (optional == 10) break;
//        struct Contact Newcontact;
//        char tinh[100];
//        char sdt[11];
//        char Address[100];
//        char infor[100];
//        switch (optional) {
//            case 1:
//                getListContact(path);
//                break;
//
//            case 2:
//                findNumberPhoneDuplicate(path,contacts,contactcount);
//                break;
//
//            case 3:
//                printf("Nhập tỉnh cần liệt kê danh bạ: ");
//                getchar(); // Để xóa bộ đệm nhập trước đó
//                fgets(tinh, sizeof(tinh), stdin);
//                strcpy(tinh,trim(tinh));
//                getListContactByProvince(path, tinh,contacts,contactcount);
//                break;
//
//            case 4:
//                printf("Nhập số điện thoại cần tìm kiếm: ");
//                getchar(); // Để xóa bộ đệm nhập trước đó
//                fgets(sdt, sizeof(sdt), stdin);
//                strcpy(sdt,trim(sdt));
//                findContactByPhoneNumber(path, sdt,contacts,contactcount);
//                break;
//            case 5:
//                printf("Nhập đia chỉ cần tìm kiếm: ");
//                getchar(); // Để xóa bộ đệm nhập trước đó
//                fgets(Address, sizeof(Address), stdin);
//                strcpy(Address,trim(Address));
//                findContactByAddress(path, Address,contacts,contactcount);
//                break;
//            case 6:
//                printf("Nhập tên liên lạc cần tìm kiếm: ");
//                getchar(); // Để xóa bộ đệm nhập trước đó
//                fgets(infor, sizeof(infor), stdin);
//                strcpy(infor,trim(infor));
//                findContactByAddress(path, infor,contacts,contactcount);
//                break;
//            case 9:
//                writetofile("phonenumberout.txt", contacts, contactcount);
//                printf("Danh sách đã được in ra file phonenumberout.txt\n");
//                free(contacts);
//                break;
//
//            case 8:
//                struct Contact NewContact;
//                getchar();
//                printf ("Nhập tên:");
//                fgets(NewContact.name,sizeof(NewContact),stdin);
//                strcpy(NewContact.name,trim(NewContact.name));
//                printf ("Nhập số điện thoại:");
//                fgets(NewContact.phonenumber,sizeof(NewContact),stdin);
//                strcpy(NewContact.phonenumber,trim(NewContact.phonenumber));
//                printf ("Nhập tỉnh:");
//                fgets(NewContact.province,sizeof(NewContact),stdin);
//                strcpy(NewContact.province,trim(NewContact.province));
//                printf ("Nhập địa chỉ:");
//                fgets(NewContact.address,sizeof(NewContact),stdin);
//                strcpy(NewContact.address,trim(NewContact.address));
//                xoa(path,NewContact,contacts,&contactcount);
//                break;
//            case 7:
//                getchar();
//                printf ("Nhập tên:");
//                fgets(NewContact.name,sizeof(NewContact),stdin);
//                strcpy(NewContact.name,trim(NewContact.name));
//                printf ("Nhập số điện thoại:");
//                fgets(NewContact.phonenumber,sizeof(NewContact),stdin);
//                strcpy(NewContact.phonenumber,trim(NewContact.phonenumber));
//                printf ("Nhập tỉnh:");
//                fgets(NewContact.province,sizeof(NewContact),stdin);
//                strcpy(NewContact.province,trim(NewContact.province));
//                printf ("Nhập địa chỉ:");
//                fgets(NewContact.address,sizeof(NewContact),stdin);
//                strcpy(NewContact.address,trim(NewContact.address));
//                contacts = (struct Contact*)realloc(contacts, (contactcount+1) * sizeof(struct Contact));
//                InsertContact(NewContact,&contactcount,contacts);
//                printlistcontact(contacts,contactcount);
//                break;
//            case 10:
//                break;
//
//            default:
//                printf("Vui long nhap cac so tu 1 den 8\n");
//                continue;
//        }
//
//    } while (getch() =='y');//getchar là nhập vào 1 kí tự ,mà ko cần phải định dạng như khi dùng scanf("%c",&)
//    return 0;
//}
//
//char* trim(char s[]){
//    while(s[0]==' '||s[0]=='\n'||s[0]=='\t')
//        for(int i=0;i<strlen(s);i++) s[i]=s[i+1];
//    while(s[strlen(s)-1]==' '||s[strlen(s)-1]=='\n'||s[strlen(s)-1]=='\t') s[strlen(s)-1]='\0';
//    return s;
//}
//struct Contact* readContactFromLocal(const char* pathFile, int* count,struct Contact* contacts) {
//    FILE* myFile = fopen(pathFile, "r"); // con trỏ kiểu tệp.
//    char line[100];
//    *count = 0;
//    contacts=NULL;
//    if (myFile == NULL) {
//        printf("Error opening file.\n");
//        return NULL;
//    }
//
//    char provinceName[100] = "";
//
//    while (fgets(line, sizeof(line), myFile)) {//Hàm fgets() trong C được sử dụng để đọc một dòng ký tự từ một file đã cho.
//        
//
//        if (strlen(line) == 0) continue;
//
//        if (strchr(line, '|') == NULL) {//tìm kiếm sự xuất hiện đầu tiên của ký tự '|'
//            strcpy(provinceName, line);
//            continue;
//        }
//
//        char* address = strtok(line, "|");//trả về chuỗi con từ đầu chuỗi `line` đến ký tự `|` đầu tiên
//        char* name = strtok(NULL, "|");//trả về chuỗi con từ ký tự `|` đầu tiên đến ký tự `|` thứ hai
//        char* phoneNumber = strtok(NULL, "|");// trả về chuỗi con từ ký tự `|` thứ hai đến cuối chuỗi `line`.
//
//        struct Contact contact;
//        strcpy(contact.address, trim(address));
//        strcpy(contact.name, trim(name));
//        strcpy(contact.phonenumber, trim(phoneNumber));
//        strcpy(contact.province, trim(provinceName));
//
//        (*count)++;
//        //sử dụng hàm realloc để cấp phát lại bộ nhớ cho mảng contacts với kích thước bằng (*count) * sizeof(struct Contact), nghĩa là kích thước của mảng được tăng lên 1 phần tử.
//        contacts = (struct Contact*)realloc(contacts, (*count) * sizeof(struct Contact));
//        contacts[(*count) - 1] = contact;
//    }
//
//    fclose(myFile);
//    return contacts;
//}
//
//void addContactToLocalFile(const struct Contact* contact, const char* pathFile) {
//    FILE* file = fopen(pathFile, "a");
//    if (file == NULL) {
//        printf("Cannot open file: %s\n", pathFile);
//        return;
//    }
//
//    char content[256];
//    sprintf(content, "%s|%s|%s\n", contact->address, contact->name, contact->phonenumber);
//    fputs(content, file); //Hàm fputs() trong C được sử dụng để ghi một chuỗi ký tự vào file.
//
//    fclose(file);
//}
//
//void getListContact(const char* path) {
//    int count;
//    struct Contact* contacts = readContactFromLocal(path, &count,contacts);
//
//    if (contacts != NULL) {
//        printlistcontact(contacts,count);
//    }
//}
//
//void printlistcontact(struct Contact* contacts, int contactcount){
//    printf( "+--------------------|--------------------|-------------------------|--------------------+\n");
//    printf("|%-20s|%-20s|%-25s|%-20s|\n","PROVINCE","NAME","ADDRESS","PHONENUMBER");
//    printf( "+--------------------|--------------------|-------------------------|--------------------+\n");
//    for(int i=0;i<contactcount;i++){
//        printf("|%-20s|%-20s|%-25s|%-20s|\n",contacts[i].province,contacts[i].name,contacts[i].address,contacts[i].phonenumber);
//    }
//    printf( "+--------------------|--------------------|-------------------------|--------------------+\n");
//    return;
//}
//void deletecontact(struct Contact* contacts,int *contactcount,int x){
//    for(int i=x;i<*contactcount;i++) contacts[i]=contacts[i+1];
//    (*contactcount)--;
//}
//// Tìm số điện thoại trùng lặp theo tỉnh
//
//void findNumberPhoneDuplicate(char* path, struct Contact* contacts, int contactcount) {
//    for (int x = 0; x < contactcount-1; ++x) {
//        int count = 0;
//        int listDuplicateContact[1000];
//        listDuplicateContact[0] = x;
//        for (int y = x + 1; y < contactcount; y++) {
//            struct Contact current = contacts[y];
//            if (strcmp(contacts[x].phonenumber, current.phonenumber) == 0 &&
//                strcmp(contacts[x].province, current.province) == 0) {
//                ++count;
//                listDuplicateContact[count] = y;
//            }
//        }
//
//        if (count >= 1) {
//            for (int i = 0; i <= count; i++) {
//                printf("%d|%-20s|%-20s|%-25s|%-20s|\n",
//                       listDuplicateContact[i], contacts[listDuplicateContact[i]].name,
//                       contacts[listDuplicateContact[i]].phonenumber,
//                       contacts[listDuplicateContact[i]].address, contacts[listDuplicateContact[i]].province);
//            }
//            printf("\nNhập số thứ tự contact bạn muốn xóa hoặc nhập -1 để không xóa\n");
//            int optional;
//            scanf("%d", &optional);
//            deletecontact(contacts, &contactcount, optional);
//        }
//    }
//    printlistcontact(contacts, contactcount);
//}
//
//
//
//void getListContactByProvince(char* path, char* province,struct Contact *contacts,int contactcount) {
//    int found = 0;
//    struct Contact* list=NULL;
//    for (int i = 0; i < contactcount; ++i) {
//        if(strcmp(contacts[i].province,province)==0){
//            list = (struct Contact*)realloc(list, (found+1) * sizeof(struct Contact));
//            list[found] = contacts[i];
//            found++;
//        }
//    }
//    if(!found) printf("Không có contact nào trong %s",province);
//    else{
//        printf("Danh sách các contact trong tỉnh %s:\n", province);
//        printlistcontact(list,found);
//    }
//}
//
//void findContactByName(char* path, char* infor,struct Contact *contacts, int contactcount){
//    struct Contact* list;
//    int found = 0;
//    for (int i = 0; i < contactcount; ++i) {
//        if (strcmp(contacts[i].name, infor) == 0) {
//            list = (struct Contact*)realloc(list, (found+1) * sizeof(struct Contact));
//            list[found] = contacts[i];
//            found ++;
//        }
//    }
//    if (!found) {
//        printf("Không tìm thấy contact có tên %s\n", infor);
//    }
//    else{
//        printf("các contact có tên là %s la:\n", infor);
//        printlistcontact(list,found);
//
//    }
//}
//
//void findContactByPhoneNumber(char* path, char* phoneNumber,struct Contact *contacts, int contactcount){
//    struct Contact* list;
//
//    int found = 0;
//    for (int i = 0; i < contactcount; ++i) {
//        if (strcmp(contacts[i].phonenumber, phoneNumber) == 0) {
//            list = (struct Contact*)realloc(list, (found+1) * sizeof(struct Contact));
//            list[found] = contacts[i];
//            found ++;
//        }
//    }
//    if (!found) {
//        printf("Không tìm thấy contact co so dien thoai %s\n", phoneNumber);
//    }
//    else {
//        printf("Các contact có số điện thoại %s là:\n",phoneNumber);
//        printlistcontact(list,found);
//
//    }
//}
//void findContactByAddress(char* path, char* Address,struct Contact *contacts,int contactcount){
//    struct Contact* list;
//
//    int found = 0;
//    for (int i = 0; i < contactcount; ++i) {
//        if (strcmp(contacts[i].address, Address) == 0) {
//            list = (struct Contact*)realloc(list, (found+1) * sizeof(struct Contact));
//            list[found] = contacts[i];
//            found ++;
//        }
//    }
//    if (!found) {
//        printf("Không tìm thấy contact co địa chỉ %s\n", Address);
//    }
//    else {
//        printf("Các contact có địa chỉ %s là :\n",Address);
//        printlistcontact(list,found);
//    }
//}
//void writetofile(char* fileout, struct Contact* contacts, int count) {
//    FILE* f = fopen(fileout, "w");
//    if (f == NULL) {
//        printf("Cannot open file: %s\n", fileout);
//        return;
//    }
//
//    fprintf(f, "+-------------------------|-------------------------|-------------------------|-------------------------+\n");
//    fprintf(f, "|%-25s|%-25s|%-25s|%-25s|\n", "PROVINCE", "NAME", "ADDRESS", "PHONENUMBER");
//    fprintf(f, "+-------------------------|-------------------------|-------------------------|-------------------------+\n");
//
//
//    for (int i = 0; i < count; i++) {
//        fprintf(f, "|%-25s|%-25s|%-25s|%-25s|\n", contacts[i].province, contacts[i].name, contacts[i].address, contacts[i].phonenumber);
//    }
//
//    fprintf(f, "+-------------------------|-------------------------|-------------------------|-------------------------+\n");
//    fclose(f);
//}
//void xoa(char* path,struct Contact Newcontact,struct Contact* contacts, int *contactcount){
//    int found=0;
//    for(int i=0;i<*contactcount;i++){
//        if(strcmp(contacts[i].address,Newcontact.address)==0 && strcmp(contacts[i].name,Newcontact.name)==0 && strcmp(contacts[i].phonenumber,Newcontact.phonenumber)==0 && strcmp(contacts[i].province,Newcontact.province)==0){
//            deletecontact(contacts,contactcount,i);
//            found = 1;
//        }
//    }
//    if(found==0) printf("liên hệ không có trong danh sách\n");
//    else printf ("Đã xóa liên hệ thành công");
//    printlistcontact(contacts,*contactcount);
//}
//
//void InsertContact(struct Contact NewContact, int *contactcount, struct Contact* contacts) {
//
//    int i, j;
//    // Tìm vị trí chèn mới theo thứ tự tên
//    for (i = 0; i < *contactcount; i++) {
//        if (strcmp(NewContact.province, contacts[i].province) == 0)
//            break;
//    }
//    // Dịch chuyển các phần tử phía sau để tạo vị trí cho liên hệ mới
//    for (j = *contactcount; j > i; j--) {
//        contacts[j] = contacts[j - 1];
//    }
//    // Chèn liên hệ mới vào vị trí tìm được
//    contacts[i] = NewContact;
//    (*contactcount)++;
//    printf ("Đã thêm liên hệ thành công");
//    return;
//
//}
//
