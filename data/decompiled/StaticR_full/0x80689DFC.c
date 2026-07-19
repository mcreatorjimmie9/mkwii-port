/* Function at 0x80689DFC, size=20 bytes */
/* Stack frame: 224 bytes */
/* Calls: 1 function(s) */

void FUN_80689DFC(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x80689E04
    FUN_805E3430(); // bl 0x805E3430
}