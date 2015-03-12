-- Project Euler Problem # 3
-- Largest PRime Factor
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-19

module Main where

-- See trial division
go 1 _ = []
go n p
    | p * p > n = [n]
    | n `mod` p == 0 = p : go (n `div` p) p
    | otherwise = go n (p + 1)

factor x = go x 2
        
main = print (last $ factor 600851475143)