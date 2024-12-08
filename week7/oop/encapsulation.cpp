#include <iostream>
using namespace std;

// 데이터(멤버변수)와 이를 조작하는 메서드(멤버함수)를 하나의 클래스에 묶는것
// 외부에서는 메서드를 통해서만 데이터를 수정하거나 조회할 수 있음
class BankAccount {
private:
    double balance;  // 외부에서 직접 접근 불가 (캡슐화)

public:
    BankAccount(double initialBalance) {  // 생성자로 초기화
        balance = initialBalance;
    }

    void deposit(double amount) {  // 메서드를 통해 데이터 수정
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {  // 메서드를 통해 데이터 수정
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() {  // 메서드를 통해 데이터 조회
        return balance;
    }
};

int main() {
    BankAccount account(1000);  // 계좌 생성, 초기 잔액 1000
    account.deposit(500);       // 500 입금
    account.withdraw(300);      // 300 출금

    cout << "현재 잔액: " << account.getBalance() << endl;  // 출력: 1200
    return 0;
}