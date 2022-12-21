// Лаба 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Задание 1
/*
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon {
public:
    string name;
    int damage;
    int weight;

    Weapon(string name, int damage, int weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    };
    Weapon() {
        this->name = "Rifle";
        this->damage = 45;
        this->weight = 10;
    };

    void Lists() {
        cout << endl << "Name: " << name << endl << "DMG: " << damage << endl << "Weight: " << weight << endl << endl;
    }
};

int main() {
    Weapon Weapon1("Machine gun", 29, 7);
    Weapon1.Lists();

    Weapon Weapon2 = Weapon();
    Weapon2.Lists();
}
*/




//Задание 2
/*
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon {
public:
    string name;
    int damage;
    int weight;

    Weapon(string name, int damage, int weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    };

    Weapon() {
        this->name = "Rifle";
        this->damage = 45;
        this->weight = 10;
    };

    ~Weapon() {
        cout << name << " is deleted" << endl;
    }

    void Lists() {
        cout << "Name: " << name << endl << "DMG: " << damage << endl << "Weight: " << weight << endl << endl;
    }

};

int main() {
    Weapon W1("Machine gun", 29, 7);
    W1.Lists();

    Weapon W2 = Weapon();
    W2.Lists();
}
*/
// Задание2(продолжение)
/*
#include <iostream>
using namespace std;
using std::cout;
using std::endl;


class Weapon {
public:
    string name;
    int damage;
    int weight;

    Weapon(string name, int damage, int weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    };

    Weapon() {
        this->name = "Rifle";
        this->damage = 45;
        this->weight = 10;
    };

    void Lists() {
        cout << endl << "Name: " << name << endl << "Damage: " << damage << endl << "Weight: " << weight << endl << endl;
    }

    bool Wcheck() {
        setlocale(LC_ALL, "");

        int Wmax;
        cout << "Maксимальный вес: ";
        cin >> Wmax;
        if (Wmax >= weight) {
            cout << "Сможет поднять" << endl;
            return true;
        }
        else {
            cout << "Не сможет поднять" << endl;
            return false;
        }
    }

    int summ1(int _weight) {
        return _weight + weight;
    }

    int Wsum(Weapon& W) {
        return summ1(W.weight);
    }
};

int main() {
    Weapon W1("Machine gun", 29, 7);
    W1.Lists();
    W1.Wcheck();

    Weapon W2 = Weapon();
    W2.Lists();
    W2.Wcheck();

    cout << endl;
    cout << "Суммарный вес оружия: " << W1.Wsum(W2) << endl;
}
*/



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
