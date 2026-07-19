/* Function at 0x80885B38, size=404 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80885B38(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80885B40
    *(0x2c + r1) = r31; // stw @ 0x80885B48
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x80885B50
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    r0 = *(0x54 + r30); // lbz @ 0x80885B5C
    /* lis r5, 0 */ // 0x80885B60
    r4 = *(0x30 + r30); // lwz @ 0x80885B64
    r5 = r5 + 0; // 0x80885B68
    r3 = *(0x34 + r30); // lwz @ 0x80885B6C
    r0 = *(0x38 + r30); // lwz @ 0x80885B74
    *(0 + r30) = r5; // stw @ 0x80885B78
    *(0x104 + r30) = r4; // stw @ 0x80885B7C
    *(0x108 + r30) = r3; // stw @ 0x80885B80
    *(0x10c + r30) = r0; // stw @ 0x80885B84
    if (==) goto 0x0x80885b94;
    r3 = r30 + 0x48; // 0x80885B8C
    /* b 0x80885bc4 */ // 0x80885B90
    /* li r0, 1 */ // 0x80885B94
    *(0x54 + r30) = r0; // stb @ 0x80885B98
    r4 = r30 + 0x58; // 0x80885BA0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80885BA8
    r3 = r30 + 0x48; // 0x80885BAC
    /* stfs f0, 0x48(r30) */ // 0x80885BB0
    /* lfs f0, 0xc(r1) */ // 0x80885BB4
    /* stfs f0, 0x4c(r30) */ // 0x80885BB8
    /* lfs f0, 0x10(r1) */ // 0x80885BBC
    /* stfs f0, 0x50(r30) */ // 0x80885BC0
    r8 = *(0 + r3); // lwz @ 0x80885BC4
    /* li r0, 0 */ // 0x80885BC8
    r7 = *(4 + r3); // lwz @ 0x80885BCC
    r6 = *(8 + r3); // lwz @ 0x80885BD0
    r5 = *(0x3c + r30); // lwz @ 0x80885BD4
    r4 = *(0x40 + r30); // lwz @ 0x80885BD8
    r3 = *(0x44 + r30); // lwz @ 0x80885BDC
    *(0x110 + r30) = r8; // stw @ 0x80885BE0
    *(0x114 + r30) = r7; // stw @ 0x80885BE4
    *(0x118 + r30) = r6; // stw @ 0x80885BE8
    *(0x11c + r30) = r5; // stw @ 0x80885BEC
    *(0x120 + r30) = r4; // stw @ 0x80885BF0
    *(0x124 + r30) = r3; // stw @ 0x80885BF4
    r3 = *(0 + r31); // lwz @ 0x80885BF8
    r3 = *(0x30 + r3); // lha @ 0x80885BFC
    *(0x128 + r30) = r3; // sth @ 0x80885C00
    *(0x12a + r30) = r0; // sth @ 0x80885C04
    r3 = *(0 + r31); // lwz @ 0x80885C08
    r0 = *(0x2c + r3); // lha @ 0x80885C0C
    *(0x12c + r30) = r0; // sth @ 0x80885C10
    r3 = *(0 + r31); // lwz @ 0x80885C18
    r0 = *(0x32 + r3); // lha @ 0x80885C1C
    *(0x12e + r30) = r0; // sth @ 0x80885C20
    r3 = *(0 + r31); // lwz @ 0x80885C24
    r0 = *(0x2e + r3); // lha @ 0x80885C28
    *(0x130 + r30) = r0; // sth @ 0x80885C2C
    r3 = *(0 + r31); // lwz @ 0x80885C30
    r0 = *(0x34 + r3); // lha @ 0x80885C34
    *(0x132 + r30) = r0; // sth @ 0x80885C38
    if (>=) goto 0x0x80885c48;
    /* li r0, 2 */ // 0x80885C40
    *(0x12c + r30) = r0; // sth @ 0x80885C44
    r0 = *(0x12e + r30); // lha @ 0x80885C48
    if (>=) goto 0x0x80885c5c;
    /* li r0, 2 */ // 0x80885C54
    *(0x12e + r30) = r0; // sth @ 0x80885C58
    r3 = *(0x12c + r30); // lha @ 0x80885C5C
    /* lis r5, 0x4330 */ // 0x80885C60
    r0 = *(0x12e + r30); // lha @ 0x80885C64
    /* lis r6, 0 */ // 0x80885C68
    /* xoris r3, r3, 0x8000 */ // 0x80885C6C
    *(0x1c + r1) = r3; // stw @ 0x80885C70
    /* xoris r0, r0, 0x8000 */ // 0x80885C74
    /* lis r4, 0 */ // 0x80885C78
    *(0x18 + r1) = r5; // stw @ 0x80885C7C
    r3 = r30;
    /* lfd f3, 0(r6) */ // 0x80885C84
    /* lfd f0, 0x18(r1) */ // 0x80885C88
    *(0x24 + r1) = r0; // stw @ 0x80885C8C
    /* fsubs f1, f0, f3 */ // 0x80885C90
    /* lfs f2, 0(r4) */ // 0x80885C94
    *(0x20 + r1) = r5; // stw @ 0x80885C98
    /* lfd f0, 0x20(r1) */ // 0x80885C9C
    /* fdivs f1, f2, f1 */ // 0x80885CA0
    /* stfs f1, 0x134(r30) */ // 0x80885CA4
    /* fsubs f0, f0, f3 */ // 0x80885CA8
    /* fdivs f0, f2, f0 */ // 0x80885CAC
    /* stfs f0, 0x138(r30) */ // 0x80885CB0
    r31 = *(0x2c + r1); // lwz @ 0x80885CB4
    r30 = *(0x28 + r1); // lwz @ 0x80885CB8
    r0 = *(0x34 + r1); // lwz @ 0x80885CBC
    return;
}