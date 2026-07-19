/* Function at 0x806A975C, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806A975C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806A9770
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806A9778
    /* lis r5, 0 */ // 0x806A977C
    r4 = r4 + 0; // 0x806A9780
    *(0 + r31) = r4; // stw @ 0x806A9784
    /* lis r3, 0 */ // 0x806A9788
    r5 = r5 + 0; // 0x806A978C
    r10 = *(0 + r3); // lwzu @ 0x806A9790
    /* lis r4, 0 */ // 0x806A9794
    /* lis r7, 0 */ // 0x806A9798
    *(0x14 + r1) = r10; // stw @ 0x806A979C
    r9 = *(4 + r3); // lwz @ 0x806A97A0
    r4 = r4 + 0; // 0x806A97A4
    r8 = *(8 + r3); // lwz @ 0x806A97A8
    r3 = r31 + 0x6c; // 0x806A97AC
    *(0x54 + r31) = r8; // stw @ 0x806A97B0
    *(0x44 + r31) = r5; // stw @ 0x806A97B4
    *(0x48 + r31) = r31; // stw @ 0x806A97B8
    *(0x4c + r31) = r10; // stw @ 0x806A97BC
    *(0x50 + r31) = r9; // stw @ 0x806A97C0
    r6 = *(0 + r7); // lwzu @ 0x806A97C4
    *(0x18 + r1) = r9; // stw @ 0x806A97C8
    r5 = *(4 + r7); // lwz @ 0x806A97CC
    r0 = *(8 + r7); // lwz @ 0x806A97D0
    *(0x1c + r1) = r8; // stw @ 0x806A97D4
    *(8 + r1) = r6; // stw @ 0x806A97D8
    *(0xc + r1) = r5; // stw @ 0x806A97DC
    *(0x10 + r1) = r0; // stw @ 0x806A97E0
    *(0x58 + r31) = r4; // stw @ 0x806A97E4
    *(0x5c + r31) = r31; // stw @ 0x806A97E8
    *(0x60 + r31) = r6; // stw @ 0x806A97EC
    *(0x64 + r31) = r5; // stw @ 0x806A97F0
    *(0x68 + r31) = r0; // stw @ 0x806A97F4
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806A97FC
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806A9808
    r3 = r31 + 0x404; // 0x806A980C
    r4 = r4 + 0; // 0x806A9810
    *(0 + r30) = r4; // stw @ 0x806A9814
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x578; // 0x806A981C
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r30 = r31 + 0x7cc; // 0x806A9824
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806A9830
    /* lis r5, 0 */ // 0x806A9834
    /* lfs f0, 0(r3) */ // 0x806A9838
    r5 = r5 + 0; // 0x806A983C
    /* li r4, 0x7d1 */ // 0x806A9840
    /* li r0, 0 */ // 0x806A9844
    *(0 + r30) = r5; // stw @ 0x806A9848
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806A9850
    *(0x258 + r30) = r0; // stw @ 0x806A9854
    /* stfs f0, 0x25c(r30) */ // 0x806A9858
    r31 = *(0x2c + r1); // lwz @ 0x806A985C
    r30 = *(0x28 + r1); // lwz @ 0x806A9860
    r0 = *(0x34 + r1); // lwz @ 0x806A9864
    return;
}