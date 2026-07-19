/* Function at 0x806B7928, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B7928(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806B793C
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806B7944
    /* lis r5, 0 */ // 0x806B7948
    r4 = r4 + 0; // 0x806B794C
    *(0 + r31) = r4; // stw @ 0x806B7950
    /* lis r3, 0 */ // 0x806B7954
    r5 = r5 + 0; // 0x806B7958
    r10 = *(0 + r3); // lwzu @ 0x806B795C
    /* lis r4, 0 */ // 0x806B7960
    /* lis r7, 0 */ // 0x806B7964
    *(0x14 + r1) = r10; // stw @ 0x806B7968
    r9 = *(4 + r3); // lwz @ 0x806B796C
    r4 = r4 + 0; // 0x806B7970
    r8 = *(8 + r3); // lwz @ 0x806B7974
    r3 = r31 + 0x6c; // 0x806B7978
    *(0x54 + r31) = r8; // stw @ 0x806B797C
    *(0x44 + r31) = r5; // stw @ 0x806B7980
    *(0x48 + r31) = r31; // stw @ 0x806B7984
    *(0x4c + r31) = r10; // stw @ 0x806B7988
    *(0x50 + r31) = r9; // stw @ 0x806B798C
    r6 = *(0 + r7); // lwzu @ 0x806B7990
    *(0x18 + r1) = r9; // stw @ 0x806B7994
    r5 = *(4 + r7); // lwz @ 0x806B7998
    r0 = *(8 + r7); // lwz @ 0x806B799C
    *(0x1c + r1) = r8; // stw @ 0x806B79A0
    *(8 + r1) = r6; // stw @ 0x806B79A4
    *(0xc + r1) = r5; // stw @ 0x806B79A8
    *(0x10 + r1) = r0; // stw @ 0x806B79AC
    *(0x58 + r31) = r4; // stw @ 0x806B79B0
    *(0x5c + r31) = r31; // stw @ 0x806B79B4
    *(0x60 + r31) = r6; // stw @ 0x806B79B8
    *(0x64 + r31) = r5; // stw @ 0x806B79BC
    *(0x68 + r31) = r0; // stw @ 0x806B79C0
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806B79C8
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806B79D4
    r3 = r31 + 0x404; // 0x806B79D8
    r4 = r4 + 0; // 0x806B79DC
    *(0 + r30) = r4; // stw @ 0x806B79E0
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x578; // 0x806B79E8
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r30 = r31 + 0x7cc; // 0x806B79F0
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806B79FC
    /* lis r5, 0 */ // 0x806B7A00
    /* lfs f0, 0(r3) */ // 0x806B7A04
    r5 = r5 + 0; // 0x806B7A08
    /* li r4, 0x7d1 */ // 0x806B7A0C
    /* li r0, 0 */ // 0x806B7A10
    *(0 + r30) = r5; // stw @ 0x806B7A14
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806B7A1C
    *(0x258 + r30) = r0; // stw @ 0x806B7A20
    /* stfs f0, 0x25c(r30) */ // 0x806B7A24
    r31 = *(0x2c + r1); // lwz @ 0x806B7A28
    r30 = *(0x28 + r1); // lwz @ 0x806B7A2C
    r0 = *(0x34 + r1); // lwz @ 0x806B7A30
    return;
}