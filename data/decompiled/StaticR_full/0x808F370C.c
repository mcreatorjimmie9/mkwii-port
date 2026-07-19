/* Function at 0x808F370C, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_808F370C(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x808F3714
    FUN_805E3430(); // bl 0x805E3430
}