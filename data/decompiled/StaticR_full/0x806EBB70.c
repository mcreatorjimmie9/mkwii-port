/* Function at 0x806EBB70, size=288 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806EBB70(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806EBB88
    *(0x24 + r1) = r29; // stw @ 0x806EBB8C
    r29 = r4;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* li r9, 0 */ // 0x806EBB9C
    if (==) goto 0x0x806ebc30;
    r3 = r29 + -8; // 0x806EBBA8
    if (<=) goto 0x0x806ebc0c;
    r0 = r3 + 7; // 0x806EBBB0
    /* srwi r0, r0, 3 */ // 0x806EBBB4
    /* mtctr r0 */ // 0x806EBBB8
    if (<=) goto 0x0x806ebc0c;
    /* stbx r9, r31, r9 */ // 0x806EBBC4
    r8 = r31 + r9; // 0x806EBBC8
    r0 = r9 + 1; // 0x806EBBCC
    r7 = r9 + 2; // 0x806EBBD0
    *(1 + r8) = r0; // stb @ 0x806EBBD4
    r6 = r9 + 3; // 0x806EBBD8
    r5 = r9 + 4; // 0x806EBBDC
    r4 = r9 + 5; // 0x806EBBE0
    *(2 + r8) = r7; // stb @ 0x806EBBE4
    r3 = r9 + 6; // 0x806EBBE8
    r0 = r9 + 7; // 0x806EBBEC
    r9 = r9 + 8; // 0x806EBBF0
    *(3 + r8) = r6; // stb @ 0x806EBBF4
    *(4 + r8) = r5; // stb @ 0x806EBBF8
    *(5 + r8) = r4; // stb @ 0x806EBBFC
    *(6 + r8) = r3; // stb @ 0x806EBC00
    *(7 + r8) = r0; // stb @ 0x806EBC04
    if (counter-- != 0) goto 0x0x806ebbc4;
    /* subf r0, r9, r29 */ // 0x806EBC0C
    r3 = r31 + r9; // 0x806EBC10
    /* mtctr r0 */ // 0x806EBC14
    if (>=) goto 0x0x806ebc30;
    *(0 + r3) = r9; // stb @ 0x806EBC20
    r9 = r9 + 1; // 0x806EBC24
    r3 = r3 + 1; // 0x806EBC28
    if (counter-- != 0) goto 0x0x806ebc20;
    r29 = r29 + -1; // 0x806EBC30
    r30 = r31 + r29; // 0x806EBC34
    /* b 0x806ebc60 */ // 0x806EBC38
    r4 = r29 + 1; // 0x806EBC40
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r4 = *(0 + r30); // lbz @ 0x806EBC48
    r29 = r29 + -1; // 0x806EBC4C
    /* lbzx r0, r31, r3 */ // 0x806EBC50
    *(0 + r30) = r0; // stb @ 0x806EBC54
    r30 = r30 + -1; // 0x806EBC58
    /* stbx r4, r31, r3 */ // 0x806EBC5C
    if (!=) goto 0x0x806ebc3c;
    /* li r4, -1 */ // 0x806EBC6C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806EBC74
    r31 = *(0x2c + r1); // lwz @ 0x806EBC78
    r30 = *(0x28 + r1); // lwz @ 0x806EBC7C
    r29 = *(0x24 + r1); // lwz @ 0x806EBC80
    return;
}