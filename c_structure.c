#include <stdio.h>
#include <string.h>

struct books {
    char title [50];
    char author [50];
    char subject [100];
    int book_id ;
};



int main (){
    struct books book1;     /* declare book1 of type*/
    struct books book2;     /* declare book2 of type*/

    /*book1 specification*/
    strcpy (book1.title , "C programming");
    strcpy (book1.author , "Than Zaw Toe");
    strcpy (book1.subject , "C programming tutorial");
    book1.book_id = 000001;

     /*book2 specification*/
    strcpy (book2.title , "C++ programming");
    strcpy (book2.author , "Maung Maung");
    strcpy (book2.subject , "C++ programming tutorial");
    book2.book_id = 000002;

    /* print book1 */
    printf("Book1 title is : %s\n", book1.title);
    printf("Book1 author is : %s\n", book1.author);
    printf("Book1 subject is : %s\n", book1.subject);
    printf("Book1 book id is : %s\n", book1.book_id);

    /* print book2 */
    printf("Book2 title is : %s\n", book2.title);
    printf("Book2 author is : %s\n", book2.author);
    printf("Book2 subject is : %s\n", book2.subject);
    printf("Book2 book id is : %s\n", book2.book_id);


    return 0 ;
}