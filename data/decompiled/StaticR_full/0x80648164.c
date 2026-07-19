/* Function at 0x80648164, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_80648164(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* clrlwi. r0, r4, 0x18 */ // 0x80648170
    *(0x14 + r1) = r29; // stw @ 0x8064817C
    *(0x10 + r1) = r28; // stw @ 0x80648180
    r28 = r3;
    *(0x26 + r3) = r4; // stb @ 0x80648188
    if (==) goto 0x0x80648220;
    /* lis r3, 0 */ // 0x80648190
    /* li r0, 0 */ // 0x80648194
    /* lis r30, 0 */ // 0x80648198
    r4 = *(0 + r3); // lwz @ 0x8064819C
    *(0xc + r1) = r0; // stw @ 0x806481A0
    r3 = r30 + 0; // 0x806481A4
    /* crclr cr1eq */ // 0x806481A8
    FUN_8063803C(r3); // bl 0x8063803C
    r5 = r3;
    /* li r4, 7 */ // 0x806481B8
    FUN_805EB338(r5, r3, r4); // bl 0x805EB338
    r30 = r30 + 0; // 0x806481C0
    /* li r29, 0 */ // 0x806481C4
    /* lis r31, 0 */ // 0x806481C8
    r4 = *(0 + r31); // lwz @ 0x806481CC
    r3 = r30 + 9; // 0x806481D0
    r5 = r29 + 1; // 0x806481D4
    /* crclr cr1eq */ // 0x806481D8
    FUN_8063803C(r3, r5); // bl 0x8063803C
    r4 = r3;
    FUN_805E3430(r5, r4, r3); // bl 0x805E3430
    *(0x10 + r28) = r3; // stw @ 0x806481F0
    if (!=) goto 0x0x8064820c;
    r3 = r30 + 0xe; // 0x806481F8
    r5 = r30 + 0x24; // 0x806481FC
    /* li r4, 0xd7 */ // 0x80648200
    /* crclr cr1eq */ // 0x80648204
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x8064820C
    r28 = r28 + 4; // 0x80648210
    if (<) goto 0x0x806481cc;
    /* b 0x806482bc */ // 0x8064821C
    /* lis r31, 0 */ // 0x80648220
    /* li r0, 0 */ // 0x80648224
    r31 = r31 + 0; // 0x80648228
    *(8 + r1) = r0; // stw @ 0x8064822C
    r29 = r31 + 0x54; // 0x80648230
    r4 = r29;
    r3 = r31 + 0x5e; // 0x80648238
    /* crclr cr1eq */ // 0x8064823C
    FUN_8063803C(r4, r3); // bl 0x8063803C
    r5 = r3;
    /* li r4, 7 */ // 0x8064824C
    FUN_805EB338(r5, r3, r4); // bl 0x805EB338
    /* lis r3, 0 */ // 0x80648254
}