/* Function at 0x806A5C10, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806A5C10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x20 + r1) = r28; // stw @ 0x806A5C28
    r28 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806A5C34
    /* lis r4, 0 */ // 0x806A5C38
    r3 = r3 + 0; // 0x806A5C3C
    *(0 + r28) = r3; // stw @ 0x806A5C40
    /* lis r7, 0 */ // 0x806A5C44
    r4 = r4 + 0; // 0x806A5C48
    r6 = *(0 + r7); // lwzu @ 0x806A5C4C
    r3 = r28 + 0x58; // 0x806A5C50
    *(8 + r1) = r6; // stw @ 0x806A5C54
    r5 = *(4 + r7); // lwz @ 0x806A5C58
    r0 = *(8 + r7); // lwz @ 0x806A5C5C
    *(0xc + r1) = r5; // stw @ 0x806A5C60
    *(0x10 + r1) = r0; // stw @ 0x806A5C64
    *(0x44 + r28) = r4; // stw @ 0x806A5C68
    *(0x48 + r28) = r28; // stw @ 0x806A5C6C
    *(0x4c + r28) = r6; // stw @ 0x806A5C70
    *(0x50 + r28) = r5; // stw @ 0x806A5C74
    *(0x54 + r28) = r0; // stw @ 0x806A5C78
    FUN_80668134(); // bl 0x80668134
    r30 = r28 + 0x6c; // 0x806A5C80
    /* li r31, -1 */ // 0x806A5C84
    *(0x68 + r28) = r31; // stw @ 0x806A5C88
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806A5C94
    r29 = r28 + 0x1e0; // 0x806A5C98
    r3 = r3 + 0; // 0x806A5C9C
    *(0 + r30) = r3; // stw @ 0x806A5CA0
    r3 = r29;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806A5CAC
    r3 = r28 + 0x354; // 0x806A5CB0
    r4 = r4 + 0; // 0x806A5CB4
    *(0 + r29) = r4; // stw @ 0x806A5CB8
    FUN_806A0418(r4, r3, r4); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806A5CC0
    /* lis r5, 0 */ // 0x806A5CC4
    r3 = r28 + 0x4c8; // 0x806A5CC8
    /* li r6, 0x178 */ // 0x806A5CCC
    r4 = r4 + 0; // 0x806A5CD0
    r5 = r5 + 0; // 0x806A5CD4
    /* li r7, 0xc */ // 0x806A5CD8
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}