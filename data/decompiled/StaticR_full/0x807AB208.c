/* Function at 0x807AB208, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807AB208(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807AB210
    *(0xc + r1) = r31; // stw @ 0x807AB218
    *(8 + r1) = r30; // stw @ 0x807AB21C
    r31 = *(0 + r4); // lwz @ 0x807AB220
    if (==) goto 0x0x807ab2a4;
    /* li r0, 0 */ // 0x807AB22C
    *(0 + r4) = r0; // stw @ 0x807AB230
    if (==) goto 0x0x807ab2a4;
    if (==) goto 0x0x807ab29c;
    /* lis r3, 0 */ // 0x807AB23C
    r3 = r3 + 0; // 0x807AB240
    *(0 + r31) = r3; // stw @ 0x807AB244
    r30 = *(0 + r4); // lwz @ 0x807AB248
    if (==) goto 0x0x807ab290;
    *(0 + r4) = r0; // stw @ 0x807AB254
    if (==) goto 0x0x807ab290;
    if (==) goto 0x0x807ab288;
    *(0 + r30) = r3; // stw @ 0x807AB260
    r3 = *(0 + r4); // lwz @ 0x807AB264
    if (==) goto 0x0x807ab27c;
    *(0 + r4) = r0; // stw @ 0x807AB270
    /* li r4, 1 */ // 0x807AB274
    FUN_807AB344(r4); // bl 0x807AB344
    r3 = r30;
    /* li r4, 0 */ // 0x807AB280
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807AB294
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807AB2A4
    r31 = *(0xc + r1); // lwz @ 0x807AB2A8
    r30 = *(8 + r1); // lwz @ 0x807AB2AC
    return;
}