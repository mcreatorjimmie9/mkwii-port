/* Function at 0x8084343C, size=20 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_8084343C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80843444
    FUN_805E3430(); // bl 0x805E3430
}