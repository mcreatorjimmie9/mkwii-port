/* Function at 0x806E3578, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_806E3578(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806E3584
    /* lis r31, 0 */ // 0x806E3588
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = *(0 + r31); // lwz @ 0x806E359C
    FUN_806E6B18(); // bl 0x806E6B18
    if (==) goto 0x0x806e36c0;
    r7 = *(0 + r31); // lwz @ 0x806E35AC
    /* li r0, 3 */ // 0x806E35B0
    /* li r6, -1 */ // 0x806E35B4
    /* li r5, 0 */ // 0x806E35B8
    r3 = *(0x291c + r7); // lwz @ 0x806E35BC
    /* mulli r3, r3, 0x58 */ // 0x806E35C0
    r3 = r7 + r3; // 0x806E35C4
    r4 = *(0x59 + r3); // lbz @ 0x806E35C8
    /* mtctr r0 */ // 0x806E35CC
    if (<) goto 0x0x806e35ec;
    if (>=) goto 0x0x806e35ec;
    r3 = r7 + r5; // 0x806E35E0
    r0 = *(0x2920 + r3); // lbz @ 0x806E35E4
    /* b 0x806e35f0 */ // 0x806E35E8
    /* li r0, 0xff */ // 0x806E35EC
    if (!=) goto 0x0x806e3604;
    r6 = r6 + 1; // 0x806E35FC
    if (==) goto 0x0x806e36a8;
    /* addic. r5, r5, 1 */ // 0x806E3604
    if (<) goto 0x0x806e3620;
    if (>=) goto 0x0x806e3620;
    r3 = r7 + r5; // 0x806E3614
    r0 = *(0x2920 + r3); // lbz @ 0x806E3618
    /* b 0x806e3624 */ // 0x806E361C
    /* li r0, 0xff */ // 0x806E3620
    if (!=) goto 0x0x806e3638;
    r6 = r6 + 1; // 0x806E3630
    if (==) goto 0x0x806e36a8;
    /* addic. r5, r5, 1 */ // 0x806E3638
    if (<) goto 0x0x806e3654;
    if (>=) goto 0x0x806e3654;
    r3 = r7 + r5; // 0x806E3648
    r0 = *(0x2920 + r3); // lbz @ 0x806E364C
    /* b 0x806e3658 */ // 0x806E3650
    /* li r0, 0xff */ // 0x806E3654
    if (!=) goto 0x0x806e366c;
    r6 = r6 + 1; // 0x806E3664
    if (==) goto 0x0x806e36a8;
    /* addic. r5, r5, 1 */ // 0x806E366C
    if (<) goto 0x0x806e3688;
    if (>=) goto 0x0x806e3688;
    r3 = r7 + r5; // 0x806E367C
    r0 = *(0x2920 + r3); // lbz @ 0x806E3680
    /* b 0x806e368c */ // 0x806E3684
    /* li r0, 0xff */ // 0x806E3688
    if (!=) goto 0x0x806e36a0;
    r6 = r6 + 1; // 0x806E3698
    if (==) goto 0x0x806e36a8;
    r5 = r5 + 1; // 0x806E36A0
    if (counter-- != 0) goto 0x0x806e35d0;
    r0 = r6 * r29; // 0x806E36A8
    r4 = r28;
    r5 = r29;
    r3 = r27 + r0; // 0x806E36B4
    r3 = r3 + 0x14; // 0x806E36B8
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x806E36C4
    return;
}