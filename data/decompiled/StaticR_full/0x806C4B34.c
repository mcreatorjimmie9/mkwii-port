/* Function at 0x806C4B34, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806C4B34(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806C4B48
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806C4B50
    /* lis r5, 0 */ // 0x806C4B54
    r4 = r4 + 0; // 0x806C4B58
    *(0 + r31) = r4; // stw @ 0x806C4B5C
    /* lis r3, 0 */ // 0x806C4B60
    r5 = r5 + 0; // 0x806C4B64
    r10 = *(0 + r3); // lwzu @ 0x806C4B68
    /* lis r4, 0 */ // 0x806C4B6C
    /* lis r7, 0 */ // 0x806C4B70
    *(0x14 + r1) = r10; // stw @ 0x806C4B74
    r9 = *(4 + r3); // lwz @ 0x806C4B78
    r4 = r4 + 0; // 0x806C4B7C
    r8 = *(8 + r3); // lwz @ 0x806C4B80
    r3 = r31 + 0x6c; // 0x806C4B84
    *(0x54 + r31) = r8; // stw @ 0x806C4B88
    *(0x44 + r31) = r5; // stw @ 0x806C4B8C
    *(0x48 + r31) = r31; // stw @ 0x806C4B90
    *(0x4c + r31) = r10; // stw @ 0x806C4B94
    *(0x50 + r31) = r9; // stw @ 0x806C4B98
    r6 = *(0 + r7); // lwzu @ 0x806C4B9C
    *(0x18 + r1) = r9; // stw @ 0x806C4BA0
    r5 = *(4 + r7); // lwz @ 0x806C4BA4
    r0 = *(8 + r7); // lwz @ 0x806C4BA8
    *(0x1c + r1) = r8; // stw @ 0x806C4BAC
    *(8 + r1) = r6; // stw @ 0x806C4BB0
    *(0xc + r1) = r5; // stw @ 0x806C4BB4
    *(0x10 + r1) = r0; // stw @ 0x806C4BB8
    *(0x58 + r31) = r4; // stw @ 0x806C4BBC
    *(0x5c + r31) = r31; // stw @ 0x806C4BC0
    *(0x60 + r31) = r6; // stw @ 0x806C4BC4
    *(0x64 + r31) = r5; // stw @ 0x806C4BC8
    *(0x68 + r31) = r0; // stw @ 0x806C4BCC
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806C4BD4
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806C4BE0
    r3 = r31 + 0x404; // 0x806C4BE4
    r4 = r4 + 0; // 0x806C4BE8
    *(0 + r30) = r4; // stw @ 0x806C4BEC
    FUN_80660A10(r4, r3, r4); // bl 0x80660A10
    r3 = r31 + 0x650; // 0x806C4BF4
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r30 = r31 + 0x8a4; // 0x806C4BFC
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806C4C08
    /* lis r5, 0 */ // 0x806C4C0C
    /* lfs f0, 0(r3) */ // 0x806C4C10
    r5 = r5 + 0; // 0x806C4C14
    /* li r4, 0x7d1 */ // 0x806C4C18
    /* li r0, 0 */ // 0x806C4C1C
    *(0 + r30) = r5; // stw @ 0x806C4C20
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806C4C28
    *(0x258 + r30) = r0; // stw @ 0x806C4C2C
    /* stfs f0, 0x25c(r30) */ // 0x806C4C30
    r31 = *(0x2c + r1); // lwz @ 0x806C4C34
    r30 = *(0x28 + r1); // lwz @ 0x806C4C38
    r0 = *(0x34 + r1); // lwz @ 0x806C4C3C
    return;
}