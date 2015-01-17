-- Project Euler Problem # 1
-- Multiples of 3 and 5
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-17

module Main where

nsum = sum $ multiples n
    where n = 999
    
multiples n = filter (\x -> x `mod` 5 == 0 || x `mod` 3 == 0) [1..999]

main = do
    putStrLn "All multiples of 3 and 5 under 1000..."
    print    (multiples 999)
    putStrLn ""
    putStrLn "The sum of all multiples..."
    print    (nsum)