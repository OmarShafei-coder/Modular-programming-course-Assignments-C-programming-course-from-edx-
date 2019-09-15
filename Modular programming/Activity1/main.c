#include <stdio.h>

//Function prototypes :
void gramToPound(double);
void meterToFeet(double);
void CelsiusToFahrenheit(double); 

void main(void)
{
    //variables definition
    int numOfOperations;
    int loopCounter;
    char unit;
    double valueToChange;

    scanf("%d",&numOfOperations);
    
    for(loopCounter = 0; loopCounter < numOfOperations; loopCounter++)
    {
        scanf("%lf %c",&valueToChange, &unit);

        //Conversions
        switch (unit)
        {
            case 'g': gramToPound(valueToChange);         break;
            case 'm': meterToFeet(valueToChange);         break;
            case 'c': CelsiusToFahrenheit(valueToChange); break; 
            default : printf("Wrong unit\n");             break;
        }
    }
}

//Functions implementation
void gramToPound(double valueOnGrams)
{
    double valueOnpound = valueOnGrams * 0.002205;
    printf("%0.6f lbs\n",valueOnpound);
}

void meterToFeet(double valueOnMeter)
{
    double valueOnFeet = valueOnMeter / 0.3048;
    printf("%0.6f ft\n",valueOnFeet);
}

void CelsiusToFahrenheit(double valueOnCelsius)
{
    double valueOnFahrenheit = 32 + (1.8 * valueOnCelsius);
    printf("%0.6f f\n",valueOnFahrenheit);
}