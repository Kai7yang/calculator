#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "簡單計算機" << endl;

    // 讀取第一個數字
    cout << "請輸入第一個數字: ";
    if (!(cin >> num1)) {
        cout << "輸入錯誤。" << endl;
        return 1;
    }

    // 讀取運算符
    cout << "請輸入運算符 (+, -, *, /): ";
    cin >> operation;

    // 讀取第二個數字
    cout << "請輸入第二個數字: ";
    if (!(cin >> num2)) {
        cout << "輸入錯誤。" << endl;
        return 1;
    }

    // 根據運算符執行相應的運算並保存結果
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
                cout << "錯誤: 除數不能為0。" << endl;
                return 1; // 避免顯示錯誤結果
            }
            result = num1 / num2;
            break;
        default:
            cout << "無效的運算符。" << endl;
            return 1;
    }

    // 輸出結果
    cout << "結果: " << result << endl;

    return 0;
}
