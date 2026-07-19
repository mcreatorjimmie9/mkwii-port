/* Function at 0x805C61DC, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_805C61DC(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x805C61E4
    FUN_805E3430(); // bl 0x805E3430
}