/* Function at 0x805CB14C, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_805CB14C(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x805CB154
    FUN_805E3430(); // bl 0x805E3430
}