-- 코드를 입력하세요

SELECT ('/home/grep/src/' || F.board_id || '/' || F.FILE_ID|| F.file_name || F.file_ext ) as FILE_PATH 
FROM    USED_GOODS_FILE F
JOIN USED_GOODS_BOARD B ON B.BOARD_ID = F.BOARD_ID
WHERE   B.VIEWS =  (SELECT MAX(VIEWS) FROM  USED_GOODS_BOARD)
ORDER BY  F.FILE_ID DESC;