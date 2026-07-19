/* Function at 0x8087AB0C, size=20 bytes */
/* Stack frame: 80 bytes */
/* Calls: 1 function(s) */

void FUN_8087AB0C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8087AB14
    FUN_805E3430(); // bl 0x805E3430
}