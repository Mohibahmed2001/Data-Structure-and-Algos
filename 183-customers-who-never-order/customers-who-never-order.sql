# Write your MySQL query statement below
SELECT
    name as Customers
FROM CUSTOMERS
 WHERE id NOT IN (
    SELECT customerId
    FROM Orders
 )