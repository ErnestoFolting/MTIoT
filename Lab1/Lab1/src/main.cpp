#include "stm32f103x6.h"

int main()
{
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    GPIOA->CRL |= GPIO_CRL_MODE0_0;
    GPIOA->CRL |= GPIO_CRL_MODE1_0;

    GPIOA->BSRR = GPIO_BSRR_BS0;
    GPIOA->BSRR = GPIO_BSRR_BS1;

    while (true)
    {
    };
    return 0;
}