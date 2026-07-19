/* Function at 0x805B70C4, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805B70C4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B70D0
    r27 = r3;
    r0 = *(0x263 + r3); // lbz @ 0x805B70D8
    if (==) goto 0x0x805b712c;
    r30 = r27;
    r29 = r3 + 0x98; // 0x805B70E8
    /* li r28, 0 */ // 0x805B70EC
    /* li r31, 1 */ // 0x805B70F0
    r0 = *(0x28 + r30); // lwz @ 0x805B70F4
    if (==) goto 0x0x805b7118;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b7118;
    *(0x264 + r27) = r31; // stb @ 0x805B7114
    r28 = r28 + 1; // 0x805B7118
    r29 = r29 + 0x18; // 0x805B711C
    r30 = r30 + 4; // 0x805B7124
    if (<) goto 0x0x805b70f4;
}