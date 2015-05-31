#include <iostream>
#include <vector>

using namespace std;
/** \class Класс очередь
*/
class List{
    vector<int> catalog;/**< Переменная типа вектор */
    int countOfFiles;/**< Количество элементов */
public:
    /** \brief Конструктор по умолчанию
    *
    */
    List();
    /** \brief Добавление элемента в очередь
    *
    * \param [in] value - значение элемента
    *
    */
    void add(int);
    /** \brief Удаление элемента
    *
    * \param [in] number - номер элемента
    *
    */
    void del(int);
    /** \brief Метод печати очереди
    *
    */
    void printAll();
    /** \brief Деструктор
    */
    ~List();
};

List::List(){
    countOfFiles = 0;
}
void List::add(int value){
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos){
    int i = 0;
    for (vector<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if (i == pos){
            catalog.erase(it);
        }
        ++i;
    }
}
void List::printAll(){
    for (const auto &it : catalog){
        cout << it << endl;
    }
}
List::~List(){}

int main()
{
    List * catalog = new List();
    int count = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        int number = 0;
        cin >> number;
        catalog->add(number);
    }
    catalog->printAll();
    delete catalog;
    system("pause");
    return 0;
}