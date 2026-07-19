/* Function at 0x807746B0, size=16 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807746B0(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807746B8
    FUN_805E3430(); // bl 0x805E3430
}