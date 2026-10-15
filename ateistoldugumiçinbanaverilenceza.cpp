#include <iostream>

int main() {
    float productPrice, paidAmount;

    std::cout << "Enter product price (TL): ";
    std::cin >> productPrice;

    std::cout << "Enter paid amount (TL): ";
    std::cin >> paidAmount;

    // std::round yerine + 0.5 ekleyerek manuel yuvarlama yapiyoruz (Dev-C++ ile tam uyumlu)
    int changeInKurus = (paidAmount - productPrice) * 100.0 + 0.5;

    int count200TL = changeInKurus / 20000;
    changeInKurus %= 20000;

    int count100TL = changeInKurus / 10000;
    changeInKurus %= 10000;

    int count50TL = changeInKurus / 5000;
    changeInKurus %= 5000;

    int count20TL = changeInKurus / 2000;
    changeInKurus %= 2000;

    int count10TL = changeInKurus / 1000;
    changeInKurus %= 1000;

    int count5TL = changeInKurus / 500;
    changeInKurus %= 500;

    int count1TL = changeInKurus / 100;
    changeInKurus %= 100;

    int count50Kr = changeInKurus / 50;
    changeInKurus %= 50;

    int count25Kr = changeInKurus / 25;
    changeInKurus %= 25;

    int count10Kr = changeInKurus / 10;
    changeInKurus %= 10;

    int count5Kr = changeInKurus / 5;
    changeInKurus %= 5;

    int count1Kr = changeInKurus / 1;

    int totalBillsAndCoins = count200TL + count100TL + count50TL + count20TL + count10TL + count5TL + count1TL +
                             count50Kr + count25Kr + count10Kr + count5Kr + count1Kr;

    std::cout << "\nChange Breakdown:\n";
    std::cout << "200 TL: " << count200TL << "\n";
    std::cout << "100 TL: " << count100TL << "\n";
    std::cout << " 50 TL: " << count50TL << "\n";
    std::cout << " 20 TL: " << count20TL << "\n";
    std::cout << " 10 TL: " << count10TL << "\n";
    std::cout << "  5 TL: " << count5TL << "\n";
    std::cout << "  1 TL: " << count1TL << "\n";
    std::cout << " 50 Kr: " << count50Kr << "\n";
    std::cout << " 25 Kr: " << count25Kr << "\n";
    std::cout << " 10 Kr: " << count10Kr << "\n";
    std::cout << "  5 Kr: " << count5Kr << "\n";
    std::cout << "  1 Kr: " << count1Kr << "\n";

    std::cout << "\nTotal number of bills and coins given: " << totalBillsAndCoins << "\n";

    return 0;
}
