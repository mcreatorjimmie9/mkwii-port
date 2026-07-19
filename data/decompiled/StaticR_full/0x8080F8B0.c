/* Function at 0x8080F8B0, size=20 bytes */
/* Stack frame: 224 bytes */
/* Calls: 1 function(s) */

void FUN_8080F8B0(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x8080F8B8
    FUN_805E3430(); // bl 0x805E3430
}