/* Function at 0x80776794, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80776794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807767A0
    r31 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807767AC
    /* lis r3, 0 */ // 0x807767B0
    r4 = r4 + 0; // 0x807767B4
    *(0 + r31) = r4; // stw @ 0x807767B8
    r3 = *(0 + r3); // lwz @ 0x807767BC
    r0 = *(0x24 + r3); // lbz @ 0x807767C0
    /* slwi r3, r0, 2 */ // 0x807767C4
    FUN_805E3430(r4); // bl 0x805E3430
}