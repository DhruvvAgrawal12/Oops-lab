#include<iostream>
using namespace std;
class Books
{
private:
   static int countBook;
   string bookName;
   string bookId;
   static int login;
public:
    Books(){
        countBook=countBook+1;
        login = login+1;
    }
    Books(string bookName){
          countBook=countBook+1;
       this->bookName=bookName;
       bookId="PCE";
       bookId=bookId+ to_string(countBook);
       }
    void display(){
        cout<<"book name is : "<<bookName<<endl;
        cout<<"book id is : " <<bookId<<endl;
    }
    
};
int Books::countBook=100;
int main(){
    Books b1("maths");
    b1.display();
    Books b2("physics");
    b2.display();
    Books b3("chemistry");
    b3.display();
}
