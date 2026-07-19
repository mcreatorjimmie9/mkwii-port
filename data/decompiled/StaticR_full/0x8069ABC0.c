/* Function at 0x8069ABC0, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8069ABC0(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8069ABC8
    FUN_805E3430(); // bl 0x805E3430
}