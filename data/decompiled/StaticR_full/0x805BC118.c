/* Function at 0x805BC118, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_805BC118(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805BC124
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r0 = *(0x15 + r3); // lbz @ 0x805BC13C
    if (!=) goto 0x0x805bc150;
    /* li r0, 1 */ // 0x805BC148
    *(0x15 + r3) = r0; // stb @ 0x805BC14C
    /* lis r31, 0 */ // 0x805BC150
    /* lis r4, 0 */ // 0x805BC154
    r3 = *(0 + r31); // lwz @ 0x805BC158
    r4 = *(0 + r4); // lwz @ 0x805BC15C
    FUN_805E0FE0(r4); // bl 0x805E0FE0
    r30 = r3;
    if (!=) goto 0x0x805bc1dc;
    r3 = *(0 + r31); // lwz @ 0x805BC170
    r4 = r26;
    /* li r6, 0 */ // 0x805BC17C
    FUN_805E12C8(r4, r5, r6); // bl 0x805E12C8
    r30 = r3;
    if (!=) goto 0x0x805bc1c4;
    r3 = *(0 + r31); // lwz @ 0x805BC190
    r5 = r27;
    r4 = *(8 + r1); // lwz @ 0x805BC198
    r6 = r28;
    r7 = r29;
    FUN_805E145C(r5, r6, r7); // bl 0x805E145C
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x805BC1AC
    r4 = *(8 + r1); // lwz @ 0x805BC1B0
    FUN_805E16AC(r7); // bl 0x805E16AC
    if (==) goto 0x0x805bc1c4;
    r30 = r3;
    /* lis r3, 0 */ // 0x805BC1C4
    r3 = *(0 + r3); // lwz @ 0x805BC1C8
    FUN_805E1180(r3); // bl 0x805E1180
    if (==) goto 0x0x805bc1dc;
    r30 = r3;
    /* li r0, 0 */ // 0x805BC1DC
    *(0x15 + r25) = r0; // stb @ 0x805BC1E0
    r3 = r30;
    r0 = *(0x34 + r1); // lwz @ 0x805BC1EC
    return;
}