#include "iron.h"
#include <arduino.h>
enum selected {MAP, LINEAR};
selected selectedAlgorythm = LINEAR;

/*
#define ambient 25
#define tempPoint100 110
#define tempPoint200 110
#define tempPoint300 110
#define tempPoint400 110 
int tempPointAmbient = 25;
*/
uint16_t analogSamplong()
{
    uint16_t sample = 0;
    for(uint8_t analogSample = 0; analogSample < 10; analogSample++) 
    {
        sample += analogRead(A3);
    }
    sample = sample / 10;
    return sample;
}

uint16_t tempMap(int tempMap) 
{
    /*
    if(tempPointAmbient >= tempMap && tempPoint100 <= tempMap) return(map(tempMap, tempPointAmbient, tempPoint100, ambient, 100));
    if(tempPoint100 >= tempMap && tempPoint200 <= tempMap) return(map(tempMap, tempPoint100, tempPoint200, 100, 200));
    if(tempPoint200 >= tempMap && tempPoint300 <= tempMap) return(map(tempMap, tempPoint200, tempPoint300, 200, 300));
    if(tempPoint300 >= tempMap && tempPoint400 <= tempMap) return(map(tempMap, tempPoint300, tempPoint400, 300, 400));
    */
}

uint16_t tempLiniear(int tempLiniear) 
{
    return ((0.573 * tempLiniear) + (22.193));
}

uint16_t getTemperature(void)
{
    if(selectedAlgorythm == LINEAR)
    {
        return tempMap(int tempMap)
    } else 
    {

    }
    return ;
}
