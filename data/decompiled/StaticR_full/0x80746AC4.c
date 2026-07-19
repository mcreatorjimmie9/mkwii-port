/* Function at 0x80746AC4, size=312 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80746AC4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0xb4 + r1) = r29; // stw @ 0x80746AD8
    r29 = r3;
    r0 = *(0xb4 + r3); // lhz @ 0x80746AE0
    if (!=) goto 0x0x80746b64;
    r30 = *(0x10 + r3); // lwz @ 0x80746AEC
    r3 = *(0x10 + r30); // lwz @ 0x80746AF0
    r3 = *(0 + r3); // lwz @ 0x80746AF4
    if (==) goto 0x0x80746b10;
    r3 = r3 + 0xc; // 0x80746B00
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80746b18 */ // 0x80746B0C
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x80746B18
    /* li r31, 0 */ // 0x80746B1C
    /* stfs f0, 0x8c(r1) */ // 0x80746B20
    /* lfs f0, 0x34(r29) */ // 0x80746B24
    /* stfs f0, 0x9c(r1) */ // 0x80746B28
    /* lfs f0, 0x38(r29) */ // 0x80746B2C
    /* stfs f0, 0xac(r1) */ // 0x80746B30
    r3 = *(0x14 + r30); // lwz @ 0x80746B34
    r3 = *(0 + r3); // lwz @ 0x80746B38
    if (==) goto 0x0x80746b50;
    /* li r4, 0 */ // 0x80746B48
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x80746B50
    r30 = r30 + 4; // 0x80746B54
    if (<) goto 0x0x80746b34;
    /* b 0x80746ccc */ // 0x80746B60
    if (!=) goto 0x0x80746ccc;
    r4 = *(0x14c + r3); // lbz @ 0x80746B6C
    if (==) goto 0x0x80746bfc;
    r0 = *(0x14e + r3); // lbz @ 0x80746B78
    if (!=) goto 0x0x80746bfc;
    r30 = *(0x10 + r3); // lwz @ 0x80746B84
    r3 = *(0x10 + r30); // lwz @ 0x80746B88
    r3 = *(0 + r3); // lwz @ 0x80746B8C
    if (==) goto 0x0x80746ba8;
    r3 = r3 + 0xc; // 0x80746B98
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80746bb0 */ // 0x80746BA4
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x80746BB0
    /* li r31, 0 */ // 0x80746BB4
    /* stfs f0, 0x5c(r1) */ // 0x80746BB8
    /* lfs f0, 0x34(r29) */ // 0x80746BBC
    /* stfs f0, 0x6c(r1) */ // 0x80746BC0
    /* lfs f0, 0x38(r29) */ // 0x80746BC4
    /* stfs f0, 0x7c(r1) */ // 0x80746BC8
    r3 = *(0x14 + r30); // lwz @ 0x80746BCC
    r3 = *(0 + r3); // lwz @ 0x80746BD0
    if (==) goto 0x0x80746be8;
    /* li r4, 0 */ // 0x80746BE0
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x80746BE8
    r30 = r30 + 4; // 0x80746BEC
    if (<) goto 0x0x80746bcc;
    /* b 0x80746ccc */ // 0x80746BF8
}