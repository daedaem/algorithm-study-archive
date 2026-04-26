-- SELECT A.product_id,
--        A.product_name,
--        SUM(A.price * B.amount) AS TOTAL_SALES
-- FROM   food_product A,
--        food_order B
-- WHERE  A.product_id = B.product_id(+)
--     AND B.IN_DATE > TO_DATE('2022-04-30', 'YYYY-MM-DD') 
--     AND B.IN_DATE < TO_DATE('2022-06-01', 'YYYY-MM-DD')
-- GROUP BY A.product_id, A.product_name
-- -- HAVING 
-- --     SUM(A.PRICE * B.AMOUNT) IS NOT NULL
-- -- ORDER BY total_sales DESC, A.product_id; 

-- SELECT A.product_id,
--        A.product_name,
--        SUM(A.price * B.amount) AS TOTAL_SALES
-- FROM   food_product A
-- JOIN   food_order B ON A.product_id = B.product_id
-- WHERE  B.PRODUCE_DATE  TO_DATE('2022-04-30', 'YYYY-MM-DD') 
-- GROUP BY A.product_id, A.product_name
-- ORDER BY total_sales DESC, A.product_id;

 SELECT A.product_id,
       A.product_name,
       SUM(A.price * B.amount) AS TOTAL_SALES
FROM   food_product A, food_order B
WHERE  A.product_id = B.product_id(+)
    AND B.PRODUCE_DATE > TO_DATE('2022-04-30', 'YYYY-MM-DD') 
    AND B.PRODUCE_DATE < TO_DATE('2022-06-01', 'YYYY-MM-DD')
GROUP BY A.product_id, A.product_name
HAVING SUM(A.price * B.amount) IS NOT NULL
ORDER BY TOTAL_SALES DESC, A.product_id;