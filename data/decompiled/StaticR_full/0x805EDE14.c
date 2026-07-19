/* Function at 0x805EDE14, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_805EDE14(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x805EDE20
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = *(0x28 + r3); // lwz @ 0x805EDE3C
    if (!=) goto 0x0x805edf08;
    r0 = *(4 + r3); // lwz @ 0x805EDE48
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805EDE4C
    if (==) goto 0x0x805edeb0;
    r0 = *(0x3c + r3); // lwz @ 0x805EDE54
    /* li r3, 0 */ // 0x805EDE58
    if (==) goto 0x0x805ede70;
    if (==) goto 0x0x805ede7c;
    /* b 0x805ede88 */ // 0x805EDE6C
    /* lis r3, 0 */ // 0x805EDE70
    r3 = *(0 + r3); // lwz @ 0x805EDE74
    /* b 0x805ede88 */ // 0x805EDE78
    /* lis r3, 0 */ // 0x805EDE7C
    r3 = r3 + 0; // 0x805EDE80
    r3 = *(4 + r3); // lwz @ 0x805EDE84
    r4 = *(0x10 + r3); // lwz @ 0x805EDE88
    /* li r3, 0x44 */ // 0x805EDE8C
    /* li r5, 4 */ // 0x805EDE90
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edf04;
    r4 = r26;
    /* li r5, 2 */ // 0x805EDEA4
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805edf04 */ // 0x805EDEAC
    r0 = *(0x3c + r3); // lwz @ 0x805EDEB0
    /* li r3, 0 */ // 0x805EDEB4
    if (==) goto 0x0x805edecc;
    if (==) goto 0x0x805eded8;
    /* b 0x805edee4 */ // 0x805EDEC8
    /* lis r3, 0 */ // 0x805EDECC
    r3 = *(0 + r3); // lwz @ 0x805EDED0
    /* b 0x805edee4 */ // 0x805EDED4
    /* lis r3, 0 */ // 0x805EDED8
    r3 = r3 + 0; // 0x805EDEDC
    r3 = *(4 + r3); // lwz @ 0x805EDEE0
    r4 = *(0x10 + r3); // lwz @ 0x805EDEE4
    /* li r3, 0x3c */ // 0x805EDEE8
    /* li r5, 4 */ // 0x805EDEEC
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edf04;
    r4 = r26;
    FUN_805E5470(r5, r4); // bl 0x805E5470
    *(0x28 + r26) = r3; // stw @ 0x805EDF04
    r3 = *(0x28 + r26); // lwz @ 0x805EDF08
    FUN_805E78D8(r4); // bl 0x805E78D8
    r0 = *(0x3c + r26); // lwz @ 0x805EDF10
    /* li r6, 0 */ // 0x805EDF14
    if (==) goto 0x0x805edf2c;
    if (==) goto 0x0x805edf38;
    /* b 0x805edf44 */ // 0x805EDF28
    /* lis r3, 0 */ // 0x805EDF2C
    r6 = *(0 + r3); // lwz @ 0x805EDF30
    /* b 0x805edf44 */ // 0x805EDF34
    /* lis r3, 0 */ // 0x805EDF38
    r3 = r3 + 0; // 0x805EDF3C
    r6 = *(4 + r3); // lwz @ 0x805EDF40
    r0 = *(0 + r28); // lwz @ 0x805EDF44
    r4 = r27;
    *(0x10 + r1) = r0; // stw @ 0x805EDF4C
    r9 = r29;
    r0 = *(0xc + r26); // lwz @ 0x805EDF5C
    /* li r10, 0 */ // 0x805EDF60
    *(0x14 + r1) = r0; // stw @ 0x805EDF64
}