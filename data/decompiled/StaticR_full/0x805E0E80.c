/* Function at 0x805E0E80, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805E0E80(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805E0E88
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805E0E90
    r3 = r4 + 0; // 0x805E0E94
    FUN_805E3430(r4, r5, r3, r4); // bl 0x805E3430
}