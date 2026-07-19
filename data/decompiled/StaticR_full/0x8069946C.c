/* Function at 0x8069946C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069946C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* clrlwi. r0, r5, 0x18 */ // 0x80699478
    *(0xc + r1) = r31; // stw @ 0x8069947C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80699484
    r30 = r3;
    *(0x2e4 + r3) = r5; // stb @ 0x8069948C
    if (==) goto 0x0x806994a4;
    r4 = *(0x2e0 + r3); // lwz @ 0x80699494
    r3 = r3 + 0x21c; // 0x80699498
    FUN_806692E0(r3); // bl 0x806692E0
    /* b 0x806994b0 */ // 0x806994A0
    /* li r4, 0 */ // 0x806994A4
    r3 = r3 + 0x21c; // 0x806994A8
    FUN_806692E0(r3, r4, r3); // bl 0x806692E0
    /* clrlwi. r0, r31, 0x18 */ // 0x806994B0
    *(0x52c + r30) = r31; // stb @ 0x806994B4
    if (==) goto 0x0x806994cc;
    r4 = *(0x528 + r30); // lwz @ 0x806994BC
    r3 = r30 + 0x464; // 0x806994C0
    FUN_806692E0(r3); // bl 0x806692E0
    /* b 0x806994d8 */ // 0x806994C8
    r3 = r30 + 0x464; // 0x806994CC
    /* li r4, 0 */ // 0x806994D0
    FUN_806692E0(r3, r3, r4); // bl 0x806692E0
    r0 = *(0x14 + r1); // lwz @ 0x806994D8
    r31 = *(0xc + r1); // lwz @ 0x806994DC
    r30 = *(8 + r1); // lwz @ 0x806994E0
    return;
}