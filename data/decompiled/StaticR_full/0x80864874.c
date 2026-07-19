/* Function at 0x80864874, size=20 bytes */
/* Stack frame: 592 bytes */
/* Calls: 1 function(s) */

void FUN_80864874(void)
{
    /* Stack frame: -592(r1) */
    *(0x254 + r1) = r0; // stw @ 0x8086487C
    FUN_805E3430(); // bl 0x805E3430
}