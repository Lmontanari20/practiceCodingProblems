def isPP(n)
    # your code
    for i in 2..n 
      for j in 2..n
        if i ** j == n
          return [i,j]
        end
        if i ** j > n 
          break 
        end
      end
      if(i ** 2 > n) 
        return nil
      end
    end
end