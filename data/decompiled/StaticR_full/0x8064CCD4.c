/* Function at 0x8064CCD4, size=624 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 27 function(s) */

int FUN_8064CCD4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8064CCDC
    /* li r5, 0 */ // 0x8064CCE0
    *(0x14 + r1) = r0; // stw @ 0x8064CCE4
    *(0xc + r1) = r31; // stw @ 0x8064CCE8
    *(8 + r1) = r30; // stw @ 0x8064CCEC
    r30 = r3;
    r12 = *(0x80 + r3); // lwz @ 0x8064CCF4
    r12 = *(0x10 + r12); // lwz @ 0x8064CCF8
    /* mtctr r12 */ // 0x8064CCFC
    r3 = r3 + 0x80; // 0x8064CD00
    /* bctrl  */ // 0x8064CD04
    r3 = r30;
    r4 = r30 + 0x80; // 0x8064CD0C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x80; // 0x8064CD14
    /* li r4, 2 */ // 0x8064CD18
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x80; // 0x8064CD20
    r5 = r30 + 0x6c; // 0x8064CD24
    /* li r4, 1 */ // 0x8064CD28
    /* li r6, 0 */ // 0x8064CD2C
    /* li r7, 0 */ // 0x8064CD30
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 5 */ // 0x8064CD3C
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2a4; // 0x8064CD48
    /* li r4, 0 */ // 0x8064CD4C
    /* li r6, 0 */ // 0x8064CD50
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2a4; // 0x8064CD58
    /* li r4, 0 */ // 0x8064CD5C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x2a4; // 0x8064CD64
    /* li r4, 0x138a */ // 0x8064CD68
    /* li r5, 0 */ // 0x8064CD6C
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x418; // 0x8064CD78
    /* li r4, 1 */ // 0x8064CD7C
    /* li r6, 0 */ // 0x8064CD80
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8064CD88
    r3 = r30 + 0x418; // 0x8064CD8C
    r31 = r31 + 0; // 0x8064CD90
    /* li r7, 1 */ // 0x8064CD94
    r4 = r31 + 0x187; // 0x8064CD98
    /* li r8, 0 */ // 0x8064CD9C
    r5 = r31 + 0x18e; // 0x8064CDA0
    r6 = r31 + 0x19a; // 0x8064CDA4
    /* li r9, 0 */ // 0x8064CDA8
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    /* li r0, 1 */ // 0x8064CDB0
    *(0x658 + r30) = r0; // stw @ 0x8064CDB4
    r3 = r30 + 0x418; // 0x8064CDB8
    r4 = r30 + 0x44; // 0x8064CDBC
    /* li r5, 0 */ // 0x8064CDC0
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x418; // 0x8064CDC8
    r4 = r30 + 0x58; // 0x8064CDCC
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0x66c; // 0x8064CDD8
    /* li r4, 2 */ // 0x8064CDDC
    /* li r6, 0 */ // 0x8064CDE0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x66c; // 0x8064CDE8
    r4 = r31 + 0x1aa; // 0x8064CDEC
    r5 = r31 + 0x1b1; // 0x8064CDF0
    r6 = r31 + 0x1bd; // 0x8064CDF4
    /* li r7, 1 */ // 0x8064CDF8
    /* li r8, 0 */ // 0x8064CDFC
    /* li r9, 0 */ // 0x8064CE00
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x8064CE08
    *(0x8ac + r30) = r0; // stw @ 0x8064CE0C
    r3 = r30 + 0x66c; // 0x8064CE10
    r4 = r30 + 0x44; // 0x8064CE14
    /* li r5, 0 */ // 0x8064CE18
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x66c; // 0x8064CE20
    r4 = r30 + 0x58; // 0x8064CE24
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0x8c0; // 0x8064CE30
    /* li r4, 3 */ // 0x8064CE34
    /* li r6, 0 */ // 0x8064CE38
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x8c0; // 0x8064CE40
    r4 = r31 + 0x1d0; // 0x8064CE44
    r5 = r31 + 0x1d7; // 0x8064CE48
    r6 = r31 + 0x1dc; // 0x8064CE4C
    /* li r7, 1 */ // 0x8064CE50
    /* li r8, 0 */ // 0x8064CE54
    /* li r9, 1 */ // 0x8064CE58
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x8064CE60
    *(0xb00 + r30) = r0; // stw @ 0x8064CE64
    r3 = r30 + 0x8c0; // 0x8064CE68
    r4 = r30 + 0x44; // 0x8064CE6C
    /* li r5, 0 */ // 0x8064CE70
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x8c0; // 0x8064CE78
    r4 = r30 + 0x58; // 0x8064CE7C
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0xb24; // 0x8064CE88
    /* li r4, 4 */ // 0x8064CE8C
    /* li r6, 0 */ // 0x8064CE90
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0xb24; // 0x8064CE98
    FUN_808D58CC(r5, r4, r6, r3); // bl 0x808D58CC
    /* lis r3, 0 */ // 0x8064CEA0
    r3 = *(0 + r3); // lwz @ 0x8064CEA4
    r0 = *(0x10 + r3); // lwz @ 0x8064CEA8
    if (==) goto 0x0x8064ced0;
    if (==) goto 0x0x8064ced0;
    if (==) goto 0x0x8064cef0;
    if (==) goto 0x0x8064cef0;
    /* b 0x8064cf10 */ // 0x8064CECC
    r3 = r30 + 0x418; // 0x8064CED0
    /* li r4, 0 */ // 0x8064CED4
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r3 = r30 + 0xb24; // 0x8064CEDC
    /* li r4, 0x13ca */ // 0x8064CEE0
    /* li r5, 0 */ // 0x8064CEE4
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* b 0x8064cf2c */ // 0x8064CEEC
    r3 = r30 + 0x66c; // 0x8064CEF0
    /* li r4, 0 */ // 0x8064CEF4
    FUN_80649EEC(r5, r3, r4); // bl 0x80649EEC
    r3 = r30 + 0xb24; // 0x8064CEFC
    /* li r4, 0x13cc */ // 0x8064CF00
    /* li r5, 0 */ // 0x8064CF04
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* b 0x8064cf2c */ // 0x8064CF0C
    r3 = r30 + 0x418; // 0x8064CF10
    /* li r4, 0 */ // 0x8064CF14
    FUN_80649EEC(r5, r3, r4); // bl 0x80649EEC
    r3 = r30 + 0xb24; // 0x8064CF1C
    /* li r4, 0x13ca */ // 0x8064CF20
    /* li r5, 0 */ // 0x8064CF24
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x8064CF2C
    r31 = *(0xc + r1); // lwz @ 0x8064CF30
    r30 = *(8 + r1); // lwz @ 0x8064CF34
    return;
}