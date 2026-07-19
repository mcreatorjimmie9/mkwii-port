/* Function at 0x80767B48, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80767B48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80767B58
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80767B60
    r30 = r3;
    if (==) goto 0x0x80767bd8;
    /* lis r5, 0 */ // 0x80767B6C
    /* li r4, 1 */ // 0x80767B70
    r5 = r5 + 0; // 0x80767B74
    *(0 + r3) = r5; // stw @ 0x80767B78
    r0 = r5 + 0xec; // 0x80767B7C
    *(0xb0 + r3) = r0; // stw @ 0x80767B80
    r3 = *(0xdc + r3); // lwz @ 0x80767B84
    FUN_80773040(r5); // bl 0x80773040
    r3 = *(0xe0 + r30); // lwz @ 0x80767B8C
    if (==) goto 0x0x80767bac;
    r12 = *(0 + r3); // lwz @ 0x80767B98
    /* li r4, 1 */ // 0x80767B9C
    r12 = *(8 + r12); // lwz @ 0x80767BA0
    /* mtctr r12 */ // 0x80767BA4
    /* bctrl  */ // 0x80767BA8
    /* addic. r0, r30, 0xb0 */ // 0x80767BAC
    if (==) goto 0x0x80767bc8;
    /* lis r4, 0 */ // 0x80767BB4
    r3 = *(0xc4 + r30); // lwz @ 0x80767BB8
    r4 = r4 + 0; // 0x80767BBC
    *(0xb0 + r30) = r4; // stw @ 0x80767BC0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80767bd8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80767BDC
    r30 = *(8 + r1); // lwz @ 0x80767BE0
    r0 = *(0x14 + r1); // lwz @ 0x80767BE4
    return;
}