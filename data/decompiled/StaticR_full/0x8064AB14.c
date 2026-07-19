/* Function at 0x8064AB14, size=188 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8064AB14(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8064AB1C
    /* lis r9, 0 */ // 0x8064AB20
    *(0x44 + r1) = r0; // stw @ 0x8064AB24
    r7 = r7 + 0; // 0x8064AB28
    /* li r8, 1 */ // 0x8064AB30
    *(0x3c + r1) = r31; // stw @ 0x8064AB34
    r5 = r7 + 0xd; // 0x8064AB38
    r6 = r7 + 0x14; // 0x8064AB3C
    r7 = r7 + 0x21; // 0x8064AB40
    *(0x38 + r1) = r30; // stw @ 0x8064AB44
    *(0x34 + r1) = r29; // stw @ 0x8064AB48
    *(0x30 + r1) = r28; // stw @ 0x8064AB4C
    r28 = r3;
    r29 = *(0 + r9); // lwzu @ 0x8064AB54
    *(8 + r1) = r29; // stw @ 0x8064AB58
    r30 = *(4 + r9); // lwz @ 0x8064AB5C
    r31 = *(8 + r9); // lwz @ 0x8064AB60
    r12 = *(0xc + r9); // lwz @ 0x8064AB64
    r11 = *(0x10 + r9); // lwz @ 0x8064AB68
    r10 = *(0x14 + r9); // lwz @ 0x8064AB6C
    r0 = *(0x18 + r9); // lwz @ 0x8064AB70
    /* li r9, 0 */ // 0x8064AB74
    *(0xc + r1) = r30; // stw @ 0x8064AB78
    *(0x10 + r1) = r31; // stw @ 0x8064AB7C
    *(0x14 + r1) = r12; // stw @ 0x8064AB80
    *(0x18 + r1) = r11; // stw @ 0x8064AB84
    *(0x1c + r1) = r10; // stw @ 0x8064AB88
    *(0x20 + r1) = r0; // stw @ 0x8064AB8C
    FUN_80649B1C(); // bl 0x80649B1C
    r3 = r28 + 0x98; // 0x8064AB94
    /* li r4, 4 */ // 0x8064AB98
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064ABA0
    /* li r4, 0 */ // 0x8064ABA4
    /* lfs f1, 0(r5) */ // 0x8064ABA8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x44 + r1); // lwz @ 0x8064ABB0
    r31 = *(0x3c + r1); // lwz @ 0x8064ABB4
    r30 = *(0x38 + r1); // lwz @ 0x8064ABB8
    r29 = *(0x34 + r1); // lwz @ 0x8064ABBC
    r28 = *(0x30 + r1); // lwz @ 0x8064ABC0
    return;
}