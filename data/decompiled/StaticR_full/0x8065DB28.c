/* Function at 0x8065DB28, size=412 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_8065DB28(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8065DB30
    /* li r5, 0 */ // 0x8065DB34
    *(0x14 + r1) = r0; // stw @ 0x8065DB38
    /* li r0, -1 */ // 0x8065DB3C
    *(0xc + r1) = r31; // stw @ 0x8065DB40
    *(8 + r1) = r30; // stw @ 0x8065DB44
    r30 = r3;
    *(0xb24 + r3) = r0; // stw @ 0x8065DB4C
    r12 = *(0x80 + r3); // lwzu @ 0x8065DB50
    r12 = *(0x10 + r12); // lwz @ 0x8065DB54
    /* mtctr r12 */ // 0x8065DB58
    /* bctrl  */ // 0x8065DB5C
    r3 = r30 + 0x80; // 0x8065DB60
    /* li r4, 1 */ // 0x8065DB64
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = r30;
    r4 = r30 + 0x80; // 0x8065DB70
    FUN_80671C34(r3, r4, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x80; // 0x8065DB78
    r5 = r30 + 0x6c; // 0x8065DB7C
    /* li r4, 1 */ // 0x8065DB80
    /* li r6, 0 */ // 0x8065DB84
    /* li r7, 0 */ // 0x8065DB88
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x8065DB94
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2a4; // 0x8065DBA0
    /* li r4, 0 */ // 0x8065DBA4
    /* li r6, 0 */ // 0x8065DBA8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2a4; // 0x8065DBB0
    /* li r4, 0 */ // 0x8065DBB4
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x2a4; // 0x8065DBBC
    /* li r4, 0x145d */ // 0x8065DBC0
    /* li r5, 0 */ // 0x8065DBC4
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x418; // 0x8065DBD0
    /* li r4, 1 */ // 0x8065DBD4
    /* li r6, 0 */ // 0x8065DBD8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8065DBE0
    r3 = r30 + 0x418; // 0x8065DBE4
    r31 = r31 + 0; // 0x8065DBE8
    /* li r7, 1 */ // 0x8065DBEC
    r4 = r31 + 0x395; // 0x8065DBF0
    /* li r8, 0 */ // 0x8065DBF4
    r5 = r31 + 0x39c; // 0x8065DBF8
    r6 = r31 + 0x3b0; // 0x8065DBFC
    /* li r9, 0 */ // 0x8065DC00
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    r3 = r30 + 0x418; // 0x8065DC08
    r4 = r30 + 0x44; // 0x8065DC0C
    /* li r5, 0 */ // 0x8065DC10
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x66c; // 0x8065DC1C
    /* li r4, 2 */ // 0x8065DC20
    /* li r6, 0 */ // 0x8065DC24
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x66c; // 0x8065DC2C
    r4 = r31 + 0x3ba; // 0x8065DC30
    r5 = r31 + 0x3c1; // 0x8065DC34
    r6 = r31 + 0x3d5; // 0x8065DC38
    /* li r7, 1 */ // 0x8065DC3C
    /* li r8, 0 */ // 0x8065DC40
    /* li r9, 0 */ // 0x8065DC44
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x66c; // 0x8065DC4C
    r4 = r30 + 0x58; // 0x8065DC50
    /* li r5, 0 */ // 0x8065DC54
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x8c0; // 0x8065DC60
    /* li r4, 3 */ // 0x8065DC64
    /* li r6, 0 */ // 0x8065DC68
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x8c0; // 0x8065DC70
    r4 = r31 + 0x3de; // 0x8065DC74
    r5 = r31 + 0x3e5; // 0x8065DC78
    r6 = r31 + 0x3ea; // 0x8065DC7C
    /* li r7, 1 */ // 0x8065DC80
    /* li r8, 0 */ // 0x8065DC84
    /* li r9, 1 */ // 0x8065DC88
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x8c0; // 0x8065DC90
    r4 = r30 + 0x58; // 0x8065DC94
    /* li r5, 0 */ // 0x8065DC98
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x66c; // 0x8065DCA0
    /* li r4, 0 */ // 0x8065DCA4
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x8065DCAC
    r31 = *(0xc + r1); // lwz @ 0x8065DCB0
    r30 = *(8 + r1); // lwz @ 0x8065DCB4
    return;
}