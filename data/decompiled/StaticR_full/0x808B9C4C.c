/* Function at 0x808B9C4C, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808B9C4C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808B9C60
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x808B9C68
    if (!=) goto 0x0x808b9d4c;
    /* lis r31, 0 */ // 0x808B9C74
    r3 = *(0 + r31); // lwz @ 0x808B9C78
    r3 = *(0 + r3); // lwz @ 0x808B9C7C
    r3 = *(0 + r3); // lwz @ 0x808B9C80
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808b9d4c;
    r4 = *(0x6c4 + r29); // lwz @ 0x808B9C90
    /* lis r3, 0 */ // 0x808B9C94
    /* lfs f0, 0(r3) */ // 0x808B9C98
    /* lfs f1, 0(r4) */ // 0x808B9C9C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808B9CA0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808B9CA4
    /* mfcr r0 */ // 0x808B9CA8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808B9CAC
    if (==) goto 0x0x808b9d4c;
    r3 = *(0 + r31); // lwz @ 0x808B9CB4
    r3 = *(0 + r3); // lwz @ 0x808B9CB8
    r30 = *(0x250 + r3); // lwz @ 0x808B9CBC
    if (!=) goto 0x0x808b9cd0;
    /* li r30, 0 */ // 0x808B9CC8
    /* b 0x808b9d24 */ // 0x808B9CCC
    /* lis r31, 0 */ // 0x808B9CD0
    r31 = r31 + 0; // 0x808B9CD4
    if (==) goto 0x0x808b9d20;
    r12 = *(0 + r30); // lwz @ 0x808B9CDC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B9CE4
    /* mtctr r12 */ // 0x808B9CE8
    /* bctrl  */ // 0x808B9CEC
    /* b 0x808b9d08 */ // 0x808B9CF0
    if (!=) goto 0x0x808b9d04;
    /* li r0, 1 */ // 0x808B9CFC
    /* b 0x808b9d14 */ // 0x808B9D00
    r3 = *(0 + r3); // lwz @ 0x808B9D04
    if (!=) goto 0x0x808b9cf4;
    /* li r0, 0 */ // 0x808B9D10
    if (==) goto 0x0x808b9d20;
    /* b 0x808b9d24 */ // 0x808B9D1C
    /* li r30, 0 */ // 0x808B9D20
    r3 = r30;
    /* li r4, -1 */ // 0x808B9D28
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* lis r4, 0 */ // 0x808B9D30
    /* li r0, -1 */ // 0x808B9D34
    /* lfs f1, 0(r4) */ // 0x808B9D38
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808B9D40
    /* li r4, 0 */ // 0x808B9D44
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808B9D4C
    r31 = *(0x1c + r1); // lwz @ 0x808B9D50
    r30 = *(0x18 + r1); // lwz @ 0x808B9D54
    r29 = *(0x14 + r1); // lwz @ 0x808B9D58
    return;
}