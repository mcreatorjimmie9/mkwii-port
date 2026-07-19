/* Function at 0x80863624, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_80863624(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8086362C
    FUN_805E3430(); // bl 0x805E3430
}