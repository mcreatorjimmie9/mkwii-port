/* Function at 0x8061CB64, size=212 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_8061CB64(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r21 */
    /* lis r8, 0 */ // 0x8061CB6C
    *(0x54 + r1) = r0; // stw @ 0x8061CB70
    /* stmw r21, 0x24(r1) */ // 0x8061CB74
    /* lis r22, 0 */ // 0x8061CB78
    /* lis r23, 0 */ // 0x8061CB7C
    /* lis r24, 0 */ // 0x8061CB80
    /* lis r25, 0 */ // 0x8061CB84
    /* lis r26, 0 */ // 0x8061CB88
    r27 = r3;
    r28 = r4;
    r22 = r22 + 0; // 0x8061CB98
    r23 = r23 + 0; // 0x8061CB9C
    r24 = r24 + 0; // 0x8061CBA0
    r25 = r25 + 0; // 0x8061CBA4
    r26 = r26 + 0; // 0x8061CBA8
    /* li r29, 0 */ // 0x8061CBAC
    /* li r31, 0 */ // 0x8061CBB0
    r7 = *(0 + r8); // lwzu @ 0x8061CBB4
    *(8 + r1) = r7; // stw @ 0x8061CBB8
    r6 = *(4 + r8); // lwz @ 0x8061CBBC
    r5 = *(8 + r8); // lwz @ 0x8061CBC0
    r0 = *(0xc + r8); // lwz @ 0x8061CBC4
    *(0xc + r1) = r6; // stw @ 0x8061CBC8
    *(0x10 + r1) = r5; // stw @ 0x8061CBCC
    *(0x14 + r1) = r0; // stw @ 0x8061CBD0
    /* b 0x8061cd04 */ // 0x8061CBD4
    if (==) goto 0x0x8061cbe8;
    if (!=) goto 0x0x8061cc84;
    r3 = *(0x14 + r3); // lwz @ 0x8061CBE8
    r3 = *(0 + r3); // lwz @ 0x8061CBEC
    r0 = *(0 + r3); // lwz @ 0x8061CBF0
    if (!=) goto 0x0x8061cc28;
    /* li r3, 0xd0 */ // 0x8061CBFC
    FUN_805E3430(r3); // bl 0x805E3430
    r21 = r3;
    if (==) goto 0x0x8061cc50;
    r4 = *(0x14 + r27); // lwz @ 0x8061CC10
    /* li r5, 2 */ // 0x8061CC14
    /* li r6, 0 */ // 0x8061CC18
    FUN_806282C0(r5, r6); // bl 0x806282C0
    *(0xc + r21) = r22; // stw @ 0x8061CC20
    /* b 0x8061cc50 */ // 0x8061CC24
    /* li r3, 0xd0 */ // 0x8061CC28
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r21 = r3;
}