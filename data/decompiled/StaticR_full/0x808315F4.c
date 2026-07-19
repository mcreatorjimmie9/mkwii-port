/* Function at 0x808315F4, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808315F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x8083160C
    *(0x14 + r1) = r29; // stw @ 0x80831610
    r29 = r3;
    FUN_808313BC(r4); // bl 0x808313BC
    r31 = r3;
    if (>) goto 0x0x80831650;
    r0 = *(4 + r29); // lwz @ 0x80831628
    /* lis r5, 0 */ // 0x8083162C
    /* lis r4, 0 */ // 0x80831630
    r3 = r29;
    /* mulli r0, r0, 0x74 */ // 0x80831638
    r5 = r5 + 0; // 0x8083163C
    /* lfs f1, 0(r4) */ // 0x80831640
    r4 = r5 + r0; // 0x80831644
    r4 = *(0x60 + r4); // lwz @ 0x80831648
    FUN_8082DFAC(r5); // bl 0x8082DFAC
    if (!=) goto 0x0x8083168c;
    r0 = *(0x7c + r29); // lwz @ 0x80831658
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083165C
    if (==) goto 0x0x8083168c;
    if (==) goto 0x0x8083168c;
    r3 = *(4 + r29); // lwz @ 0x8083166C
    if (==) goto 0x0x8083168c;
    r0 = *(0xc + r29); // lha @ 0x80831678
    /* li r4, 1 */ // 0x8083167C
    /* li r5, 0xc */ // 0x80831680
    /* clrlwi r6, r0, 0x10 */ // 0x80831684
    FUN_80827458(r4, r5); // bl 0x80827458
    r0 = *(0x24 + r1); // lwz @ 0x8083168C
    r31 = *(0x1c + r1); // lwz @ 0x80831690
    r30 = *(0x18 + r1); // lwz @ 0x80831694
    r29 = *(0x14 + r1); // lwz @ 0x80831698
    return;
}