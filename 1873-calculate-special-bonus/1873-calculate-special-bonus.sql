# Write your MySQL query statement below
Select employee_id,
if(employee_id %2 !=0 and name not like "M%",salary,0) as bonus
from Employees
order by employee_id


#if else here is in ----->Case (when then, else) end
#IF (employee_id%2 AND name not like "M%", salary, 0) as bonus