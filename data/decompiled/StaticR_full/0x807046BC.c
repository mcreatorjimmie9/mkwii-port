/* Function at 0x807046BC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807046BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x807046D4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807046DC
    r29 = r3;
    if (==) goto 0x0x807046fc;
    r4 = *(0x10 + r6); // lwz @ 0x807046E8
    r3 = r31;
    /* li r5, 0xa */ // 0x807046F0
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    /* b 0x80704784 */ // 0x807046F8
    r3 = *(0x18 + r6); // lwz @ 0x807046FC
    FUN_805E3430(r3, r5); // bl 0x805E3430
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x80704728;
    r4 = *(0x10 + r31); // lwz @ 0x80704714
    r3 = r31;
    /* li r5, 3 */ // 0x8070471C
}