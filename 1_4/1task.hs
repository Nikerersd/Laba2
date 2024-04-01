main :: IO ()
main = do
    let n = 4
    if n > 26
        then putStrLn "Incorrect data"
        else do
            mapM_ putStrLn [ [toEnum (fromEnum 'A' + k - 1) :: Char | k <- [n, n-1..i]] | i <- [n, n-1..1] ]