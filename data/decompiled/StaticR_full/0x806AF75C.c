/* Function at 0x806AF75C, size=196 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806AF75C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x806AF768
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AF774
    /* lis r7, 0 */ // 0x806AF778
    r4 = r4 + 0; // 0x806AF77C
    *(0 + r31) = r4; // stw @ 0x806AF780
    /* lis r3, 0 */ // 0x806AF784
    r7 = r7 + 0; // 0x806AF788
    r10 = *(0 + r3); // lwzu @ 0x806AF78C
    /* lis r6, 0 */ // 0x806AF790
    *(0x14 + r1) = r10; // stw @ 0x806AF794
    r9 = *(4 + r3); // lwz @ 0x806AF798
    r8 = *(8 + r3); // lwz @ 0x806AF79C
    r3 = r31 + 0x70; // 0x806AF7A0
    *(0x54 + r31) = r8; // stw @ 0x806AF7A4
    *(0x44 + r31) = r7; // stw @ 0x806AF7A8
    *(0x48 + r31) = r31; // stw @ 0x806AF7AC
    *(0x4c + r31) = r10; // stw @ 0x806AF7B0
    *(0x50 + r31) = r9; // stw @ 0x806AF7B4
    r5 = *(0 + r6); // lwzu @ 0x806AF7B8
    *(0x18 + r1) = r9; // stw @ 0x806AF7BC
    r4 = *(4 + r6); // lwz @ 0x806AF7C0
    r0 = *(8 + r6); // lwz @ 0x806AF7C4
    *(0x1c + r1) = r8; // stw @ 0x806AF7C8
    *(8 + r1) = r5; // stw @ 0x806AF7CC
    *(0xc + r1) = r4; // stw @ 0x806AF7D0
    *(0x10 + r1) = r0; // stw @ 0x806AF7D4
    *(0x58 + r31) = r7; // stw @ 0x806AF7D8
    *(0x5c + r31) = r31; // stw @ 0x806AF7DC
    *(0x60 + r31) = r5; // stw @ 0x806AF7E0
    *(0x64 + r31) = r4; // stw @ 0x806AF7E4
    *(0x68 + r31) = r0; // stw @ 0x806AF7E8
    FUN_80669F74(); // bl 0x80669F74
    r3 = r31 + 0x294; // 0x806AF7F0
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r31 + 0x408; // 0x806AF7F8
    FUN_806497A4(r3, r3); // bl 0x806497A4
    r3 = r31 + 0x65c; // 0x806AF800
    FUN_806497A4(r3, r3, r3); // bl 0x806497A4
    r3 = r31;
    r31 = *(0x2c + r1); // lwz @ 0x806AF80C
    r0 = *(0x34 + r1); // lwz @ 0x806AF810
    return;
}