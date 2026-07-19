/* Function at 0x807D510C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D510C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D5118
    r31 = r3;
    r0 = *(0xc4 + r3); // lwz @ 0x807D5120
    if (==) goto 0x0x807d516c;
    /* lis r4, 0 */ // 0x807D512C
    /* lfs f1, 0xcc(r3) */ // 0x807D5130
    /* lfs f0, 0(r4) */ // 0x807D5134
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D5138
    if (<=) goto 0x0x807d515c;
    FUN_807D4FE0(r4); // bl 0x807D4FE0
    if (==) goto 0x0x807d516c;
    r3 = r31;
    r4 = r31 + 0x98; // 0x807D5150
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d516c */ // 0x807D5158
    /* lis r4, 0 */ // 0x807D515C
    /* lfs f0, 0(r4) */ // 0x807D5160
    /* fadds f0, f1, f0 */ // 0x807D5164
    /* stfs f0, 0xcc(r3) */ // 0x807D5168
    r0 = *(0x14 + r1); // lwz @ 0x807D516C
    r31 = *(0xc + r1); // lwz @ 0x807D5170
    return;
}