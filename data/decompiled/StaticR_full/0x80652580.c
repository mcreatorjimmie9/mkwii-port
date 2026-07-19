/* Function at 0x80652580, size=212 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_80652580(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8065258C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80652598
    /* lis r7, 0 */ // 0x8065259C
    r4 = r4 + 0; // 0x806525A0
    *(0 + r31) = r4; // stw @ 0x806525A4
    /* lis r3, 0 */ // 0x806525A8
    r7 = r7 + 0; // 0x806525AC
    r10 = *(0 + r3); // lwzu @ 0x806525B0
    /* lis r6, 0 */ // 0x806525B4
    *(0x14 + r1) = r10; // stw @ 0x806525B8
    r9 = *(4 + r3); // lwz @ 0x806525BC
    r8 = *(8 + r3); // lwz @ 0x806525C0
    r3 = r31 + 0x6c; // 0x806525C4
    *(0x54 + r31) = r8; // stw @ 0x806525C8
    *(0x44 + r31) = r7; // stw @ 0x806525CC
    *(0x48 + r31) = r31; // stw @ 0x806525D0
    *(0x4c + r31) = r10; // stw @ 0x806525D4
    *(0x50 + r31) = r9; // stw @ 0x806525D8
    r5 = *(0 + r6); // lwzu @ 0x806525DC
    *(0x18 + r1) = r9; // stw @ 0x806525E0
    r4 = *(4 + r6); // lwz @ 0x806525E4
    r0 = *(8 + r6); // lwz @ 0x806525E8
    *(0x1c + r1) = r8; // stw @ 0x806525EC
    *(8 + r1) = r5; // stw @ 0x806525F0
    *(0xc + r1) = r4; // stw @ 0x806525F4
    *(0x10 + r1) = r0; // stw @ 0x806525F8
    *(0x58 + r31) = r7; // stw @ 0x806525FC
    *(0x5c + r31) = r31; // stw @ 0x80652600
    *(0x60 + r31) = r5; // stw @ 0x80652604
    *(0x64 + r31) = r4; // stw @ 0x80652608
    *(0x68 + r31) = r0; // stw @ 0x8065260C
    FUN_80669F74(); // bl 0x80669F74
    r3 = r31 + 0x290; // 0x80652614
    FUN_8066D278(r3); // bl 0x8066D278
    r3 = r31 + 0x404; // 0x8065261C
    FUN_806A0418(r3, r3); // bl 0x806A0418
    r3 = r31 + 0x578; // 0x80652624
    FUN_80660A10(r3, r3, r3); // bl 0x80660A10
    r3 = r31 + 0x7c4; // 0x8065262C
    FUN_806497A4(r3, r3, r3); // bl 0x806497A4
    r3 = r31 + 0xa18; // 0x80652634
    FUN_806497A4(r3, r3, r3); // bl 0x806497A4
    r3 = r31;
    r31 = *(0x2c + r1); // lwz @ 0x80652640
    r0 = *(0x34 + r1); // lwz @ 0x80652644
    return;
}