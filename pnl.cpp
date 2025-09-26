/*A portfolio PnL (Profit and Loss) calculator determines the financial gain or loss 
on a collection of investments by subtracting the total initial investment (inflows) 
from the current total value of the portfolio, while also accounting for any outflows 
(withdrawals). The general formula for portfolio PnL is  Current Value – (Initial Investment – Withdrawals),
 or simply Current Value - Investment Cost + Additions - Withdrawals, 
to find the net profit or loss*/

#include <iostream>

class pnl{
    public: 
    double current_val;
    double investment_cost;
    double additions;
    double withdrawls;
};
