/* Function at 0x805C7970, size=20 bytes */
/* Stack frame: 144 bytes */
/* Calls: 1 function(s) */

void FUN_805C7970(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x805C7978
    FUN_805E3430(); // bl 0x805E3430
}