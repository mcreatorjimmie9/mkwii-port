/* Function at 0x806D0B64, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806D0B64(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806D0B78
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806D0B80
    /* lis r5, 0 */ // 0x806D0B84
    r4 = r4 + 0; // 0x806D0B88
    *(0 + r31) = r4; // stw @ 0x806D0B8C
    /* lis r3, 0 */ // 0x806D0B90
    r5 = r5 + 0; // 0x806D0B94
    r10 = *(0 + r3); // lwzu @ 0x806D0B98
    /* lis r4, 0 */ // 0x806D0B9C
    /* lis r7, 0 */ // 0x806D0BA0
    *(0x14 + r1) = r10; // stw @ 0x806D0BA4
    r9 = *(4 + r3); // lwz @ 0x806D0BA8
    r4 = r4 + 0; // 0x806D0BAC
    r8 = *(8 + r3); // lwz @ 0x806D0BB0
    r3 = r31 + 0x6c; // 0x806D0BB4
    *(0x54 + r31) = r8; // stw @ 0x806D0BB8
    *(0x44 + r31) = r5; // stw @ 0x806D0BBC
    *(0x48 + r31) = r31; // stw @ 0x806D0BC0
    *(0x4c + r31) = r10; // stw @ 0x806D0BC4
    *(0x50 + r31) = r9; // stw @ 0x806D0BC8
    r6 = *(0 + r7); // lwzu @ 0x806D0BCC
    *(0x18 + r1) = r9; // stw @ 0x806D0BD0
    r5 = *(4 + r7); // lwz @ 0x806D0BD4
    r0 = *(8 + r7); // lwz @ 0x806D0BD8
    *(0x1c + r1) = r8; // stw @ 0x806D0BDC
    *(8 + r1) = r6; // stw @ 0x806D0BE0
    *(0xc + r1) = r5; // stw @ 0x806D0BE4
    *(0x10 + r1) = r0; // stw @ 0x806D0BE8
    *(0x58 + r31) = r4; // stw @ 0x806D0BEC
    *(0x5c + r31) = r31; // stw @ 0x806D0BF0
    *(0x60 + r31) = r6; // stw @ 0x806D0BF4
    *(0x64 + r31) = r5; // stw @ 0x806D0BF8
    *(0x68 + r31) = r0; // stw @ 0x806D0BFC
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806D0C04
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D0C10
    r3 = r31 + 0x404; // 0x806D0C14
    r4 = r4 + 0; // 0x806D0C18
    *(0 + r30) = r4; // stw @ 0x806D0C1C
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x578; // 0x806D0C24
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r30 = r31 + 0x7cc; // 0x806D0C2C
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806D0C38
    /* lis r5, 0 */ // 0x806D0C3C
    /* lfs f0, 0(r3) */ // 0x806D0C40
    r5 = r5 + 0; // 0x806D0C44
    /* li r4, 0x7d1 */ // 0x806D0C48
    /* li r0, 0 */ // 0x806D0C4C
    *(0 + r30) = r5; // stw @ 0x806D0C50
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806D0C58
    *(0x258 + r30) = r0; // stw @ 0x806D0C5C
    /* stfs f0, 0x25c(r30) */ // 0x806D0C60
    r31 = *(0x2c + r1); // lwz @ 0x806D0C64
    r30 = *(0x28 + r1); // lwz @ 0x806D0C68
    r0 = *(0x34 + r1); // lwz @ 0x806D0C6C
    return;
}