/* Function at 0x808B75E8, size=20 bytes */
/* Stack frame: 288 bytes */
/* Calls: 1 function(s) */

void FUN_808B75E8(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x808B75F0
    FUN_805E3430(); // bl 0x805E3430
}