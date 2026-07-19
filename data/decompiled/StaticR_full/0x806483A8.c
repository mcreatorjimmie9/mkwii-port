/* Function at 0x806483A8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806483A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x806483B4
    *(0x1c + r1) = r31; // stw @ 0x806483B8
    /* lis r31, 0 */ // 0x806483BC
    r31 = r31 + 0; // 0x806483C0
    *(0x18 + r1) = r30; // stw @ 0x806483C4
    r30 = r31 + 0x110; // 0x806483C8
    r4 = r30;
    *(0x14 + r1) = r29; // stw @ 0x806483D0
    r29 = r3;
    r3 = r31 + 0x11a; // 0x806483D8
    *(8 + r1) = r0; // stw @ 0x806483DC
    /* crclr cr1eq */ // 0x806483E0
    FUN_8063803C(r3); // bl 0x8063803C
    r5 = r3;
    /* li r4, 7 */ // 0x806483F0
    FUN_805EB338(r5, r3, r4); // bl 0x805EB338
    /* lis r3, 0 */ // 0x806483F8
    r4 = r30;
    r6 = *(0 + r3); // lwz @ 0x80648400
    r3 = r31 + 0x123; // 0x80648404
    r5 = r31 + 0x12e; // 0x80648408
    r0 = *(0x58 + r6); // lwz @ 0x8064840C
    if (!=) goto 0x0x8064841c;
    r5 = r31 + 0x129; // 0x80648418
    /* crclr cr1eq */ // 0x8064841C
    FUN_8063803C(r5); // bl 0x8063803C
    r4 = r3;
    FUN_805E3430(r5, r4, r3); // bl 0x805E3430
}