/* Function at 0x8066F0B8, size=20 bytes */
/* Stack frame: 304 bytes */
/* Calls: 1 function(s) */

void FUN_8066F0B8(void)
{
    /* Stack frame: -304(r1) */
    *(0x134 + r1) = r0; // stw @ 0x8066F0C0
    FUN_805E3430(); // bl 0x805E3430
}