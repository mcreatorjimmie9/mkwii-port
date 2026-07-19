/* Function at 0x807060D0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_807060D0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r8, 0 */ // 0x807060D8
    *(0x24 + r1) = r0; // stw @ 0x807060DC
    /* stmw r26, 8(r1) */ // 0x807060E0
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r31 = r6;
    r30 = r7;
    r0 = *(0 + r8); // lwz @ 0x807060F8
    if (!=) goto 0x0x80706140;
    /* lis r3, 0 */ // 0x80706104
    r0 = *(0 + r3); // lbz @ 0x80706108
    /* extsb. r0, r0 */ // 0x8070610C
    if (!=) goto 0x0x80706138;
    /* lis r4, 0 */ // 0x80706114
    /* lis r6, 0 */ // 0x80706118
    r4 = r4 + 0; // 0x8070611C
    r3 = r3 + 0; // 0x80706120
    r5 = r4 + 0x1c7; // 0x80706124
    r6 = r6 + 0; // 0x80706128
    /* li r4, 0x80 */ // 0x8070612C
    /* crclr cr1eq */ // 0x80706130
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80706138
    /* b 0x80706144 */ // 0x8070613C
    /* li r0, 0 */ // 0x80706140
    if (!=) goto 0x0x80706154;
    /* li r3, 0x6a */ // 0x8070614C
    /* b 0x80706280 */ // 0x80706150
    /* li r3, 8 */ // 0x80706154
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x80706170;
    /* li r3, 0x68 */ // 0x80706168
    /* b 0x80706280 */ // 0x8070616C
}