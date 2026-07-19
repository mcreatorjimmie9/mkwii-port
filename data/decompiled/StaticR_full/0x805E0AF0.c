/* Function at 0x805E0AF0, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_805E0AF0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x805E0AF8
    *(0x18 + r1) = r30; // stw @ 0x805E0B04
    r30 = r3 + 0; // 0x805E0B08
    *(0x14 + r1) = r29; // stw @ 0x805E0B0C
    /* li r29, 0 */ // 0x805E0B10
    r0 = *(0xa7 + r30); // lbz @ 0x805E0B14
    if (==) goto 0x0x805e0b84;
    /* b 0x805e0b7c */ // 0x805E0B20
    FUN_805E096C(); // bl 0x805E096C
    r4 = *(4 + r3); // lwz @ 0x805E0B28
    r31 = r3;
    r0 = *(0xc0 + r30); // lwz @ 0x805E0B30
    r6 = *(0x50 + r30); // lwz @ 0x805E0B34
    r5 = r4 + r0; // 0x805E0B38
    r4 = r5 u/ r6; // 0x805E0B3C
    r0 = r6 + -1; // 0x805E0B40
    r4 = r4 * r6; // 0x805E0B44
    /* subf r4, r4, r5 */ // 0x805E0B48
    if (!=) goto 0x0x805e0b64;
    r0 = *(0xa6 + r30); // lbz @ 0x805E0B54
    /* clrlwi. r0, r0, 0x1f */ // 0x805E0B58
    if (!=) goto 0x0x805e0b64;
    FUN_805E0CEC(); // bl 0x805E0CEC
    r3 = r31;
    FUN_805E0958(r3); // bl 0x805E0958
    r3 = *(0xd8 + r30); // lwz @ 0x805E0B6C
    r29 = r29 + -1; // 0x805E0B70
    r0 = r3 + 1; // 0x805E0B74
    *(0xd8 + r30) = r0; // stw @ 0x805E0B78
    if (!=) goto 0x0x805e0b24;
    r0 = *(0xa7 + r30); // lbz @ 0x805E0B84
    if (==) goto 0x0x805e0b9c;
    FUN_805E096C(); // bl 0x805E096C
    r31 = r3;
    /* b 0x805e0ba4 */ // 0x805E0B98
    FUN_805E08DC(); // bl 0x805E08DC
    r31 = r3;
    r3 = r31;
    FUN_805E0CEC(r3); // bl 0x805E0CEC
    r29 = r3;
    r3 = r31;
    FUN_805E0958(r3, r3); // bl 0x805E0958
    /* b 0x805e0b14 */ // 0x805E0BB8
}