import math


if __name__=="__main__":
    pi=3.14159
    while(True):
        
        
        h=input()
        if h=="":
            break
        h=float(h)
        p1,p2=map(float,input().split())
        t=int(input())

        while t!=0:
            alpha,vel=map(float,input().split())
            cosine=math.cos(alpha*pi/180)
            sine=math.sin(alpha*pi/180)
            velx=vel*cosine
            vely=vel*sine
            a=-1*0.5*9.80665
            b=vely
            c=h

            r1=(-1*b+math.sqrt(pow(b,2)-4*a*c))/(2*a)
            r2=(-1*b-math.sqrt(pow(b,2)-4*a*c))/(2*a)

            ans=max([r1,r2])

            x=round(velx*ans,5)

            if x<=p2 and x>=p1:
                if len(str(x).split('.')[1])<=4:
                    print(str(x)+"0"*(5-len(str(x).split('.')[1])),"-> DUCK")
                else:
                    
                    print(x,"-> DUCK")
            else:
                if len(str(x).split('.')[1])<=4:
                    print(str(x)+"0"*(5-len(str(x).split('.')[1])),"-> NUCK")
                else:
                    print(x,"-> NUCK")
                
            
                    
            t=t-1
        
