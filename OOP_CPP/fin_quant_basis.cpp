#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * @class InvestmentAsset
 * Represents a single financial instrument in a trading portfolio.
 * Essential for Quantitative Analysis and Portfolio Management.
 */
class InvestmentAsset {
public:
    string ticker;       // Stock symbol (e.g., "NVDA", "AAPL")
    double buyPrice;     // Initial entry price per unit
    int quantity;        // Total units held in the position

    // Constructor to initialize the financial asset
    InvestmentAsset(string t, double p, int q) {
        ticker = t;
        buyPrice = p;
        quantity = q;
    }

    // Calculates the total market value based on current price
    double calculateCurrentValue(double currentMarketPrice) {
        return quantity * currentMarketPrice;
    }

    // Generates a P&L (Profit and Loss) report for the position
    void generateReport(double currentMarketPrice) {
        double currentValue = calculateCurrentValue(currentMarketPrice);
        double costBasis = quantity * buyPrice;
        double pnl = currentValue - costBasis; // Profit or Loss calculation
        double pnlPercentage = (pnl / costBasis) * 100;
}