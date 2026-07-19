/* Function at 0x806A7870, size=360 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_806A7870(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806A7878
    /* li r5, 0 */ // 0x806A787C
    *(0x14 + r1) = r0; // stw @ 0x806A7880
    *(0xc + r1) = r31; // stw @ 0x806A7884
    *(8 + r1) = r30; // stw @ 0x806A7888
    r30 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806A7890
    r12 = *(0x10 + r12); // lwz @ 0x806A7894
    /* mtctr r12 */ // 0x806A7898
    r3 = r3 + 0x44; // 0x806A789C
    /* bctrl  */ // 0x806A78A0
    r3 = r30;
    r4 = r30 + 0x44; // 0x806A78A8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 4 */ // 0x806A78B4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x268; // 0x806A78C0
    /* li r4, 0 */ // 0x806A78C4
    /* li r6, 0 */ // 0x806A78C8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x3dc; // 0x806A78D4
    /* li r4, 1 */ // 0x806A78D8
    /* li r6, 0 */ // 0x806A78DC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x628; // 0x806A78E8
    /* li r4, 2 */ // 0x806A78EC
    /* li r6, 0 */ // 0x806A78F0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x87c; // 0x806A78FC
    /* li r4, 3 */ // 0x806A7900
    /* li r6, 0 */ // 0x806A7904
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x268; // 0x806A790C
    /* li r4, 0 */ // 0x806A7910
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    /* lis r31, 0 */ // 0x806A7918
    r3 = r30 + 0x3dc; // 0x806A791C
    r4 = r31 + 0; // 0x806A7920
    FUN_80660B08(r4, r3, r4); // bl 0x80660B08
    r31 = r31 + 0; // 0x806A7928
    r3 = r30 + 0x628; // 0x806A792C
    r4 = r31 + 0x12; // 0x806A7930
    /* li r7, 1 */ // 0x806A7934
    r5 = r31 + 0x19; // 0x806A7938
    r6 = r31 + 0x2b; // 0x806A793C
    /* li r8, 0 */ // 0x806A7940
    /* li r9, 0 */ // 0x806A7944
    FUN_80649914(r7, r5, r6, r8, r9); // bl 0x80649914
    r3 = r30 + 0x87c; // 0x806A794C
    r4 = r31 + 0x2e; // 0x806A7950
    r5 = r31 + 0x35; // 0x806A7954
    r6 = r31 + 0x3a; // 0x806A7958
    /* li r7, 1 */ // 0x806A795C
    /* li r8, 0 */ // 0x806A7960
    /* li r9, 1 */ // 0x806A7964
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x628; // 0x806A796C
    r4 = r30 + 0xae0; // 0x806A7970
    /* li r5, 0 */ // 0x806A7974
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x87c; // 0x806A797C
    r4 = r30 + 0xaf4; // 0x806A7980
    /* li r5, 0 */ // 0x806A7984
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x44; // 0x806A798C
    r5 = r30 + 0xb08; // 0x806A7990
    /* li r4, 1 */ // 0x806A7994
    /* li r6, 0 */ // 0x806A7998
    /* li r7, 0 */ // 0x806A799C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30 + 0x268; // 0x806A79A4
    /* li r4, 0x177c */ // 0x806A79A8
    /* li r5, 0 */ // 0x806A79AC
    FUN_808D5844(r7, r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x628; // 0x806A79B4
    /* li r4, 0 */ // 0x806A79B8
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806A79C0
    r31 = *(0xc + r1); // lwz @ 0x806A79C4
    r30 = *(8 + r1); // lwz @ 0x806A79C8
    return;
}