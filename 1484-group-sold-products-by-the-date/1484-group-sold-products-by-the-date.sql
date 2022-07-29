# Write your MySQL query statement below
select
sell_date, 
count(distinct(product)) as num_sold,
group_concat(distinct product) as products
from Activities
group by sell_date
order by sell_date


# to aggregate the product names in one cell. In MySql, this can be done using GROUP_CONCAT()

#distict()

#group by    otherwise only one date selected