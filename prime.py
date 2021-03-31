
import time
targetNumber=1000
start_time = time.time()

for i in range(0,targetNumber+1):
    factors=0
    for x in range(1, i+1):
        if i%x==0:
            factors+=1
    if factors==2:
        print(i)



print("%s microseconds" % ((time.time() - start_time)*(1000000)))
