/* Function at 0x80831584, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80831584(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x80831598
    *(8 + r1) = r30; // stw @ 0x8083159C
    r30 = r3;
    FUN_808313BC(r4); // bl 0x808313BC
    if (!=) goto 0x0x808315dc;
    r0 = *(0x7c + r30); // lwz @ 0x808315B0
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x808315B4
    if (==) goto 0x0x808315dc;
    if (==) goto 0x0x808315dc;
    r0 = *(0xc + r30); // lha @ 0x808315C4
    /* li r4, 0 */ // 0x808315C8
    r3 = *(4 + r30); // lwz @ 0x808315CC
    /* li r5, 0xc */ // 0x808315D0
    /* clrlwi r6, r0, 0x10 */ // 0x808315D4
    FUN_80827458(r4, r5); // bl 0x80827458
    r0 = *(0x14 + r1); // lwz @ 0x808315DC
    r31 = *(0xc + r1); // lwz @ 0x808315E0
    r30 = *(8 + r1); // lwz @ 0x808315E4
    return;
}