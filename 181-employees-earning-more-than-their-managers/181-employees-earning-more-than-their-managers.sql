# Write your MySQL query statement below

Select e1.name as Employee from Employee e1 where e1.salary>(Select e2.salary from Employee e2 where  e1.ManagerId = e2.Id);

