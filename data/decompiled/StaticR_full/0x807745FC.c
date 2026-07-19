/* Function at 0x807745FC, size=16 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807745FC(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80774604
    FUN_805E3430(); // bl 0x805E3430
}