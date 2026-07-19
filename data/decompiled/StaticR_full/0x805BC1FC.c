/* Function at 0x805BC1FC, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_805BC1FC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x805BC208
    /* lis r31, 0 */ // 0x805BC20C
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r3 = *(0 + r31); // lwz @ 0x805BC220
    FUN_805E0FE0(); // bl 0x805E0FE0
    r30 = r3;
    if (!=) goto 0x0x805bc2a0;
    r3 = *(0 + r31); // lwz @ 0x805BC234
    r4 = r26;
    /* li r6, 0 */ // 0x805BC240
    FUN_805E12C8(r4, r5, r6); // bl 0x805E12C8
    r30 = r3;
    if (!=) goto 0x0x805bc288;
    r3 = *(0 + r31); // lwz @ 0x805BC254
    r5 = r27;
    r4 = *(8 + r1); // lwz @ 0x805BC25C
    r6 = r28;
    r7 = r29;
    FUN_805E145C(r5, r6, r7); // bl 0x805E145C
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x805BC270
    r4 = *(8 + r1); // lwz @ 0x805BC274
    FUN_805E16AC(r7); // bl 0x805E16AC
    if (==) goto 0x0x805bc288;
    r30 = r3;
    /* lis r3, 0 */ // 0x805BC288
    r3 = *(0 + r3); // lwz @ 0x805BC28C
    FUN_805E1180(r3); // bl 0x805E1180
    if (==) goto 0x0x805bc2a0;
    r30 = r3;
    r3 = r30;
    r0 = *(0x34 + r1); // lwz @ 0x805BC2A8
    return;
}