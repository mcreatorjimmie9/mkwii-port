/* Function at 0x80823AC4, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80823AC4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80823ACC
    *(0xc + r1) = r31; // stw @ 0x80823AD4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80823ADC
    r30 = r3;
    r0 = *(0x1a + r3); // lbz @ 0x80823AE4
    r5 = *(0 + r5); // lbz @ 0x80823AE8
    if (!=) goto 0x0x80823ba4;
    if (==) goto 0x0x80823b08;
    r0 = *(0x78 + r3); // lwz @ 0x80823AFC
    if (!=) goto 0x0x80823ba4;
    r0 = *(0x8c + r3); // lwz @ 0x80823B08
    /* li r4, 0 */ // 0x80823B0C
    if (==) goto 0x0x80823b28;
    r0 = *(0xa0 + r3); // lwz @ 0x80823B18
    if (!=) goto 0x0x80823b28;
    /* li r4, 1 */ // 0x80823B24
    if (==) goto 0x0x80823b44;
    r0 = *(0x8c + r3); // lwz @ 0x80823B30
    if (==) goto 0x0x80823b44;
    r3 = r3 + 0x88; // 0x80823B3C
    FUN_80841C50(r3); // bl 0x80841C50
    r0 = *(0x58 + r30); // lwz @ 0x80823B44
    if (==) goto 0x0x80823b58;
    r3 = r30 + 0x54; // 0x80823B50
    FUN_8083FC18(r3); // bl 0x8083FC18
    r0 = *(0x1a + r30); // lbz @ 0x80823B58
    if (!=) goto 0x0x80823ba4;
    r0 = *(0xc8 + r30); // lwz @ 0x80823B64
    /* li r3, 0 */ // 0x80823B68
    if (==) goto 0x0x80823b90;
    r0 = *(0x108 + r30); // lwz @ 0x80823B74
    if (!=) goto 0x0x80823b90;
    r0 = *(0x208 + r30); // lbz @ 0x80823B80
    if (!=) goto 0x0x80823b90;
    /* li r3, 1 */ // 0x80823B8C
    if (==) goto 0x0x80823ba4;
    r4 = r31;
    r3 = r30 + 0xb4; // 0x80823B9C
    FUN_808203E4(r3, r4, r3); // bl 0x808203E4
    r0 = *(0x14 + r1); // lwz @ 0x80823BA4
    r31 = *(0xc + r1); // lwz @ 0x80823BA8
    r30 = *(8 + r1); // lwz @ 0x80823BAC
    return;
}