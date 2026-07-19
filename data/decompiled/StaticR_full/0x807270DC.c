/* Function at 0x807270DC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807270DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x807270F4
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807270FC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80727104
    r28 = r3;
    if (!=) goto 0x0x80727118;
    /* li r3, 0 */ // 0x80727110
    /* b 0x807271cc */ // 0x80727114
    r3 = r4 + 0x74; // 0x80727118
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x80727130;
    /* li r3, 0 */ // 0x80727128
    /* b 0x80727134 */ // 0x8072712C
    r3 = *(0xc + r3); // lwz @ 0x80727130
    /* li r0, 0 */ // 0x80727138
    if (==) goto 0x0x80727148;
}