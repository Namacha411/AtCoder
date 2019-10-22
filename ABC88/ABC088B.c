#include <stdio.h>
#include <stdbool.h>
//#define DEBUG

int main()
{
    short sheetNum, save, i, j;
    short cardNum[100] = {};
    int sub = 0;

    //read
    scanf("%hd", &sheetNum);
    for(i = 0; i < sheetNum; i++)
    {
        scanf("%hd", &cardNum[i]);
    }

    //sort
    for(i = 0; i < sheetNum; i++)
    {
        for(j = i + 1; j < sheetNum; j++)
        {
            if(cardNum[i] < cardNum[j])
            {
                save = cardNum[i];
                cardNum[i] = cardNum[j];
                cardNum[j] = save;
            }
        }
    }


#ifdef DEBUG
    for(i = 0; i < sheetNum; i++)
    {
        printf("%d\n", cardNum[i]);
    }
#endif

    for(i = 0; i < sheetNum; i++)
    {
        if((i % 2) == 0)
        {
            sub += cardNum[i];
        }
        else
        {
            sub -= cardNum[i];
        }
    }

    printf("%d\n", sub);
    return 0;
}