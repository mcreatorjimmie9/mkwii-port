/* Function at 0x806B357C, size=480 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_806B357C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x806B3584
    /* li r5, 0 */ // 0x806B3588
    /* li r0, -1 */ // 0x806B3590
    *(0x1c + r1) = r31; // stw @ 0x806B3594
    *(0x18 + r1) = r30; // stw @ 0x806B3598
    /* li r30, 0 */ // 0x806B359C
    *(0x14 + r1) = r29; // stw @ 0x806B35A0
    /* li r29, 1 */ // 0x806B35A4
    *(0x10 + r1) = r28; // stw @ 0x806B35A8
    r28 = r3;
    *(0x8b0 + r3) = r29; // stw @ 0x806B35B0
    *(0x270 + r3) = r0; // stw @ 0x806B35B4
    *(0x44 + r3) = r30; // stw @ 0x806B35B8
    *(0x274 + r3) = r0; // stw @ 0x806B35BC
    *(0x48 + r3) = r30; // stw @ 0x806B35C0
    *(0x278 + r3) = r0; // stw @ 0x806B35C4
    *(0x27c + r3) = r30; // stw @ 0x806B35C8
    *(0x8b4 + r3) = r30; // stb @ 0x806B35CC
    r12 = *(0x4c + r3); // lwzu @ 0x806B35D0
    r12 = *(0x10 + r12); // lwz @ 0x806B35D4
    /* mtctr r12 */ // 0x806B35D8
    /* bctrl  */ // 0x806B35DC
    r3 = r28;
    r4 = r28 + 0x4c; // 0x806B35E4
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r28 + 0x4c; // 0x806B35EC
    /* li r4, 2 */ // 0x806B35F0
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r28;
    /* li r4, 0 */ // 0x806B35FC
    /* li r5, 0 */ // 0x806B3600
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r3 = r28;
    /* li r4, 4 */ // 0x806B360C
    FUN_80671C1C(r4, r5, r3, r4); // bl 0x80671C1C
    r3 = r28;
    r5 = r28 + 0x8b8; // 0x806B3618
    /* li r4, 0 */ // 0x806B361C
    /* li r6, 0 */ // 0x806B3620
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r28 + 0x8b8; // 0x806B3628
    /* li r4, 0 */ // 0x806B362C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r28;
    r5 = r28 + 0x294; // 0x806B3638
    /* li r4, 1 */ // 0x806B363C
    /* li r6, 0 */ // 0x806B3640
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806B3648
    r3 = r28 + 0x294; // 0x806B364C
    r31 = r31 + 0; // 0x806B3650
    /* li r7, 0x1f */ // 0x806B3654
    r4 = r31 + 0x11c; // 0x806B3658
    /* li r8, 0 */ // 0x806B365C
    r5 = r31 + 0x12b; // 0x806B3660
    r6 = r31 + 0x137; // 0x806B3664
    /* li r9, 0 */ // 0x806B3668
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    *(0x4d4 + r28) = r30; // stw @ 0x806B3670
    r3 = r28 + 0x294; // 0x806B3674
    r4 = r28 + 0x280; // 0x806B3678
    /* li r5, 0 */ // 0x806B367C
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r28;
    r5 = r28 + 0x4e8; // 0x806B3688
    /* li r4, 2 */ // 0x806B368C
    /* li r6, 0 */ // 0x806B3690
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r28 + 0x4e8; // 0x806B3698
    r4 = r31 + 0x13f; // 0x806B369C
    r5 = r31 + 0x14e; // 0x806B36A0
    r6 = r31 + 0x15a; // 0x806B36A4
    /* li r7, 0x1f */ // 0x806B36A8
    /* li r8, 0 */ // 0x806B36AC
    /* li r9, 0 */ // 0x806B36B0
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    *(0x728 + r28) = r29; // stw @ 0x806B36B8
    r3 = r28 + 0x4e8; // 0x806B36BC
    r4 = r28 + 0x280; // 0x806B36C0
    /* li r5, 0 */ // 0x806B36C4
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r28;
    r5 = r28 + 0x73c; // 0x806B36D0
    /* li r4, 3 */ // 0x806B36D4
    /* li r6, 0 */ // 0x806B36D8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r28 + 0x73c; // 0x806B36E0
    r4 = r31 + 0x162; // 0x806B36E4
    r5 = r31 + 0x171; // 0x806B36E8
    r6 = r31 + 0x183; // 0x806B36EC
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    /* li r30, 0 */ // 0x806B36F4
    r3 = *(0x8b0 + r28); // lwz @ 0x806B36F8
    r0 = r29 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806B3700
    if (==) goto 0x0x806b3720;
    r0 = *(0x27c + r28); // lwz @ 0x806B3708
    r4 = r30;
    /* mulli r0, r0, 0x254 */ // 0x806B3710
    r3 = r28 + r0; // 0x806B3714
    r3 = r3 + 0x294; // 0x806B3718
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r30 = r30 + 1; // 0x806B3720
    if (<) goto 0x0x806b36f8;
    r3 = r28;
    /* li r4, 5 */ // 0x806B3730
    /* li r5, 0 */ // 0x806B3734
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x24 + r1); // lwz @ 0x806B373C
    r31 = *(0x1c + r1); // lwz @ 0x806B3740
    r30 = *(0x18 + r1); // lwz @ 0x806B3744
    r29 = *(0x14 + r1); // lwz @ 0x806B3748
    r28 = *(0x10 + r1); // lwz @ 0x806B374C
    return;
}