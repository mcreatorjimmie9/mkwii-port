/* Function at 0x8069C2EC, size=20 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

void FUN_8069C2EC(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8069C2F4
    FUN_805E3430(); // bl 0x805E3430
}