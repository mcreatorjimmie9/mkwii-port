/* Function at 0x8065CA78, size=20 bytes */
/* Stack frame: 512 bytes */
/* Calls: 1 function(s) */

void FUN_8065CA78(void)
{
    /* Stack frame: -512(r1) */
    *(0x204 + r1) = r0; // stw @ 0x8065CA80
    FUN_805E3430(); // bl 0x805E3430
}