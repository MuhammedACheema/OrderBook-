# OrderBook-
Creating an order book simulation in order to simulate buying and selling orders, as well as tracking order history

Guidelines:

Step 1: Read Investopedia + Matching Engine blog to get the mechanics.

Step 2: Implement Order and OrderBook in C++.

Step 3: Start with limit orders only (no market orders).

Step 4: Add cancel + trade log.

Key Concepts
Orders
Buy (Bid): A trader wants to buy at or below a certain price.
Sell (Ask): A trader wants to sell at or above a certain price.
Market Order: Execute immediately at the best available price.
Limit Order: Only execute if a certain price or better is available.
Order Book Levels
Orders are grouped by price.

Example:

Asks (sellers):  
Price | Qty  
101   | 5  
102   | 3  

Bids (buyers):  
Price | Qty  
100   | 4  
99    | 2  


Buyers want the lowest price possible, sellers want the highest price possible.

Matching Engine

When a new order comes in, it checks if it can be matched.

Example: If a buy order comes in at 101, and there’s a sell order at 100, a trade happens.

Matching rules:

Price Priority: Match the best price first.

Time Priority: If multiple orders at the same price, match the earliest one.

Trade Execution

If full match → remove order from book.

If partial match → reduce quantity, leave remainder.

If no match → add to book.
