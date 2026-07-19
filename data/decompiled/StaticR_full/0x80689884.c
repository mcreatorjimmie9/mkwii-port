/* Function at 0x80689884, size=20 bytes */
/* Stack frame: 144 bytes */
/* Calls: 1 function(s) */

void FUN_80689884(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x8068988C
    FUN_805E3430(); // bl 0x805E3430
}