
#include <stdio.h>
#include<stdlib.h>
int engine(void);
int rain(void);
void motor(int);

int main()
{
    int eng=0,rain1=0;

    eng=engine();
     if(eng)
     {

        rain1= rain();
        motor(rain1);
     }
     else
    {
        printf("engine is off\n");
     }


}

int engine(void)
{
    int status;
    printf("enter the status of the engine\n");
    scanf("%d",&status);
    return status;

}
int rain(void)
{
    int rainny;
    printf("enter rain intensity\n");
    scanf("%d",&rainny);
    return rainny;

}

void motor(int rain1)
{
    if(rain1<100)
    printf("wiper speed----------low \n");
    if(100<rain1 && rain1<250)
    printf("wiper speed-------- medium \n");
    if(rain1>250)
    printf("wiper speed-----------high \n");


}
