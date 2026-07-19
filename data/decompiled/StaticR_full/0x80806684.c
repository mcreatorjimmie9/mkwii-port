/* Function at 0x80806684, size=20 bytes */
/* Stack frame: 208 bytes */
/* Calls: 1 function(s) */

void FUN_80806684(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x8080668C
    FUN_805E3430(); // bl 0x805E3430
}