/* Function at 0x80668930, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80668930(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 0 */ // 0x80668938
    /* li r6, 1 */ // 0x8066893C
    *(0x14 + r1) = r0; // stw @ 0x80668940
    r0 = r6 << r7; // slw
    /* and. r0, r4, r0 */ // 0x80668948
    *(0xc + r1) = r31; // stw @ 0x8066894C
    *(8 + r1) = r30; // stw @ 0x80668950
    if (==) goto 0x0x8066895c;
    /* li r7, 1 */ // 0x80668958
    /* li r0, 1 */ // 0x8066895C
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668964
    if (==) goto 0x0x80668970;
    r7 = r7 + 1; // 0x8066896C
    /* li r0, 2 */ // 0x80668970
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668978
    if (==) goto 0x0x80668984;
    r7 = r7 + 1; // 0x80668980
    /* li r0, 3 */ // 0x80668984
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066898C
    if (==) goto 0x0x80668998;
    r7 = r7 + 1; // 0x80668994
    /* li r0, 4 */ // 0x80668998
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x806689A0
    if (==) goto 0x0x806689ac;
    r7 = r7 + 1; // 0x806689A8
    if (<=) goto 0x0x806689b8;
    /* li r5, 1 */ // 0x806689B4
    *(4 + r3) = r4; // stw @ 0x806689B8
    r31 = r3 + 0x40; // 0x806689BC
    /* li r30, 0 */ // 0x806689C0
    *(8 + r3) = r4; // stw @ 0x806689C4
    *(0xd + r3) = r5; // stb @ 0x806689C8
    r12 = *(0 + r31); // lwz @ 0x806689CC
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x806689D4
    /* mtctr r12 */ // 0x806689D8
    /* bctrl  */ // 0x806689DC
    r30 = r30 + 1; // 0x806689E0
    r31 = r31 + 0x34; // 0x806689E4
    if (<) goto 0x0x806689cc;
    r0 = *(0x14 + r1); // lwz @ 0x806689F0
    r31 = *(0xc + r1); // lwz @ 0x806689F4
    r30 = *(8 + r1); // lwz @ 0x806689F8
    return;
}