    #include <stdio.h>
     
     
    void hs08test(void)
    {
    int x;
    double y;
     
    scanf("%d %lf",&x, &y);
    if(x%5==0 && (y-(double)x-0.5)>=0.0 && 0<x && x<=2000 && 0<=y && y<=2000)
    printf("%.2lf",y-(double)x-0.5);
    else
    printf("%.2lf",y);
    }
     
     
     
     
    int main()
    {
    hs08test();
    return 0;
    } 
