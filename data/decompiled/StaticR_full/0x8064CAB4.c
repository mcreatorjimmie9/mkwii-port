/* Function at 0x8064CAB4, size=368 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8064CAB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8064CAC8
    *(0x34 + r1) = r29; // stw @ 0x8064CACC
    /* lis r29, 0 */ // 0x8064CAD0
    r29 = r29 + 0; // 0x8064CAD4
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x8064CADC
    /* lis r7, 0 */ // 0x8064CAE0
    r3 = r3 + 0; // 0x8064CAE4
    *(0 + r31) = r3; // stw @ 0x8064CAE8
    r3 = r29 + 0xf8; // 0x8064CAEC
    /* lis r4, 0 */ // 0x8064CAF0
    r30 = *(0xf8 + r29); // lwz @ 0x8064CAF4
    r7 = r7 + 0; // 0x8064CAF8
    r12 = *(4 + r3); // lwz @ 0x8064CAFC
    r6 = r29 + 0x104; // 0x8064CB00
    r11 = *(8 + r3); // lwz @ 0x8064CB04
    r5 = r29 + 0x110; // 0x8064CB08
    *(0x54 + r31) = r11; // stw @ 0x8064CB0C
    r4 = r4 + 0; // 0x8064CB10
    r3 = r31 + 0x80; // 0x8064CB14
    *(0x44 + r31) = r7; // stw @ 0x8064CB18
    *(0x48 + r31) = r31; // stw @ 0x8064CB1C
    *(0x4c + r31) = r30; // stw @ 0x8064CB20
    *(0x50 + r31) = r12; // stw @ 0x8064CB24
    r10 = *(0x104 + r29); // lwz @ 0x8064CB28
    r9 = *(4 + r6); // lwz @ 0x8064CB2C
    r8 = *(8 + r6); // lwz @ 0x8064CB30
    *(0x68 + r31) = r8; // stw @ 0x8064CB34
    *(0x58 + r31) = r7; // stw @ 0x8064CB38
    *(0x5c + r31) = r31; // stw @ 0x8064CB3C
    *(0x60 + r31) = r10; // stw @ 0x8064CB40
    *(0x64 + r31) = r9; // stw @ 0x8064CB44
    r7 = *(0x110 + r29); // lwz @ 0x8064CB48
    r6 = *(4 + r5); // lwz @ 0x8064CB4C
    r0 = *(8 + r5); // lwz @ 0x8064CB50
    *(0x20 + r1) = r30; // stw @ 0x8064CB54
    *(0x24 + r1) = r12; // stw @ 0x8064CB58
    *(0x28 + r1) = r11; // stw @ 0x8064CB5C
    *(0x14 + r1) = r10; // stw @ 0x8064CB60
    *(0x18 + r1) = r9; // stw @ 0x8064CB64
    *(0x1c + r1) = r8; // stw @ 0x8064CB68
    *(8 + r1) = r7; // stw @ 0x8064CB6C
    *(0xc + r1) = r6; // stw @ 0x8064CB70
    *(0x10 + r1) = r0; // stw @ 0x8064CB74
    *(0x6c + r31) = r4; // stw @ 0x8064CB78
    *(0x70 + r31) = r31; // stw @ 0x8064CB7C
    *(0x74 + r31) = r7; // stw @ 0x8064CB80
    *(0x78 + r31) = r6; // stw @ 0x8064CB84
    *(0x7c + r31) = r0; // stw @ 0x8064CB88
    FUN_80669F74(); // bl 0x80669F74
    r29 = r31 + 0x2a4; // 0x8064CB90
    r3 = r29;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8064CB9C
    r3 = r31 + 0x418; // 0x8064CBA0
    r4 = r4 + 0; // 0x8064CBA4
    *(0 + r29) = r4; // stw @ 0x8064CBA8
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r3 = r31 + 0x66c; // 0x8064CBB0
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r29 = r31 + 0x8c0; // 0x8064CBB8
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8064CBC4
    /* lis r5, 0 */ // 0x8064CBC8
    /* lfs f0, 0(r3) */ // 0x8064CBCC
    r5 = r5 + 0; // 0x8064CBD0
    r30 = r31 + 0xb24; // 0x8064CBD4
    /* li r4, 0x7d1 */ // 0x8064CBD8
    /* li r0, 0 */ // 0x8064CBDC
    *(0 + r29) = r5; // stw @ 0x8064CBE0
    r3 = r30;
    *(0x254 + r29) = r4; // stw @ 0x8064CBE8
    *(0x258 + r29) = r0; // stw @ 0x8064CBEC
    /* stfs f0, 0x25c(r29) */ // 0x8064CBF0
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8064CBF8
    r3 = r31;
    r4 = r4 + 0; // 0x8064CC00
    *(0 + r30) = r4; // stw @ 0x8064CC04
    r31 = *(0x3c + r1); // lwz @ 0x8064CC08
    r30 = *(0x38 + r1); // lwz @ 0x8064CC0C
    r29 = *(0x34 + r1); // lwz @ 0x8064CC10
    r0 = *(0x44 + r1); // lwz @ 0x8064CC14
    return;
}