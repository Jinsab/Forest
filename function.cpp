#include "function.h"

int money = 0;

void buyCoffee() {
	int gesu = 0;

	std::cout << "�� �� �帱���? ";
	std::cin >> gesu;

	std::cout << gesu * 500 << "���Դϴ�. ���� �־��ּ���. ";
	std::cin >> money;

	if (money < gesu * 500) {
		std::cout << "���� ������ �ڵ����� ��ȯ�˴ϴ�." << std::endl;
		repayment();
	}
	else {
		std::cout << "Ŀ�� " << gesu << "�� ���Խ��ϴ�." << std::endl;
		money -= gesu * 500;
	}
}

void buyCocoa() {
	int gesu = 0;

	std::cout << "�� �� �帱���? ";
	std::cin >> gesu;

	std::cout << gesu * 400 << "���Դϴ�. ���� �־��ּ���. ";
	std::cin >> money;

	if (money < gesu * 400) {
		std::cout << "���� ������ �ڵ����� ��ȯ�˴ϴ�." << std::endl;
		repayment();
	}
	else {
		std::cout << "���ھ� " << gesu << "�� ���Խ��ϴ�." << std::endl;
		money -= gesu * 400;
	}
}

void buyAdlaytea() {
	int gesu = 0;
	std::cout << "�� �� �帱���? ";
	std::cin >> gesu;

	std::cout << gesu * 300 << "���Դϴ�. ���� �־��ּ���. ";
	std::cin >> money;

	if (money < gesu * 300) {
		std::cout << "���� ������ �ڵ����� ��ȯ�˴ϴ�." << std::endl;
		repayment();
	}
	else {
		std::cout << "������ " << gesu << "�� ���Խ��ϴ�." << std::endl;
		money -= gesu * 300;
	}
}

void buyCore() {
	int gesu = 0;
	std::cout << "�� �� �帱���? ";
	std::cin >> gesu;

	std::cout << gesu * 320 << "���Դϴ�. ���� �־��ּ���. ";
	std::cin >> money;

	if (money < gesu * 320) {
		std::cout << "���� ������ �ڵ����� ��ȯ�˴ϴ�." << std::endl;
		repayment();
	}
	else {
		std::cout << "�ھ� ������ " << gesu << "�� ���Խ��ϴ�." << std::endl;
		money -= gesu * 320;
	}
}

void repayment() {
	int hund = 0, fihund = 0, thou = 0, fithou = 0, tenthou = 0;

	std::cout << "�Ž����� " << money << "���� ��ȯ�մϴ�." << std::endl;

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
		std::cout << "10000�� : " << tenthou << "��" << std::endl;

	if (fithou > 0)
		std::cout << "5000�� : " << fithou << "��" << std::endl;

	if (thou > 0)
		std::cout << "1000�� : " << thou << "��" << std::endl;

	if (fihund > 0)
		std::cout << "500�� : " << fihund << "��" << std::endl;

	if (hund > 0)
		std::cout << "100�� : " << hund << "��" << std::endl;
}

void myMoney() {
	std::cout << "���� �ݾ� : " << money << std::endl;
}