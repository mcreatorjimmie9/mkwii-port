/* Function at 0x806ACFAC, size=728 bytes */
/* Stack frame: 416 bytes */
/* Saved registers: r31, r30 */
/* Calls: 26 function(s) */

int FUN_806ACFAC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -416(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806ACFB4
    /* li r5, 0 */ // 0x806ACFB8
    *(0x1a4 + r1) = r0; // stw @ 0x806ACFBC
    *(0x19c + r1) = r31; // stw @ 0x806ACFC0
    r31 = r3;
    *(0x198 + r1) = r30; // stw @ 0x806ACFC8
    r4 = *(0 + r4); // lwz @ 0x806ACFCC
    r4 = *(0 + r4); // lwz @ 0x806ACFD0
    r0 = *(0 + r4); // lwz @ 0x806ACFD4
    if (<) goto 0x0x806acfec;
    if (>) goto 0x0x806acfec;
    /* li r5, 1 */ // 0x806ACFE8
    r12 = *(0xa88 + r3); // lwzu @ 0x806ACFEC
    /* li r4, 1 */ // 0x806ACFF0
    r12 = *(0x10 + r12); // lwz @ 0x806ACFF4
    /* mtctr r12 */ // 0x806ACFF8
    /* bctrl  */ // 0x806ACFFC
    r3 = r31;
    r4 = r31 + 0xa88; // 0x806AD004
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31 + 0xa88; // 0x806AD00C
    /* li r4, 2 */ // 0x806AD010
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r31;
    /* li r4, 5 */ // 0x806AD01C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x94; // 0x806AD028
    /* li r4, 0 */ // 0x806AD02C
    /* li r6, 0 */ // 0x806AD030
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x94; // 0x806AD038
    /* li r4, 0 */ // 0x806AD03C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r31;
    r5 = r31 + 0x208; // 0x806AD048
    /* li r4, 1 */ // 0x806AD04C
    /* li r6, 0 */ // 0x806AD050
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x806AD058
    r3 = r31 + 0x208; // 0x806AD05C
    r6 = r6 + 0; // 0x806AD060
    /* li r7, 1 */ // 0x806AD064
    r4 = r6 + 0xa7; // 0x806AD068
    /* li r8, 0 */ // 0x806AD06C
    r5 = r6 + 0xae; // 0x806AD070
    r6 = r6 + 0xc1; // 0x806AD074
    /* li r9, 0 */ // 0x806AD078
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    /* li r0, 1 */ // 0x806AD080
    *(0x448 + r31) = r0; // stw @ 0x806AD084
    r3 = r31 + 0x208; // 0x806AD088
    r4 = r31 + 0x44; // 0x806AD08C
    /* li r5, 0 */ // 0x806AD090
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x208; // 0x806AD098
    r4 = r31 + 0x6c; // 0x806AD09C
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    FUN_80654ECC(r3, r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806AD0AC
    r5 = *(0 + r3); // lwz @ 0x806AD0B0
    r0 = *(0x36 + r5); // lha @ 0x806AD0B4
    if (<) goto 0x0x806ad0dc;
    /* lis r3, 1 */ // 0x806AD0C0
    /* clrlwi r4, r0, 0x18 */ // 0x806AD0C4
    r0 = r3 + -0x6c10; // 0x806AD0C8
    r0 = r0 * r4; // 0x806AD0CC
    r3 = r5 + r0; // 0x806AD0D0
    r3 = r3 + 0x38; // 0x806AD0D4
    /* b 0x806ad0e0 */ // 0x806AD0D8
    /* li r3, 0 */ // 0x806AD0DC
    /* addis r3, r3, 1 */ // 0x806AD0E0
    /* lis r30, 0 */ // 0x806AD0E4
    r0 = *(-0x6fe8 + r3); // lhz @ 0x806AD0E8
    r30 = r30 + 0; // 0x806AD0EC
    *(0xcc + r1) = r0; // stw @ 0x806AD0F0
    r3 = r31 + 0x208; // 0x806AD0F4
    r4 = r30 + 0xd1; // 0x806AD0F8
    /* li r5, 0x106a */ // 0x806AD100
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31;
    r5 = r31 + 0x45c; // 0x806AD10C
    /* li r4, 2 */ // 0x806AD110
    /* li r6, 0 */ // 0x806AD114
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x45c; // 0x806AD11C
    r4 = r30 + 0xd4; // 0x806AD120
    r5 = r30 + 0xdb; // 0x806AD124
    r6 = r30 + 0xee; // 0x806AD128
    /* li r7, 1 */ // 0x806AD12C
    /* li r8, 0 */ // 0x806AD130
    /* li r9, 0 */ // 0x806AD134
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806AD13C
    *(0x69c + r31) = r0; // stw @ 0x806AD140
    r3 = r31 + 0x45c; // 0x806AD144
    r4 = r31 + 0x44; // 0x806AD148
    /* li r5, 0 */ // 0x806AD14C
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x45c; // 0x806AD154
    r4 = r31 + 0x6c; // 0x806AD158
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    FUN_80654ECC(r3, r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806AD168
    r5 = *(0 + r3); // lwz @ 0x806AD16C
    r0 = *(0x36 + r5); // lha @ 0x806AD170
    if (<) goto 0x0x806ad198;
    /* lis r3, 1 */ // 0x806AD17C
    /* clrlwi r4, r0, 0x18 */ // 0x806AD180
    r0 = r3 + -0x6c10; // 0x806AD184
    r0 = r0 * r4; // 0x806AD188
    r3 = r5 + r0; // 0x806AD18C
    r3 = r3 + 0x38; // 0x806AD190
    /* b 0x806ad19c */ // 0x806AD194
    /* li r3, 0 */ // 0x806AD198
    /* addis r3, r3, 1 */ // 0x806AD19C
    /* lis r30, 0 */ // 0x806AD1A0
    r0 = *(-0x6fe0 + r3); // lhz @ 0x806AD1A4
    r30 = r30 + 0; // 0x806AD1A8
    *(8 + r1) = r0; // stw @ 0x806AD1AC
    r3 = r31 + 0x45c; // 0x806AD1B0
    r4 = r30 + 0xfb; // 0x806AD1B4
    /* li r5, 0x106b */ // 0x806AD1BC
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31;
    r5 = r31 + 0x6b0; // 0x806AD1C8
    /* li r4, 3 */ // 0x806AD1CC
    /* li r6, 0 */ // 0x806AD1D0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x6b0; // 0x806AD1D8
    r4 = r30 + 0xfe; // 0x806AD1DC
    r5 = r30 + 0x105; // 0x806AD1E0
    r6 = r30 + 0x10a; // 0x806AD1E4
    /* li r7, 1 */ // 0x806AD1E8
    /* li r8, 0 */ // 0x806AD1EC
    /* li r9, 1 */ // 0x806AD1F0
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806AD1F8
    *(0x8f0 + r31) = r0; // stw @ 0x806AD1FC
    r3 = r31 + 0x6b0; // 0x806AD200
    r4 = r31 + 0x58; // 0x806AD204
    /* li r5, 0 */ // 0x806AD208
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x6b0; // 0x806AD210
    r4 = r31 + 0x6c; // 0x806AD214
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r5 = r31 + 0x914; // 0x806AD220
    /* li r4, 4 */ // 0x806AD224
    /* li r6, 0 */ // 0x806AD228
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x914; // 0x806AD230
    FUN_808D58CC(r5, r4, r6, r3); // bl 0x808D58CC
    r3 = r31 + 0xa88; // 0x806AD238
    r5 = r31 + 0x80; // 0x806AD23C
    /* li r4, 1 */ // 0x806AD240
    /* li r6, 0 */ // 0x806AD244
    /* li r7, 0 */ // 0x806AD248
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r31 + 0x208; // 0x806AD250
    /* li r4, 0 */ // 0x806AD254
    FUN_80649EEC(r6, r7, r3, r4); // bl 0x80649EEC
    r3 = r31 + 0x914; // 0x806AD25C
    /* li r4, 0x10da */ // 0x806AD260
    /* li r5, 0 */ // 0x806AD264
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x1a4 + r1); // lwz @ 0x806AD26C
    r31 = *(0x19c + r1); // lwz @ 0x806AD270
    r30 = *(0x198 + r1); // lwz @ 0x806AD274
    return;
}