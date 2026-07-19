/* Function at 0x8066E3B0, size=100 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r14 */
/* Calls: 2 function(s) */

int FUN_8066E3B0(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r14 */
    *(0xa4 + r1) = r0; // stw @ 0x8066E3BC
    /* stmw r14, 0x58(r1) */ // 0x8066E3C0
    r26 = r3;
    r15 = r4;
    r14 = r5;
    if (==) goto 0x0x8066e6dc;
    r4 = r14;
    FUN_8066E240(r4); // bl 0x8066E240
    r3 = *(4 + r26); // lwz @ 0x8066E3DC
    /* slwi r16, r15, 2 */ // 0x8066E3E0
    /* lwzx r0, r3, r16 */ // 0x8066E3E4
    if (==) goto 0x0x8066e6dc;
    r4 = *(0x2c + r26); // lwz @ 0x8066E3F0
    /* li r3, 0xb8 */ // 0x8066E3F4
    /* li r5, 4 */ // 0x8066E3F8
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x8066e420;
    /* lis r5, 0 */ // 0x8066E40C
    /* li r4, 7 */ // 0x8066E410
}