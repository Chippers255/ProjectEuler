-- Project Euler Problem # 2
-- Even Fibonacci Numberss
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-17

module Main where

-- Prints the nth fibonacci number
slowfib 0 = 1
slowfib 1 = 1
slowfib n = (slowfib (n - 1)) + (slowfib (n - 2))

fib = 1:1:zipWith (+) fib (tail fib)

terms  = take 33 fib
nterms = filter (\x -> mod x 2 == 0 && x < 4000000)terms

main = print (sum $ nterms)