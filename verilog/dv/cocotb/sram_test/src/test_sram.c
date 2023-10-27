#include "stdint.h"

int32_t * sram_addr = (int32_t * )0x80000000;
int32_t * fail_addr = (int32_t * )0x12345678;

// int num_spots = 256;
int num_spots = 12288;

int main ()
{
    for (int i = 0; i < num_spots; i++)
    {
        sram_addr[i] = i;
    }
    for (int i = 0; i < num_spots; i++)
    {
        if (sram_addr[i] != i)
        {
            *fail_addr = -1;
        }
    }
}