#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "²��p���" << endl;

    // Ū���Ĥ@�ӼƦr
    cout << "�п�J�Ĥ@�ӼƦr: ";
    if (!(cin >> num1)) {
        cout << "��J���~�C" << endl;
        return 1;
    }

    // Ū���B���
    cout << "�п�J�B��� (+, -, *, /): ";
    cin >> operation;

    // Ū���ĤG�ӼƦr
    cout << "�п�J�ĤG�ӼƦr: ";
    if (!(cin >> num2)) {
        cout << "��J���~�C" << endl;
        return 1;
    }

    // �ھڹB��Ű���������B��ëO�s���G
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "���~: ���Ƥ��ର0�C" << endl;
                return 1; // �קK��ܿ��~���G
            }
            result = num1 / num2;
            break;
        default:
            cout << "�L�Ī��B��šC" << endl;
            return 1;
    }

    // ��X���G
    cout << "���G: " << result << endl;

    return 0;
}
