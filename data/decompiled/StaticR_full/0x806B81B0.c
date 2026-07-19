/* Function at 0x806B81B0, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_806B81B0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806B81B8
    /* li r5, 0 */ // 0x806B81BC
    *(0x14 + r1) = r0; // stw @ 0x806B81C0
    *(0xc + r1) = r31; // stw @ 0x806B81C4
    *(8 + r1) = r30; // stw @ 0x806B81C8
    r30 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806B81D0
    r12 = *(0x10 + r12); // lwz @ 0x806B81D4
    /* mtctr r12 */ // 0x806B81D8
    r3 = r3 + 0x58; // 0x806B81DC
    /* bctrl  */ // 0x806B81E0
    r3 = r30;
    r4 = r30 + 0x58; // 0x806B81E8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x58; // 0x806B81F0
    r5 = r30 + 0x44; // 0x806B81F4
    /* li r4, 0 */ // 0x806B81F8
    /* li r6, 0 */ // 0x806B81FC
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r30;
    /* li r4, 2 */ // 0x806B8208
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x320; // 0x806B8214
    /* li r4, 0 */ // 0x806B8218
    /* li r6, 0 */ // 0x806B821C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806B8224
    r3 = r30 + 0x320; // 0x806B8228
    r4 = r31 + 0; // 0x806B822C
    r5 = r4 + 0xe; // 0x806B8230
    r6 = r4 + 0x26; // 0x806B8234
    FUN_80671038(r3, r4, r5, r6); // bl 0x80671038
    r3 = r30;
    r5 = r30 + 0x494; // 0x806B8240
    /* li r4, 1 */ // 0x806B8244
    /* li r6, 0 */ // 0x806B8248
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x806B8250
    r3 = r30 + 0x494; // 0x806B8254
    r4 = r31 + 0x3e; // 0x806B8258
    r5 = r31 + 0x4d; // 0x806B825C
    r6 = r31 + 0x57; // 0x806B8260
    FUN_8066D30C(r3, r4, r5, r6); // bl 0x8066D30C
    /* lis r4, 0 */ // 0x806B8268
    r3 = r30 + 0x320; // 0x806B826C
    /* lfs f0, 0(r4) */ // 0x806B8270
    /* li r4, 1 */ // 0x806B8274
    /* stfs f0, 0x510(r30) */ // 0x806B8278
    FUN_8069FEE8(r4, r3, r4); // bl 0x8069FEE8
    r3 = r30 + 0x320; // 0x806B8280
    r5 = r30 + 0x19c; // 0x806B8284
    /* li r4, 0 */ // 0x806B8288
    FUN_8069FEF8(r3, r5, r4); // bl 0x8069FEF8
    r3 = r30 + 0x19c; // 0x806B8290
    r4 = r31 + 0x61; // 0x806B8294
    r5 = r31 + 0x6f; // 0x806B8298
    r6 = r31 + 0x7c; // 0x806B829C
    /* li r7, 0 */ // 0x806B82A0
    /* li r8, 0 */ // 0x806B82A4
    /* li r9, 0 */ // 0x806B82A8
    /* li r10, 0 */ // 0x806B82AC
    FUN_80670B10(r6, r7, r8, r9, r10); // bl 0x80670B10
    r3 = r30 + 0x19c; // 0x806B82B4
    r4 = r31 + 0x89; // 0x806B82B8
    FUN_806A0680(r9, r10, r3, r4); // bl 0x806A0680
    r0 = *(0x14 + r1); // lwz @ 0x806B82C0
    r31 = *(0xc + r1); // lwz @ 0x806B82C4
    r30 = *(8 + r1); // lwz @ 0x806B82C8
    return;
}