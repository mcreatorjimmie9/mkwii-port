/* Function at 0x806C8B5C, size=20 bytes */
/* Stack frame: 144 bytes */
/* Calls: 1 function(s) */

void FUN_806C8B5C(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x806C8B64
    FUN_805E3430(); // bl 0x805E3430
}