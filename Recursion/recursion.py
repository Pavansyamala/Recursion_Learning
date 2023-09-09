
def recursion(arr , n , index , dp):

    if index >= n-1 :
        return 0
    
    if dp[index]!= -1 :
        return dp[index]
    
    elif index+3 < n:
        case1 = abs(arr[index] -arr[index+1]) + recursion(arr , n , index+1 , dp)
        case2 = abs(arr[index+3] -arr[index]) + recursion(arr , n , index+3 , dp)
        dp[index] = min(case1 , case2)

    elif index+1 < n :
        dp[index] = abs(arr[index] -arr[index+1]) + recursion(arr , n , index+1 , dp)
        
    return dp[index]

arr = [1,2,3 , 10,4,6]
dp = [-1,-1,-1,-1,-1 , -1]

print(dp)
print(recursion(arr ,  6 , 0 , dp))
print(dp)