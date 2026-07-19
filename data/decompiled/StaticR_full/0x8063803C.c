/* Function at 0x8063803C, size=140 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8063803C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x78 + r1) = r30; // stw @ 0x8063804C
    if (!=) goto 0x0x80638074;
    /* stfd f1, 0x28(r1) */ // 0x80638054
    /* stfd f2, 0x30(r1) */ // 0x80638058
    /* stfd f3, 0x38(r1) */ // 0x8063805C
    /* stfd f4, 0x40(r1) */ // 0x80638060
    /* stfd f5, 0x48(r1) */ // 0x80638064
    /* stfd f6, 0x50(r1) */ // 0x80638068
    /* stfd f7, 0x58(r1) */ // 0x8063806C
    /* stfd f8, 0x60(r1) */ // 0x80638070
    *(0xc + r1) = r4; // stw @ 0x80638074
    /* lis r12, 0x100 */ // 0x80638080
    *(0x10 + r1) = r5; // stw @ 0x80638084
    /* lis r31, 0 */ // 0x8063808C
    r5 = r3;
    *(8 + r1) = r3; // stw @ 0x80638094
    r3 = r31 + 0; // 0x80638098
    /* li r4, 0x100 */ // 0x8063809C
    *(0x14 + r1) = r6; // stw @ 0x806380A0
    r6 = r30;
    *(0x18 + r1) = r7; // stw @ 0x806380A8
    *(0x1c + r1) = r8; // stw @ 0x806380AC
    *(0x20 + r1) = r9; // stw @ 0x806380B0
    *(0x24 + r1) = r10; // stw @ 0x806380B4
    *(0x68 + r1) = r12; // stw @ 0x806380B8
    *(0x6c + r1) = r11; // stw @ 0x806380BC
    *(0x70 + r1) = r0; // stw @ 0x806380C0
    FUN_805E3430(); // bl 0x805E3430
}