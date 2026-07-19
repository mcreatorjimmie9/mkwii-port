/* Function at 0x806A0804, size=312 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806A0804(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A0818
    r30 = r3;
    r5 = *(0x64 + r3); // lwz @ 0x806A0820
    r0 = *(8 + r5); // lwz @ 0x806A0824
    if (!=) goto 0x0x806a083c;
    r0 = *(0x84 + r3); // lwz @ 0x806A0830
    if (!=) goto 0x0x806a0924;
    r0 = *(0x80 + r3); // lbz @ 0x806A083C
    if (!=) goto 0x0x806a0924;
    r6 = *(0x170 + r3); // lwz @ 0x806A0848
    if (==) goto 0x0x806a08c8;
    r5 = *(0xbc + r3); // lwz @ 0x806A0854
    r0 = *(0x88 + r6); // lwz @ 0x806A0858
    r4 = *(0x84 + r6); // lwz @ 0x806A085C
    *(0x84 + r5) = r4; // stw @ 0x806A0860
    *(0x88 + r5) = r0; // stw @ 0x806A0864
    r0 = *(0x90 + r6); // lwz @ 0x806A0868
    r4 = *(0x8c + r6); // lwz @ 0x806A086C
    *(0x8c + r5) = r4; // stw @ 0x806A0870
    *(0x90 + r5) = r0; // stw @ 0x806A0874
    r0 = *(0x98 + r6); // lwz @ 0x806A0878
    r4 = *(0x94 + r6); // lwz @ 0x806A087C
    *(0x94 + r5) = r4; // stw @ 0x806A0880
    *(0x98 + r5) = r0; // stw @ 0x806A0884
    r0 = *(0xa0 + r6); // lwz @ 0x806A0888
    r4 = *(0x9c + r6); // lwz @ 0x806A088C
    *(0x9c + r5) = r4; // stw @ 0x806A0890
    *(0xa0 + r5) = r0; // stw @ 0x806A0894
    r0 = *(0xa8 + r6); // lwz @ 0x806A0898
    r4 = *(0xa4 + r6); // lwz @ 0x806A089C
    *(0xa4 + r5) = r4; // stw @ 0x806A08A0
    *(0xa8 + r5) = r0; // stw @ 0x806A08A4
    r0 = *(0xb0 + r6); // lwz @ 0x806A08A8
    r4 = *(0xac + r6); // lwz @ 0x806A08AC
    *(0xac + r5) = r4; // stw @ 0x806A08B0
    *(0xb0 + r5) = r0; // stw @ 0x806A08B4
    r5 = *(0x170 + r3); // lwz @ 0x806A08B8
    r4 = *(0xbc + r3); // lwz @ 0x806A08BC
    r0 = *(0xb9 + r5); // lbz @ 0x806A08C0
    *(0xb9 + r4) = r0; // stb @ 0x806A08C4
    r3 = r3 + 0xa8; // 0x806A08C8
    FUN_80666B5C(r3); // bl 0x80666B5C
    r4 = *(0x170 + r30); // lwz @ 0x806A08D0
    r3 = r30 + 0xa8; // 0x806A08D4
    /* neg r0, r4 */ // 0x806A08D8
    r0 = r0 | r4; // 0x806A08DC
    /* srwi r4, r0, 0x1f */ // 0x806A08E0
    FUN_80666B70(r3); // bl 0x80666B70
    r3 = r30 + 0xa8; // 0x806A08E8
    FUN_80666C1C(r3); // bl 0x80666C1C
    r3 = *(0x64 + r30); // lwz @ 0x806A08F0
    r0 = *(8 + r3); // lwz @ 0x806A08F4
    if (!=) goto 0x0x806a090c;
    r0 = *(0x84 + r30); // lwz @ 0x806A0900
    if (!=) goto 0x0x806a0924;
    r0 = *(0x80 + r30); // lbz @ 0x806A090C
    if (!=) goto 0x0x806a0924;
    r4 = r31;
    r3 = r30 + 0x68; // 0x806A091C
    FUN_8064E054(r4, r3); // bl 0x8064E054
    r0 = *(0x14 + r1); // lwz @ 0x806A0924
    r31 = *(0xc + r1); // lwz @ 0x806A0928
    r30 = *(8 + r1); // lwz @ 0x806A092C
    return;
}