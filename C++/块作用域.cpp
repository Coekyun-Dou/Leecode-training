#include <iostream>

int main() {
    int a = 10;
    {
        int a = 20;  // �����������
        std::cout << "�����: " << a << std::endl;
    }
    std::cout << "�ⲿ����: " << a << std::endl;
    return 0;
}
