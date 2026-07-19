/* Function at 0x80814330, size=20 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_80814330(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80814338
    FUN_805E3430(); // bl 0x805E3430
}