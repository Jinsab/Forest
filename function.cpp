#include "function.h"

int money = 0;

void buyCoffee() {
	int gesu = 0;

	std::cout << "몇 잔 드릴까요? ";
	std::cin >> gesu;

	std::cout << gesu * 500 << "원입니다. 돈을 넣어주세요. ";
	std::cin >> money;

	if (money < gesu * 500) {
		std::cout << "돈이 부족해 자동으로 반환됩니다." << std::endl;
		repayment();
	}
	else {
		std::cout << "커피 " << gesu << "잔 나왔습니다." << std::endl;
		money -= gesu * 500;
	}
}

void buyCocoa() {
	int gesu = 0;

	std::cout << "몇 잔 드릴까요? ";
	std::cin >> gesu;

	std::cout << gesu * 400 << "원입니다. 돈을 넣어주세요. ";
	std::cin >> money;

	if (money < gesu * 400) {
		std::cout << "돈이 부족해 자동으로 반환됩니다." << std::endl;
		repayment();
	}
	else {
		std::cout << "코코아 " << gesu << "잔 나왔습니다." << std::endl;
		money -= gesu * 400;
	}
}

void buyAdlaytea() {
	int gesu = 0;
	std::cout << "몇 잔 드릴까요? ";
	std::cin >> gesu;

	std::cout << gesu * 300 << "원입니다. 돈을 넣어주세요. ";
	std::cin >> money;

	if (money < gesu * 300) {
		std::cout << "돈이 부족해 자동으로 반환됩니다." << std::endl;
		repayment();
	}
	else {
		std::cout << "율무차 " << gesu << "잔 나왔습니다." << std::endl;
		money -= gesu * 300;
	}
}

void buyCore() {
	int gesu = 0;
	std::cout << "몇 개 드릴까요? ";
	std::cin >> gesu;

	std::cout << gesu * 320 << "원입니다. 돈을 넣어주세요. ";
	std::cin >> money;

	if (money < gesu * 320) {
		std::cout << "돈이 부족해 자동으로 반환됩니다." << std::endl;
		repayment();
	}
	else {
		std::cout << "코어 젬스톤 " << gesu << "개 나왔습니다." << std::endl;
		money -= gesu * 320;
	}
}

void repayment() {
	int hund = 0, fihund = 0, thou = 0, fithou = 0, tenthou = 0;

	std::cout << "거스름돈 " << money << "원을 반환합니다." << std::endl;

	while (money) {
		if (money >= 10000) {
			money -= 10000;
			tenthou++;
		}
		else if (money >= 5000) {
			money -= 5000;
			fithou++;
		}
		else if (money >= 1000) {
			money -= 1000;
			thou++;
		}
		else if (money >= 500) {
			money -= 500;
			fihund++;
		}
		else {
			money -= 100;
			hund++;
		}
	}

	if (tenthou > 0)
		std::cout << "10000원 : " << tenthou << "개" << std::endl;

	if (fithou > 0)
		std::cout << "5000원 : " << fithou << "개" << std::endl;

	if (thou > 0)
		std::cout << "1000원 : " << thou << "개" << std::endl;

	if (fihund > 0)
		std::cout << "500원 : " << fihund << "개" << std::endl;

	if (hund > 0)
		std::cout << "100원 : " << hund << "개" << std::endl;
}

void myMoney() {
	std::cout << "남은 금액 : " << money << std::endl;
}