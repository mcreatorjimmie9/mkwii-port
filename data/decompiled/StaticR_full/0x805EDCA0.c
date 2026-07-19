/* Function at 0x805EDCA0, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805EDCA0(int r3, int r4, int r5, int r6, int r7, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x805EDCAC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r0 = *(0x28 + r3); // lwz @ 0x805EDCC4
    if (!=) goto 0x0x805edd90;
    r0 = *(4 + r3); // lwz @ 0x805EDCD0
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805EDCD4
    if (==) goto 0x0x805edd38;
    r0 = *(0x3c + r3); // lwz @ 0x805EDCDC
    /* li r3, 0 */ // 0x805EDCE0
    if (==) goto 0x0x805edcf8;
    if (==) goto 0x0x805edd04;
    /* b 0x805edd10 */ // 0x805EDCF4
    /* lis r3, 0 */ // 0x805EDCF8
    r3 = *(0 + r3); // lwz @ 0x805EDCFC
    /* b 0x805edd10 */ // 0x805EDD00
    /* lis r3, 0 */ // 0x805EDD04
    r3 = r3 + 0; // 0x805EDD08
    r3 = *(4 + r3); // lwz @ 0x805EDD0C
    r4 = *(0x10 + r3); // lwz @ 0x805EDD10
    /* li r3, 0x44 */ // 0x805EDD14
    /* li r5, 4 */ // 0x805EDD18
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edd8c;
    r4 = r27;
    /* li r5, 2 */ // 0x805EDD2C
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805edd8c */ // 0x805EDD34
    r0 = *(0x3c + r3); // lwz @ 0x805EDD38
    /* li r3, 0 */ // 0x805EDD3C
    if (==) goto 0x0x805edd54;
    if (==) goto 0x0x805edd60;
    /* b 0x805edd6c */ // 0x805EDD50
    /* lis r3, 0 */ // 0x805EDD54
    r3 = *(0 + r3); // lwz @ 0x805EDD58
    /* b 0x805edd6c */ // 0x805EDD5C
    /* lis r3, 0 */ // 0x805EDD60
    r3 = r3 + 0; // 0x805EDD64
    r3 = *(4 + r3); // lwz @ 0x805EDD68
    r4 = *(0x10 + r3); // lwz @ 0x805EDD6C
    /* li r3, 0x3c */ // 0x805EDD70
    /* li r5, 4 */ // 0x805EDD74
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edd8c;
    r4 = r27;
    FUN_805E5470(r5, r4); // bl 0x805E5470
    *(0x28 + r27) = r3; // stw @ 0x805EDD8C
    r3 = *(0x28 + r27); // lwz @ 0x805EDD90
    FUN_805E78D8(r4); // bl 0x805E78D8
    r0 = *(0x3c + r27); // lwz @ 0x805EDD98
    /* li r6, 0 */ // 0x805EDD9C
    if (==) goto 0x0x805eddb4;
    if (==) goto 0x0x805eddc0;
    /* b 0x805eddcc */ // 0x805EDDB0
    /* lis r3, 0 */ // 0x805EDDB4
    r6 = *(0 + r3); // lwz @ 0x805EDDB8
    /* b 0x805eddcc */ // 0x805EDDBC
    /* lis r3, 0 */ // 0x805EDDC0
    r3 = r3 + 0; // 0x805EDDC4
    r6 = *(4 + r3); // lwz @ 0x805EDDC8
    r0 = *(0 + r29); // lwz @ 0x805EDDCC
    r4 = r28;
    *(8 + r1) = r0; // stw @ 0x805EDDD4
    r9 = r30;
    r10 = r31;
    r0 = *(0xc + r27); // lwz @ 0x805EDDE4
}