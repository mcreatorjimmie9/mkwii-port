/* Function at 0x80735A4C, size=20 bytes */
/* Stack frame: 176 bytes */
/* Calls: 1 function(s) */

void FUN_80735A4C(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x80735A54
    FUN_805E3430(); // bl 0x805E3430
}