/* Function at 0x80760488, size=20 bytes */
/* Stack frame: 96 bytes */
/* Calls: 1 function(s) */

void FUN_80760488(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x80760490
    FUN_805E3430(); // bl 0x805E3430
}