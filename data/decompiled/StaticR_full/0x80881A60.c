/* Function at 0x80881A60, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_80881A60(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80881A68
    FUN_805E3430(); // bl 0x805E3430
}