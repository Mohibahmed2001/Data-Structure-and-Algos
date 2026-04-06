# Write your MySQL query statement below
select
    firstname,
    lastname,
    city,
    state
FROM Person as p
LEFT JOIN Address as a
ON p.personid = a.personid
