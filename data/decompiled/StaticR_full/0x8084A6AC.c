/* Function at 0x8084A6AC, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_8084A6AC(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8084A6B4
    FUN_805E3430(); // bl 0x805E3430
}