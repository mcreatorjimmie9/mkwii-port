/* Function at 0x806E1C1C, size=196 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806E1C1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x806E1C30
    r29 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806E1C3C
    /* lis r4, 0 */ // 0x806E1C40
    r3 = r3 + 0; // 0x806E1C44
    *(0 + r29) = r3; // stw @ 0x806E1C48
    /* lis r7, 0 */ // 0x806E1C4C
    r4 = r4 + 0; // 0x806E1C50
    r6 = *(0 + r7); // lwzu @ 0x806E1C54
    r3 = r29 + 0x58; // 0x806E1C58
    *(8 + r1) = r6; // stw @ 0x806E1C5C
    r5 = *(4 + r7); // lwz @ 0x806E1C60
    r0 = *(8 + r7); // lwz @ 0x806E1C64
    *(0xc + r1) = r5; // stw @ 0x806E1C68
    *(0x10 + r1) = r0; // stw @ 0x806E1C6C
    *(0x44 + r29) = r4; // stw @ 0x806E1C70
    *(0x48 + r29) = r29; // stw @ 0x806E1C74
    *(0x4c + r29) = r6; // stw @ 0x806E1C78
    *(0x50 + r29) = r5; // stw @ 0x806E1C7C
    *(0x54 + r29) = r0; // stw @ 0x806E1C80
    FUN_80669F74(); // bl 0x80669F74
    r31 = r29 + 0x27c; // 0x806E1C88
    r3 = r31;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806E1C94
    r30 = r29 + 0x3f0; // 0x806E1C98
    r3 = r3 + 0; // 0x806E1C9C
    *(0 + r31) = r3; // stw @ 0x806E1CA0
    r3 = r30;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806E1CAC
    r3 = r29 + 0x564; // 0x806E1CB0
    r4 = r4 + 0; // 0x806E1CB4
    *(0 + r30) = r4; // stw @ 0x806E1CB8
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    /* lis r4, 0 */ // 0x806E1CC0
    /* lis r5, 0 */ // 0x806E1CC4
    r3 = r29 + 0x7b8; // 0x806E1CC8
    /* li r6, 0x174 */ // 0x806E1CCC
    r4 = r4 + 0; // 0x806E1CD0
    r5 = r5 + 0; // 0x806E1CD4
    /* li r7, 0xc */ // 0x806E1CD8
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}