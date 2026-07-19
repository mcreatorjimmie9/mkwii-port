/* Function at 0x806DBB24, size=20 bytes */
/* Stack frame: 256 bytes */
/* Calls: 1 function(s) */

void FUN_806DBB24(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x806DBB2C
    FUN_805E3430(); // bl 0x805E3430
}