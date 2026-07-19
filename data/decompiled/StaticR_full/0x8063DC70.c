/* Function at 0x8063DC70, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063DC70(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8063DC78
    /* lis r5, 0 */ // 0x8063DC7C
    *(0x14 + r1) = r0; // stw @ 0x8063DC80
    r5 = r5 + 0; // 0x8063DC84
    /* lfs f0, 0(r4) */ // 0x8063DC88
    *(0xc + r1) = r31; // stw @ 0x8063DC8C
    r31 = r3;
    *(0 + r3) = r5; // stw @ 0x8063DC94
    /* stfs f0, 0x64(r3) */ // 0x8063DC98
    r3 = r3 + 4; // 0x8063DC9C
    FUN_805E3430(r3); // bl 0x805E3430
}