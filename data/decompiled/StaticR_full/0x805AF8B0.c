/* Function at 0x805AF8B0, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_805AF8B0(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x805AF8B8
    FUN_805E3430(); // bl 0x805E3430
}