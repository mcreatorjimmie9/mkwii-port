/* Function at 0x805FBC98, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_805FBC98(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x805FBCA0
    FUN_805E3430(); // bl 0x805E3430
}