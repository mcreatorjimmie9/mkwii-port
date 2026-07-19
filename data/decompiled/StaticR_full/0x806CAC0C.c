/* Function at 0x806CAC0C, size=20 bytes */
/* Stack frame: 144 bytes */
/* Calls: 1 function(s) */

void FUN_806CAC0C(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x806CAC14
    FUN_805E3430(); // bl 0x805E3430
}