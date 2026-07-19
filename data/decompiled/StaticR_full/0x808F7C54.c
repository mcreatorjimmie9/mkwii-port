/* Function at 0x808F7C54, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808F7C54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808F7C5C
    *(0xc + r1) = r31; // stw @ 0x808F7C64
    *(8 + r1) = r30; // stw @ 0x808F7C68
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x808F7C70
    r3 = *(0 + r3); // lwz @ 0x808F7C74
    FUN_8068608C(); // bl 0x8068608C
    r0 = *(0x24 + r30); // lbz @ 0x808F7C7C
    r31 = *(4 + r3); // lwz @ 0x808F7C80
    if (==) goto 0x0x808f7d18;
    r3 = *(0x1c + r30); // lwz @ 0x808F7C8C
    /* addic. r0, r3, -1 */ // 0x808F7C90
    *(0x1c + r30) = r0; // stw @ 0x808F7C94
    if (>) goto 0x0x808f7d18;
    r5 = *(0x18 + r30); // lwz @ 0x808F7C9C
    /* addis r0, r5, 1 */ // 0x808F7CA0
    if (==) goto 0x0x808f7d08;
    if (!=) goto 0x0x808f7d08;
    /* lis r3, 0 */ // 0x808F7CB4
    r4 = r30 + 0x14; // 0x808F7CB8
    r3 = *(0 + r3); // lwz @ 0x808F7CBC
    r12 = *(0 + r3); // lwz @ 0x808F7CC0
    r12 = *(0xb0 + r12); // lwz @ 0x808F7CC4
    /* mtctr r12 */ // 0x808F7CC8
    /* bctrl  */ // 0x808F7CCC
    if (==) goto 0x0x808f7d08;
    r0 = *(0x10 + r30); // lwz @ 0x808F7CD8
    if (!=) goto 0x0x808f7cf0;
    /* li r0, 0xa */ // 0x808F7CE4
    *(0x28 + r30) = r0; // stw @ 0x808F7CE8
    /* b 0x808f7d08 */ // 0x808F7CEC
    r3 = *(0x28 + r30); // lwz @ 0x808F7CF0
    /* addic. r0, r3, -1 */ // 0x808F7CF4
    *(0x28 + r30) = r0; // stw @ 0x808F7CF8
    if (>=) goto 0x0x808f7d08;
    /* li r0, 0 */ // 0x808F7D00
    *(0x28 + r30) = r0; // stw @ 0x808F7D04
    /* li r3, -1 */ // 0x808F7D08
    /* li r0, 0 */ // 0x808F7D0C
    *(0x18 + r30) = r3; // stw @ 0x808F7D10
    *(0x24 + r30) = r0; // stb @ 0x808F7D14
    r0 = *(0x14 + r30); // lwz @ 0x808F7D18
    if (==) goto 0x0x808f7d78;
    r0 = *(0x20 + r30); // lwz @ 0x808F7D24
    if (!=) goto 0x0x808f7d60;
    if (==) goto 0x0x808f7d60;
    r3 = *(0x2440 + r30); // lwz @ 0x808F7D38
    /* lis r4, 1 */ // 0x808F7D3C
    /* lis r6, 0 */ // 0x808F7D40
    /* li r5, 0x1e */ // 0x808F7D44
    r12 = *(8 + r3); // lwz @ 0x808F7D48
    r4 = r4 + -1; // 0x808F7D4C
    /* lfs f1, 0(r6) */ // 0x808F7D50
    r12 = *(0x10 + r12); // lwz @ 0x808F7D54
    /* mtctr r12 */ // 0x808F7D58
    /* bctrl  */ // 0x808F7D5C
    r3 = *(0x2440 + r30); // lwz @ 0x808F7D60
    r12 = *(8 + r3); // lwz @ 0x808F7D64
    r12 = *(0xc + r12); // lwz @ 0x808F7D68
    /* mtctr r12 */ // 0x808F7D6C
    /* bctrl  */ // 0x808F7D70
    *(0x20 + r30) = r31; // stw @ 0x808F7D74
    r0 = *(0x14 + r1); // lwz @ 0x808F7D78
    r31 = *(0xc + r1); // lwz @ 0x808F7D7C
    r30 = *(8 + r1); // lwz @ 0x808F7D80
    return;
}