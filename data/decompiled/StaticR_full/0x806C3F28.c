/* Function at 0x806C3F28, size=20 bytes */
/* Stack frame: 11104 bytes */
/* Calls: 1 function(s) */

void FUN_806C3F28(void)
{
    /* Stack frame: -11104(r1) */
    *(0x2b64 + r1) = r0; // stw @ 0x806C3F30
    FUN_805E3430(); // bl 0x805E3430
}