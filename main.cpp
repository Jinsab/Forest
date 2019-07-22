#include "common.h"
#include "interface.h"
#include "function.h"

int main() {
	std::ios::sync_with_stdio(false);

	enum { COFFEE = 1, COCOA, ADLAYTEA, CORE, REPAYMENT, EXIT };
	
	int choose = 0;

	while (true) {
		menu();

		std::cin >> choose;

		switch (choose) {
		case COFFEE: buyCoffee();
			break;
		case COCOA: buyCocoa();
			break;
		case ADLAYTEA: buyAdlaytea();
			break;
		case CORE: buyCore();
			break;
		case REPAYMENT: repayment();
			break;
		}

		if (choose == EXIT)
			break;

		myMoney();
	}

	return 0;
}