/* Function at 0x8081BF10, size=20 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_8081BF10(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8081BF18
    FUN_805E3430(); // bl 0x805E3430
}