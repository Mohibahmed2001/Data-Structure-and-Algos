# Write your MySQL query statement below
DELETE p FROM Person P
JOIN Person p2
ON p.email = p2.email AND p.id> p2.id