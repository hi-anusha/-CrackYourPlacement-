# Write your MySQL query statement below

Select Customers.name as Customers from Customers where Customers.id not in (Select Orders.customerId from Orders)