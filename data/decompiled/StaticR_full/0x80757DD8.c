/* Function at 0x80757DD8, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_80757DD8(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80757DE0
    FUN_805E3430(); // bl 0x805E3430
}