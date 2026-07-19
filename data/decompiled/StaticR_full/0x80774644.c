/* Function at 0x80774644, size=16 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80774644(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8077464C
    FUN_805E3430(); // bl 0x805E3430
}