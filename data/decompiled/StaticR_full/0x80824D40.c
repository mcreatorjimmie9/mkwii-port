/* Function at 0x80824D40, size=420 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 7 function(s) */

int FUN_80824D40(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x80824D48
    *(0x34 + r1) = r0; // stw @ 0x80824D4C
    /* stmw r25, 0x14(r1) */ // 0x80824D50
    r27 = r3;
    r28 = r4;
    r0 = *(0 + r5); // lbz @ 0x80824D5C
    if (==) goto 0x0x80824d70;
    /* li r3, 0 */ // 0x80824D68
    /* b 0x80824ed0 */ // 0x80824D6C
    /* li r29, 0 */ // 0x80824D70
    /* lis r25, 0 */ // 0x80824D74
    /* lis r26, 0 */ // 0x80824D78
    /* b 0x80824eb8 */ // 0x80824D7C
    r3 = r30;
    r4 = r28;
    /* li r5, 0 */ // 0x80824D88
    FUN_8082C568(r3, r4, r5); // bl 0x8082C568
    if (==) goto 0x0x80824eb8;
    r0 = *(0x78 + r30); // lwz @ 0x80824D98
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80824D9C
    if (!=) goto 0x0x80824dac;
    /* li r0, 1 */ // 0x80824DA4
    /* b 0x80824db8 */ // 0x80824DA8
    r3 = r28;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* li r0, 1 */ // 0x80824DB4
    if (==) goto 0x0x80824eb8;
    r3 = *(0 + r28); // lwz @ 0x80824DC0
    r3 = *(4 + r3); // lwz @ 0x80824DC4
    r0 = *(0x14 + r3); // lwz @ 0x80824DC8
    /* rlwinm. r31, r0, 0x1d, 0x1f, 0x1f */ // 0x80824DCC
    if (==) goto 0x0x80824e30;
    r5 = *(4 + r30); // lwz @ 0x80824DD4
    /* li r4, 1 */ // 0x80824DD8
    /* li r3, 0 */ // 0x80824DDC
    if (!=) goto 0x0x80824df8;
    r0 = *(0x2c0 + r30); // lhz @ 0x80824DE8
    if (!=) goto 0x0x80824df8;
    /* li r3, 1 */ // 0x80824DF4
    if (!=) goto 0x0x80824e28;
    /* li r3, 0 */ // 0x80824E04
    if (!=) goto 0x0x80824e1c;
    r0 = *(0x1a8 + r30); // lhz @ 0x80824E0C
    if (!=) goto 0x0x80824e1c;
    /* li r3, 1 */ // 0x80824E18
    if (!=) goto 0x0x80824e28;
    /* li r4, 0 */ // 0x80824E24
    if (==) goto 0x0x80824eb8;
    r3 = r30;
    FUN_8082AFA8(r4, r3); // bl 0x8082AFA8
    if (==) goto 0x0x80824e58;
    if (!=) goto 0x0x80824e58;
    r3 = r30;
    /* li r4, 0 */ // 0x80824E4C
    FUN_8082E9D4(r3, r4); // bl 0x8082E9D4
    /* b 0x80824eb8 */ // 0x80824E54
    /* slwi r0, r29, 2 */ // 0x80824E58
    r29 = r29 + 1; // 0x80824E5C
    r3 = r27 + r0; // 0x80824E60
    *(0x264 + r3) = r30; // stw @ 0x80824E64
    r0 = *(0x78 + r30); // lwz @ 0x80824E68
    /* clrlwi. r0, r0, 0x1f */ // 0x80824E6C
    if (==) goto 0x0x80824e9c;
    if (!=) goto 0x0x80824e9c;
    r0 = *(0x6c + r30); // lbz @ 0x80824E7C
    r4 = r30;
    r3 = *(0 + r25); // lwz @ 0x80824E84
    /* mulli r0, r0, 0x248 */ // 0x80824E88
    r3 = *(0x14 + r3); // lwz @ 0x80824E8C
    r3 = r3 + r0; // 0x80824E90
    r3 = r3 + 0xb4; // 0x80824E94
    FUN_80820240(r3); // bl 0x80820240
    r3 = r30;
    r4 = r28;
    r5 = r31;
    FUN_8082E824(r3, r3, r4, r5); // bl 0x8082E824
    if (<) goto 0x0x80824eb8;
    /* li r29, 0xf */ // 0x80824EB4
    r3 = *(0 + r26); // lwz @ 0x80824EB8
    FUN_80815A64(); // bl 0x80815A64
    r30 = r3;
    if (!=) goto 0x0x80824d80;
    r3 = r29;
    r0 = *(0x34 + r1); // lwz @ 0x80824ED4
    return;
}