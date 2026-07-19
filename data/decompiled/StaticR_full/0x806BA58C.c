/* Function at 0x806BA58C, size=20 bytes */
/* Stack frame: 192 bytes */
/* Calls: 1 function(s) */

void FUN_806BA58C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x806BA594
    FUN_805E3430(); // bl 0x805E3430
}