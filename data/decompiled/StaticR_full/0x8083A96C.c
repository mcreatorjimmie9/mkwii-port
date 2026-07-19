/* Function at 0x8083A96C, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8083A96C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8083A97C
    r31 = r3;
    r5 = *(0x50 + r3); // lwz @ 0x8083A984
    r0 = *(0x54 + r3); // lwz @ 0x8083A988
    *(0x18 + r1) = r0; // stw @ 0x8083A98C
    *(0x14 + r1) = r5; // stw @ 0x8083A990
    r0 = *(0x58 + r3); // lwz @ 0x8083A994
    r3 = r3 + 0x1a4; // 0x8083A998
    *(0x1c + r1) = r0; // stw @ 0x8083A99C
    FUN_8081EF98(r3); // bl 0x8081EF98
    /* stfs f1, 0x1a0(r31) */ // 0x8083A9A4
    r3 = r31 + 0x1a4; // 0x8083A9A8
    r4 = r31 + 0xc8; // 0x8083A9AC
    r5 = r31 + 0x1b0; // 0x8083A9B0
    FUN_808622D8(r3, r4, r5); // bl 0x808622D8
    r5 = *(0x1b0 + r31); // lwz @ 0x8083A9B8
    r3 = r31 + 0x1b0; // 0x8083A9BC
    r0 = *(0x1b4 + r31); // lwz @ 0x8083A9C0
    *(0xc + r1) = r0; // stw @ 0x8083A9C8
    *(8 + r1) = r5; // stw @ 0x8083A9CC
    r0 = *(0x1b8 + r31); // lwz @ 0x8083A9D0
    *(0x10 + r1) = r0; // stw @ 0x8083A9D4
    FUN_80816F30(r4); // bl 0x80816F30
}