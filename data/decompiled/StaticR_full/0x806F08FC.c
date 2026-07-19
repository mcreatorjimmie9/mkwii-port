/* Function at 0x806F08FC, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806F08FC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806F0908
    r27 = r3;
    /* li r29, 0 */ // 0x806F0910
    /* lis r30, 0 */ // 0x806F0914
    /* li r31, 1 */ // 0x806F0918
    r7 = *(0 + r30); // lwz @ 0x806F091C
    /* clrlwi r0, r29, 0x18 */ // 0x806F0920
    r0 = r31 << r0; // slw
    r3 = *(0x291c + r7); // lwz @ 0x806F0928
    /* mulli r3, r3, 0x58 */ // 0x806F092C
    r4 = r7 + r3; // 0x806F0930
    r3 = *(0x48 + r4); // lwz @ 0x806F0934
    /* and. r3, r0, r3 */ // 0x806F0938
    if (==) goto 0x0x806f0a5c;
    r3 = *(0x59 + r4); // lbz @ 0x806F0940
    if (==) goto 0x0x806f0a5c;
    r5 = r29 rlwinm 5; // rlwinm
    r6 = r29 rlwinm 2; // rlwinm
    r3 = r7 + r5; // 0x806F0954
    r4 = *(0x27a0 + r3); // lwz @ 0x806F0958
    r3 = r6 + r7; // 0x806F095C
    /* mulli r4, r4, 0x30 */ // 0x806F0960
    r3 = r4 + r3; // 0x806F0964
    r3 = *(0x150 + r3); // lwz @ 0x806F0968
    r3 = *(4 + r3); // lwz @ 0x806F096C
    r4 = *(8 + r3); // lwz @ 0x806F0970
    if (==) goto 0x0x806f0a5c;
    r3 = *(4 + r27); // lwz @ 0x806F097C
    r3 = r3 | r0; // 0x806F0984
    *(4 + r27) = r3; // stw @ 0x806F0988
    if (!=) goto 0x0x806f0a5c;
    r4 = *(0 + r30); // lwz @ 0x806F0990
    r3 = *(8 + r27); // lwz @ 0x806F0994
    r5 = r4 + r5; // 0x806F0998
    r4 = r6 + r4; // 0x806F099C
    r5 = *(0x27a0 + r5); // lwz @ 0x806F09A0
    r3 = r3 | r0; // 0x806F09A4
    /* mulli r5, r5, 0x30 */ // 0x806F09A8
    r4 = r5 + r4; // 0x806F09AC
    r4 = *(0x150 + r4); // lwz @ 0x806F09B0
    r4 = *(4 + r4); // lwz @ 0x806F09B4
    r28 = *(0 + r4); // lwz @ 0x806F09B8
    *(8 + r27) = r3; // stw @ 0x806F09BC
    r3 = *(0x17 + r28); // lbz @ 0x806F09C0
    if (!=) goto 0x0x806f09d8;
    r3 = *(0xc + r27); // lwz @ 0x806F09CC
    r0 = r3 | r0; // 0x806F09D0
    *(0xc + r27) = r0; // stw @ 0x806F09D4
    /* clrlwi r3, r29, 0x18 */ // 0x806F09D8
    r0 = *(0 + r28); // lwz @ 0x806F09DC
    /* mulli r3, r3, 0x30 */ // 0x806F09E0
    r4 = r28 + 0x18; // 0x806F09E4
    /* li r5, 0xc */ // 0x806F09E8
    r26 = r27 + r3; // 0x806F09EC
    *(0x20 + r26) = r0; // stw @ 0x806F09F0
    r3 = r26 + 0x40; // 0x806F09F4
    r0 = *(0x16 + r28); // lbz @ 0x806F09F8
    *(0x34 + r26) = r0; // stw @ 0x806F09FC
    r0 = *(8 + r28); // lwz @ 0x806F0A00
    *(0x38 + r26) = r0; // stw @ 0x806F0A04
    r0 = *(4 + r28); // lwz @ 0x806F0A08
    *(0x3c + r26) = r0; // stw @ 0x806F0A0C
    r0 = *(0x24 + r28); // lbz @ 0x806F0A10
    *(0x4c + r26) = r0; // stb @ 0x806F0A14
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0xe + r28); // lhz @ 0x806F0A1C
    /* clrlwi r0, r3, 0x18 */ // 0x806F0A20
    *(0x24 + r26) = r0; // stw @ 0x806F0A24
    r0 = r3 rlwinm 0x18; // rlwinm
    *(0x2c + r26) = r0; // stw @ 0x806F0A2C
    r0 = *(0x14 + r28); // lbz @ 0x806F0A30
    *(0x4d + r26) = r0; // stb @ 0x806F0A34
    r3 = *(0x10 + r28); // lhz @ 0x806F0A38
}