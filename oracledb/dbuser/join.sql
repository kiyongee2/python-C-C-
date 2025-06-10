-- 조인(join)
SELECT * FROM customer, orders
WHERE customer.custid = orders.custid;

SELECT customer.name, book.bookname,
        orders.saleprice, orders.saleprice 
FROM customer, book, orders
WHERE customer.custid = orders.custid
    AND book.bookid = orders.bookid
    







