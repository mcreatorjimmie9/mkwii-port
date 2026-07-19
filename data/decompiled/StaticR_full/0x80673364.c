/* Function at 0x80673364, size=20 bytes */
/* Stack frame: 240 bytes */
/* Calls: 1 function(s) */

void FUN_80673364(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8067336C
    FUN_805E3430(); // bl 0x805E3430
}