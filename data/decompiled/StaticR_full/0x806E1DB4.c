/* Function at 0x806E1DB4, size=20 bytes */
/* Stack frame: 160 bytes */
/* Calls: 1 function(s) */

void FUN_806E1DB4(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x806E1DBC
    FUN_805E3430(); // bl 0x805E3430
}