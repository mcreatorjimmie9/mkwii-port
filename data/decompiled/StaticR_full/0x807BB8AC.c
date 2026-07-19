/* Function at 0x807BB8AC, size=20 bytes */
/* Stack frame: 288 bytes */
/* Calls: 1 function(s) */

void FUN_807BB8AC(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x807BB8B4
    FUN_805E3430(); // bl 0x805E3430
}