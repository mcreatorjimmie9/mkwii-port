/* Function at 0x80781920, size=304 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80781920(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80781928
    *(0xc + r1) = r31; // stw @ 0x80781930
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80781938
    r3 = *(0 + r4); // lwz @ 0x8078193C
    r4 = r31 + 0x30; // 0x80781940
    r3 = *(0x30 + r3); // lwz @ 0x80781944
    FUN_805DE574(r4); // bl 0x805DE574
    /* lis r3, 0 */ // 0x8078194C
    r0 = *(0xd4 + r31); // lwz @ 0x80781950
    r3 = *(0 + r3); // lwz @ 0x80781954
    r3 = *(0x20 + r3); // lwz @ 0x80781958
    if (<) goto 0x0x80781a94;
    r3 = *(0x20 + r31); // lwz @ 0x80781964
    r12 = *(0 + r3); // lwz @ 0x80781968
    r12 = *(0x14 + r12); // lwz @ 0x8078196C
    /* mtctr r12 */ // 0x80781970
    /* bctrl  */ // 0x80781974
    if (!=) goto 0x0x807819c8;
    r3 = *(0x20 + r31); // lwz @ 0x80781980
    /* lis r4, 0 */ // 0x80781984
    /* lfs f1, 0(r4) */ // 0x80781988
    r12 = *(0 + r3); // lwz @ 0x8078198C
    r12 = *(0x1c + r12); // lwz @ 0x80781990
    /* mtctr r12 */ // 0x80781994
    /* bctrl  */ // 0x80781998
    r3 = *(0x20 + r31); // lwz @ 0x8078199C
    r0 = *(0x46 + r3); // lha @ 0x807819A0
    r3 = *(8 + r3); // lwz @ 0x807819A4
    /* slwi r0, r0, 4 */ // 0x807819A8
    r3 = r3 + r0; // 0x807819AC
    r3 = *(0xc + r3); // lhz @ 0x807819B0
    if (==) goto 0x0x807819c8;
    /* li r0, 0 */ // 0x807819BC
    *(0xdc + r31) = r3; // stw @ 0x807819C0
    *(0xb8 + r31) = r0; // stw @ 0x807819C4
    r0 = *(0xb8 + r31); // lwz @ 0x807819C8
    if (<) goto 0x0x80781a24;
    /* li r4, -1 */ // 0x807819D4
    /* li r5, 0 */ // 0x807819D8
    *(0xb4 + r31) = r0; // sth @ 0x807819DC
    r0 = r0 rlwinm 1; // rlwinm
    r3 = *(0xc4 + r31); // lwz @ 0x807819E4
    *(0xb8 + r31) = r4; // stw @ 0x807819E8
    r4 = *(0xc8 + r31); // lwz @ 0x807819EC
    *(0xbc + r31) = r5; // stw @ 0x807819F0
    /* lhzx r0, r3, r0 */ // 0x807819F4
    /* mulli r0, r0, 0x1c */ // 0x807819F8
    r30 = r4 + r0; // 0x807819FC
    r3 = r30 + 4; // 0x80781A00
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80781a4c;
    r3 = *(0xcc + r31); // lwz @ 0x80781A10
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80781a4c */ // 0x80781A20
    r3 = *(0xbc + r31); // lwz @ 0x80781A24
    r0 = *(0xb4 + r31); // lhz @ 0x80781A28
    r3 = r3 + 1; // 0x80781A2C
    *(0xbc + r31) = r3; // stw @ 0x80781A30
    r3 = *(0xc4 + r31); // lwz @ 0x80781A34
    /* slwi r0, r0, 1 */ // 0x80781A38
    r4 = *(0xc8 + r31); // lwz @ 0x80781A3C
    /* lhzx r0, r3, r0 */ // 0x80781A40
    /* mulli r0, r0, 0x1c */ // 0x80781A44
    r30 = r4 + r0; // 0x80781A48
    r3 = r30 + 0x10; // 0x80781A4C
}