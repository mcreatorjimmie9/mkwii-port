/* Function at 0x806AC69C, size=20 bytes */
/* Stack frame: 96 bytes */
/* Calls: 1 function(s) */

void FUN_806AC69C(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x806AC6A4
    FUN_805E3430(); // bl 0x805E3430
}