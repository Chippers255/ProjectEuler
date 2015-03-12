-- Project Euler Problem # 3
-- Largest PRime Factor
-- Answer:
--
-- Created by Thomas Nelson <tn90ca@gmail.com>
-- Created on 2015-01-19

module Main where

isPrime k = null [ x | x <- [2..k - 1], k `mod` x  == 0]

n     = 600851475143
nlist = [1..(n/2)]
plist = filter (\x -> isPrime x)nlist

main = print (plist)