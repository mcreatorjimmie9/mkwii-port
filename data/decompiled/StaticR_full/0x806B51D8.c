/* Function at 0x806B51D8, size=288 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_806B51D8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x806B51E0
    /* li r5, 0 */ // 0x806B51E4
    *(0x5c + r1) = r31; // stw @ 0x806B51EC
    *(0x58 + r1) = r30; // stw @ 0x806B51F0
    *(0x54 + r1) = r29; // stw @ 0x806B51F4
    r29 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806B51FC
    r12 = *(0x10 + r12); // lwz @ 0x806B5200
    /* mtctr r12 */ // 0x806B5204
    r3 = r3 + 0x58; // 0x806B5208
    /* bctrl  */ // 0x806B520C
    r3 = r29;
    r4 = r29 + 0x58; // 0x806B5214
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r29 + 0x58; // 0x806B521C
    r5 = r29 + 0x44; // 0x806B5220
    /* li r4, 0 */ // 0x806B5224
    /* li r6, 0 */ // 0x806B5228
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r29;
    /* li r4, 1 */ // 0x806B5234
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r29;
    r5 = r29 + 0x1a0; // 0x806B5240
    /* li r4, 0 */ // 0x806B5244
    /* li r6, 0 */ // 0x806B5248
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r29 + 0x1a0; // 0x806B5254
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r30, 0 */ // 0x806B525C
    r31 = *(0 + r30); // lwzu @ 0x806B5260
    /* lis r4, 0 */ // 0x806B5264
    *(8 + r1) = r31; // stw @ 0x806B5268
    r12 = *(4 + r30); // lwz @ 0x806B526C
    r4 = r4 + 0; // 0x806B5270
    r11 = *(8 + r30); // lwz @ 0x806B5274
    r10 = *(0xc + r30); // lwz @ 0x806B527C
    r5 = r4 + 0xc; // 0x806B5280
    r9 = *(0x10 + r30); // lwz @ 0x806B5284
    r6 = r4 + 0x1b; // 0x806B5288
    r8 = *(0x14 + r30); // lwz @ 0x806B528C
    r0 = *(0x18 + r30); // lwz @ 0x806B5294
    *(0xc + r1) = r12; // stw @ 0x806B5298
    *(0x10 + r1) = r11; // stw @ 0x806B529C
    *(0x14 + r1) = r10; // stw @ 0x806B52A0
    *(0x18 + r1) = r9; // stw @ 0x806B52A4
    *(0x1c + r1) = r8; // stw @ 0x806B52A8
    *(0x20 + r1) = r0; // stw @ 0x806B52AC
    FUN_8064E36C(); // bl 0x8064E36C
    r3 = r29 + 0x238; // 0x806B52B4
    /* li r4, 0 */ // 0x806B52B8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806B52C0
    /* li r4, 0 */ // 0x806B52C4
    /* lfs f1, 0(r5) */ // 0x806B52C8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* li r4, -1 */ // 0x806B52D4
    FUN_8064E32C(r4, r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x806B52DC
    r31 = *(0x5c + r1); // lwz @ 0x806B52E0
    r30 = *(0x58 + r1); // lwz @ 0x806B52E4
    r29 = *(0x54 + r1); // lwz @ 0x806B52E8
    return;
}