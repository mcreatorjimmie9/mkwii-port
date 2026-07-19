/* Function at 0x807C10EC, size=20 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807C10EC(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x807C10F4
    FUN_805E3430(); // bl 0x805E3430
}