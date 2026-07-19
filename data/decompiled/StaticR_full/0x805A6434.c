/* Function at 0x805A6434, size=20 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_805A6434(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x805A643C
    FUN_805E3430(); // bl 0x805E3430
}