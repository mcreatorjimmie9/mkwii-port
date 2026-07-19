/* Function at 0x807066E0, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_807066E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r7, 0 */ // 0x807066E8
    *(0x34 + r1) = r0; // stw @ 0x807066EC
    /* stmw r25, 0x14(r1) */ // 0x807066F0
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r31 = r8;
    r30 = r9;
    r0 = *(0 + r7); // lwz @ 0x8070670C
    if (!=) goto 0x0x80706754;
    /* lis r3, 0 */ // 0x80706718
    r0 = *(0 + r3); // lbz @ 0x8070671C
    /* extsb. r0, r0 */ // 0x80706720
    if (!=) goto 0x0x8070674c;
    /* lis r4, 0 */ // 0x80706728
    /* lis r6, 0 */ // 0x8070672C
    r4 = r4 + 0; // 0x80706730
    r3 = r3 + 0; // 0x80706734
    r5 = r4 + 0x3d6; // 0x80706738
    r6 = r6 + 0; // 0x8070673C
    /* li r4, 0x80 */ // 0x80706740
    /* crclr cr1eq */ // 0x80706744
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x8070674C
    /* b 0x80706758 */ // 0x80706750
    /* li r0, 0 */ // 0x80706754
    if (!=) goto 0x0x80706768;
    /* li r3, 0x6a */ // 0x80706760
    /* b 0x807068b0 */ // 0x80706764
    /* li r3, 8 */ // 0x80706768
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x80706784;
    /* li r3, 0x68 */ // 0x8070677C
    /* b 0x807068b0 */ // 0x80706780
}