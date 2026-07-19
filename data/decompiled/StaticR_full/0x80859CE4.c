/* Function at 0x80859CE4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80859CE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80859CF0
    r31 = r3;
    r4 = r31 + 0x298; // 0x80859CF8
    r5 = *(0x14 + r3); // lwz @ 0x80859CFC
    r3 = *(0x10 + r3); // lwz @ 0x80859D00
    /* lfs f1, 0x80(r5) */ // 0x80859D04
    /* lfs f2, 0x84(r5) */ // 0x80859D08
    FUN_8084F664(r4); // bl 0x8084F664
    /* neg r0, r3 */ // 0x80859D10
    /* li r4, 0 */ // 0x80859D14
    /* andc r0, r0, r3 */ // 0x80859D18
    *(0x290 + r31) = r3; // stw @ 0x80859D1C
    /* srwi r0, r0, 0x1f */ // 0x80859D20
    *(0x294 + r31) = r4; // stw @ 0x80859D24
    *(0x28c + r31) = r0; // stb @ 0x80859D28
    r31 = *(0xc + r1); // lwz @ 0x80859D2C
    r0 = *(0x14 + r1); // lwz @ 0x80859D30
    return;
}