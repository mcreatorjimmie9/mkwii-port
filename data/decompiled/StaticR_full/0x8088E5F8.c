/* Function at 0x8088E5F8, size=20 bytes */
/* Stack frame: 384 bytes */
/* Calls: 1 function(s) */

void FUN_8088E5F8(void)
{
    /* Stack frame: -384(r1) */
    *(0x184 + r1) = r0; // stw @ 0x8088E600
    FUN_805E3430(); // bl 0x805E3430
}