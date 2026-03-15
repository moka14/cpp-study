#include <iostream>

int main() {
    double monthly_investment;
    double annual_rate = 1.05; // 年利5%と仮定

    std::cout << "毎月の積立額（円）を入力してください: ";
    std::cin >> monthly_investment;

    // 簡易的な1年後の計算（利息を考慮）
    double total = monthly_investment * 12 * annual_rate;

    std::cout << "年利5%で運用できた場合、1年後は約 " << total << " 円です！" << std::endl;

    return 0;
}