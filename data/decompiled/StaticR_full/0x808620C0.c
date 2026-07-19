/* Function at 0x808620C0, size=140 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808620C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x78 + r1) = r30; // stw @ 0x808620D0
    if (!=) goto 0x0x808620f8;
    /* stfd f1, 0x28(r1) */ // 0x808620D8
    /* stfd f2, 0x30(r1) */ // 0x808620DC
    /* stfd f3, 0x38(r1) */ // 0x808620E0
    /* stfd f4, 0x40(r1) */ // 0x808620E4
    /* stfd f5, 0x48(r1) */ // 0x808620E8
    /* stfd f6, 0x50(r1) */ // 0x808620EC
    /* stfd f7, 0x58(r1) */ // 0x808620F0
    /* stfd f8, 0x60(r1) */ // 0x808620F4
    *(0xc + r1) = r4; // stw @ 0x808620F8
    /* lis r12, 0x100 */ // 0x80862104
    *(0x10 + r1) = r5; // stw @ 0x80862108
    /* lis r31, 0 */ // 0x80862110
    r5 = r3;
    *(8 + r1) = r3; // stw @ 0x80862118
    r3 = r31 + 0; // 0x8086211C
    /* li r4, 0x100 */ // 0x80862120
    *(0x14 + r1) = r6; // stw @ 0x80862124
    r6 = r30;
    *(0x18 + r1) = r7; // stw @ 0x8086212C
    *(0x1c + r1) = r8; // stw @ 0x80862130
    *(0x20 + r1) = r9; // stw @ 0x80862134
    *(0x24 + r1) = r10; // stw @ 0x80862138
    *(0x68 + r1) = r12; // stw @ 0x8086213C
    *(0x6c + r1) = r11; // stw @ 0x80862140
    *(0x70 + r1) = r0; // stw @ 0x80862144
    FUN_805E3430(); // bl 0x805E3430
}