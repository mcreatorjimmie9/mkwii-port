/* Function at 0x806C264C, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_806C264C(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x806C2654
    FUN_805E3430(); // bl 0x805E3430
}