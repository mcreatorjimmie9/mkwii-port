/* Function at 0x806AEC74, size=300 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806AEC74(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x806AEC88
    *(0x34 + r1) = r29; // stw @ 0x806AEC8C
    /* lis r29, 0 */ // 0x806AEC90
    r29 = r29 + 0; // 0x806AEC94
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AEC9C
    r3 = r31 + 0x44; // 0x806AECA0
    r4 = r4 + 0; // 0x806AECA4
    *(0 + r31) = r4; // stw @ 0x806AECA8
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    r3 = r31 + 0x268; // 0x806AECB0
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r3 = r31 + 0x3dc; // 0x806AECB8
    FUN_806497A4(r3, r3); // bl 0x806497A4
    r30 = r31 + 0x630; // 0x806AECC0
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r4, 0 */ // 0x806AECCC
    r3 = r31 + 0x884; // 0x806AECD0
    r4 = r4 + 0; // 0x806AECD4
    *(0 + r30) = r4; // stw @ 0x806AECD8
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r3 = r29 + 0; // 0x806AECE0
    r30 = *(0 + r29); // lwz @ 0x806AECE4
    r12 = *(4 + r3); // lwz @ 0x806AECE8
    /* lis r10, 0 */ // 0x806AECEC
    r11 = *(8 + r3); // lwz @ 0x806AECF0
    *(0xae8 + r31) = r11; // stw @ 0x806AECF8
    r5 = r29 + 0xc; // 0x806AECFC
    r4 = r29 + 0x18; // 0x806AED00
    /* li r0, -1 */ // 0x806AED04
    *(0xad8 + r31) = r10; // stw @ 0x806AED08
    r3 = r31;
    *(0xadc + r31) = r31; // stw @ 0x806AED10
    *(0xae0 + r31) = r30; // stw @ 0x806AED14
    *(0xae4 + r31) = r12; // stw @ 0x806AED18
    r9 = *(0xc + r29); // lwz @ 0x806AED1C
    r8 = *(4 + r5); // lwz @ 0x806AED20
    r7 = *(8 + r5); // lwz @ 0x806AED24
    *(0xafc + r31) = r7; // stw @ 0x806AED28
    *(0xaec + r31) = r10; // stw @ 0x806AED2C
    *(0xaf0 + r31) = r31; // stw @ 0x806AED30
    *(0xaf4 + r31) = r9; // stw @ 0x806AED34
    *(0xaf8 + r31) = r8; // stw @ 0x806AED38
    r5 = *(4 + r4); // lwz @ 0x806AED3C
    r6 = *(0x18 + r29); // lwz @ 0x806AED40
    r4 = *(8 + r4); // lwz @ 0x806AED44
    *(0xb10 + r31) = r4; // stw @ 0x806AED48
    *(0xb00 + r31) = r10; // stw @ 0x806AED4C
    *(0xb04 + r31) = r31; // stw @ 0x806AED50
    *(0xb08 + r31) = r6; // stw @ 0x806AED54
    *(0xb0c + r31) = r5; // stw @ 0x806AED58
    *(0xb14 + r31) = r0; // stw @ 0x806AED5C
    *(0x20 + r1) = r30; // stw @ 0x806AED60
    r31 = *(0x3c + r1); // lwz @ 0x806AED64
    r30 = *(0x38 + r1); // lwz @ 0x806AED68
    r29 = *(0x34 + r1); // lwz @ 0x806AED6C
    r0 = *(0x44 + r1); // lwz @ 0x806AED70
    *(0x24 + r1) = r12; // stw @ 0x806AED74
    *(0x28 + r1) = r11; // stw @ 0x806AED78
    *(0x14 + r1) = r9; // stw @ 0x806AED7C
    *(0x18 + r1) = r8; // stw @ 0x806AED80
    *(0x1c + r1) = r7; // stw @ 0x806AED84
    *(8 + r1) = r6; // stw @ 0x806AED88
    *(0xc + r1) = r5; // stw @ 0x806AED8C
    *(0x10 + r1) = r4; // stw @ 0x806AED90
    return;
}