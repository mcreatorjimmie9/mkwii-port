/* Function at 0x8070CB8C, size=20 bytes */
/* Stack frame: 592 bytes */
/* Calls: 1 function(s) */

void FUN_8070CB8C(void)
{
    /* Stack frame: -592(r1) */
    *(0x254 + r1) = r0; // stw @ 0x8070CB94
    FUN_805E3430(); // bl 0x805E3430
}