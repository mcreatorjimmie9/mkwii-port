/* Function at 0x808097B0, size=132 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808097B0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x808097B8
    *(0x5c + r1) = r31; // stw @ 0x808097C0
    /* lis r31, 0 */ // 0x808097C4
    r31 = r31 + 0; // 0x808097C8
    *(0x58 + r1) = r30; // stw @ 0x808097CC
    /* li r30, 0 */ // 0x808097D0
    r5 = r31 + 0xd; // 0x808097D4
    *(0x54 + r1) = r29; // stw @ 0x808097D8
    r29 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808097E4
    FUN_805EB338(r5, r3); // bl 0x805EB338
    r0 = *(0x18 + r1); // lwz @ 0x808097EC
    *(0x14 + r1) = r0; // stw @ 0x808097F4
    r6 = r31 + 0x1e; // 0x808097F8
    /* li r4, 0 */ // 0x808097FC
    /* li r7, 0 */ // 0x80809800
    *(8 + r1) = r30; // stw @ 0x80809804
    /* li r8, 0 */ // 0x80809808
    /* li r9, 0 */ // 0x8080980C
    /* li r10, 9 */ // 0x80809810
    r3 = *(8 + r29); // lwz @ 0x80809814
    FUN_805EDB0C(r8, r9, r10); // bl 0x805EDB0C
    r5 = *(8 + r29); // lwz @ 0x8080981C
    r4 = r31 + 0x2b; // 0x80809820
    r0 = *(0xc + r5); // lwz @ 0x80809828
    *(0x10 + r1) = r0; // stw @ 0x8080982C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}