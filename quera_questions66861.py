# we are checking numbers like (n/2) * (n+1)
# we find the smallest number that has k divisors

def divisor_finder(k):
        n = 1
        while True:
            counter_list = []
            result = (n/2) * (n+1) 
            for i in range(1, int(result) + 1):
                if result % i == 0:
                    counter_list.append(i)
            if len(counter_list) == k:
                return int(result), counter_list
            elif len(counter_list) > k or len(counter_list) < k:
                n += 1
            else:
                return -1
            
res, divisors = divisor_finder(40)
print(f"number: {res} and its divisors {divisors}")