/* Function at 0x80773040, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80773040(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80773058
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80773060
    r28 = r3;
    if (==) goto 0x0x807730ac;
    /* li r30, 0 */ // 0x8077306C
    /* li r31, 0 */ // 0x80773070
    /* b 0x80773090 */ // 0x80773074
    r4 = *(0xc + r28); // lwz @ 0x80773078
    r3 = r28;
    /* lwzx r4, r4, r31 */ // 0x80773080
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r31 + 4; // 0x80773088
    r30 = r30 + 1; // 0x8077308C
    r0 = *(0x10 + r28); // lbz @ 0x80773090
    if (<) goto 0x0x80773078;
    if (<=) goto 0x0x807730ac;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807730AC
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x807730B4
    r29 = *(0x14 + r1); // lwz @ 0x807730B8
    r28 = *(0x10 + r1); // lwz @ 0x807730BC
    r0 = *(0x24 + r1); // lwz @ 0x807730C0
}