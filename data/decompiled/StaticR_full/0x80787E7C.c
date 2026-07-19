/* Function at 0x80787E7C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80787E7C(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r6, 0 */ // 0x80787E84
    *(0x14 + r1) = r0; // stw @ 0x80787E88
    r3 = *(0x4c4 + r3); // lwz @ 0x80787E8C
    r3 = r3 + 0xc; // 0x80787E90
    FUN_805E3430(r6, r3); // bl 0x805E3430
}