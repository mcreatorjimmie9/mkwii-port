/* Function at 0x8074408C, size=20 bytes */
/* Stack frame: 176 bytes */
/* Calls: 1 function(s) */

void FUN_8074408C(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x80744094
    FUN_805E3430(); // bl 0x805E3430
}