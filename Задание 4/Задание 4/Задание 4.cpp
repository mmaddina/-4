// Задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon {
private:
    string name;
    int damage;
    int weight;

public:
    friend class Characteristic;
    void setName(string W_name) { name = W_name; }
    void setDamage(int W_damage) { damage = W_damage; }
    void setWeight(int W_weight) { weight = W_weight; }

    void getName() {
        cout << endl << "Name: " << name << endl;
    }

    void getDamage() {
        cout << "Damage: " << damage << endl;
    }

    void getWeight() {
        cout << "Weight: " << weight << endl << endl;
    }

    bool Wcheck() {
        setlocale(LC_ALL, "");
        int Wmax;
        cout << "Максимальный вес: ";
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
};

class Characteristic {
private:
    int strength;
public:
    void setPower(int P_Power) { strength = P_Power; }
    int GetDamage(Weapon& W) {
        return strength + W.damage;
    }
};

int main() {
    string name;
    int damage;
    int weight;
    int strength;

    Characteristic C1;
    cin >> strength;
    C1.setPower(strength);

    Weapon W1;
    cin >> name;
    W1.setName(name);
    cin >> damage;
    W1.setDamage(damage);
    cin >> weight;
    W1.setWeight(weight);
    W1.getName();
    W1.getDamage();
    W1.getWeight();


    cout << endl;
    cout << "Damage per hit: " << C1.GetDamage(W1) << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
