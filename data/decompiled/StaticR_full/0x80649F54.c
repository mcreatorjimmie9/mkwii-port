/* Function at 0x80649F54, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80649F54(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x80649F5C
    *(0xc + r1) = r31; // stw @ 0x80649F64
    *(8 + r1) = r30; // stw @ 0x80649F68
    r30 = r3;
    r3 = r3 + 0x98; // 0x80649F70
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80649F78
    /* li r4, 0 */ // 0x80649F7C
    /* lfs f1, 0(r31) */ // 0x80649F80
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80649F88
    /* li r4, 3 */ // 0x80649F8C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80649F94
    /* li r4, 0 */ // 0x80649F98
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r4 = *(0x250 + r30); // lwz @ 0x80649FA0
    r3 = r30;
    /* li r5, -1 */ // 0x80649FA8
    FUN_806A03CC(r4, r3, r5); // bl 0x806A03CC
    /* li r0, 8 */ // 0x80649FB0
    *(0x250 + r30) = r0; // stw @ 0x80649FB4
    r31 = *(0xc + r1); // lwz @ 0x80649FB8
    r30 = *(8 + r1); // lwz @ 0x80649FBC
    r0 = *(0x14 + r1); // lwz @ 0x80649FC0
    return;
}