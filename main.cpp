#include <iostream>
#include <iomanip>

int main() {
    double asset = 0;
    double monthly_investment = 0;
    double annual_rate = 0;
    double target_asset = 0; 

    std::cout << "現在の資産を入力してください：";
    std::cin >> asset;

    std::cout << "毎月の積立額を入力してください：";
    std::cin >> monthly_investment;
    
    std::cout << "年利（％）を入れてください：";
    double input_rate;
    std::cin >> input_rate;
    annual_rate = 1.0 + (input_rate / 100.0);

    std::cout << "目標金額（円）を入力してください（例：10000000）：";
    std::cin >> target_asset;

    std::cout << "\n--- シミュレーション開始 ---" << std::endl;

    int year = 0;
    // asset が target_asset より小さい間、ずっと繰り返す
    while (asset < target_asset) {
        year++;
        asset = (asset + monthly_investment * 12) * annual_rate;

        std::cout << year << "年目: " << std::fixed << std::setprecision(0) 
                  << asset << " 円" << std::endl;

        // あまりに時間がかかりすぎる場合のストッパー（無限ループ防止）
        if (year > 100) {
            std::cout << "100年を超えても目標に達しませんでした。" << std::endl;
            break; 
        }
    }

    std::cout << "\n結果：目標の " << (long long)target_asset << " 円に到達するには " 
              << year << " 年かかります。" << std::endl;

    return 0;
}