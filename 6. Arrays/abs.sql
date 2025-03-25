SELECT C.CUSTOMER_ID, B.NAME, A.BALANCE
FROM customer C
JOIN account A ON C.customer_id = A.ACCOUNT_ID
JOIN branch B ON A.BRANCH_ID = B.BRANCH_ID
WHERE A.ACCOUNT_TYPE_ID IN (402, 404, 406) AND A.BALANCE > 50000
ORDER BY C.CUSTOMER_ID ASC;
