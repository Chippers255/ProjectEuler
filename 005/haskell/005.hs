-- Project Euler Problem # 4
-- Largest Palindrome Product
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-22

module Main where

test = foldl lcm 1 [1..20]

main = do
    print (test)