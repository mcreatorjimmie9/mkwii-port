/* Function at 0x80672130, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80672130(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 3 */ // 0x80672138
    *(0x24 + r1) = r0; // stw @ 0x8067213C
    /* li r0, -1 */ // 0x80672140
    *(0x1c + r1) = r31; // stw @ 0x80672144
    r31 = r3;
    *(8 + r3) = r4; // stw @ 0x8067214C
    *(0x1c + r3) = r0; // stw @ 0x80672150
    r12 = *(0 + r3); // lwz @ 0x80672154
    r12 = *(0x38 + r12); // lwz @ 0x80672158
    /* mtctr r12 */ // 0x8067215C
    /* bctrl  */ // 0x80672160
    r0 = *(0x10 + r31); // lwz @ 0x80672164
    if (!=) goto 0x0x8067217c;
    /* lis r3, 0 */ // 0x80672170
    /* lfs f0, 0(r3) */ // 0x80672174
    /* b 0x80672184 */ // 0x80672178
    /* lis r3, 0 */ // 0x8067217C
    /* lfs f0, 0(r3) */ // 0x80672180
    /* lis r4, 0 */ // 0x80672184
    /* stfs f0, 0xc(r1) */ // 0x80672188
    r4 = r4 + 0; // 0x8067218C
    r3 = r31 + 0x24; // 0x80672190
    *(8 + r1) = r4; // stw @ 0x80672194
    FUN_8064E1DC(r4, r3, r4); // bl 0x8064E1DC
    r0 = *(0x24 + r1); // lwz @ 0x806721A0
    r31 = *(0x1c + r1); // lwz @ 0x806721A4
    return;
}