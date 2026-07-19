/* Function at 0x805AF03C, size=20 bytes */
/* Stack frame: 192 bytes */
/* Calls: 1 function(s) */

void FUN_805AF03C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x805AF044
    FUN_805E3430(); // bl 0x805E3430
}