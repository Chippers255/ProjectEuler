-- Project Euler Problem # 4
-- Largest Palindrome Product
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-22

module Main where

isPalindrome n = show n == (reverse.show $ n)

palindromes min max =
    [a*b | a <- [min..max], b <- [1..a], isPalindrome (a*b)]
    
palindromes2 min max =
    [a*b | a <- [min..max], b <- [min..max], isPalindrome (a*b)]

l3 = maximum $ palindromes 100 999
l4 = maximum $ palindromes2 100 999

main = do
    print (l5)