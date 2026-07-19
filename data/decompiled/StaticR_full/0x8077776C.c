/* Function at 0x8077776C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8077776C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80777784
    *(0x10 + r1) = r28; // stw @ 0x80777788
    r0 = *(0xbc + r3); // lwz @ 0x8077778C
    if (<) goto 0x0x807777e8;
    /* li r5, -1 */ // 0x80777798
    /* li r6, 0 */ // 0x8077779C
    *(0xb8 + r3) = r0; // sth @ 0x807777A0
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc8 + r3); // lwz @ 0x807777A8
    *(0xbc + r3) = r5; // stw @ 0x807777AC
    r5 = *(0xcc + r3); // lwz @ 0x807777B0
    *(0xc0 + r3) = r6; // stw @ 0x807777B4
    /* lhzx r0, r4, r0 */ // 0x807777B8
    /* mulli r0, r0, 0x1c */ // 0x807777BC
    r30 = r5 + r0; // 0x807777C0
    r3 = r30 + 4; // 0x807777C4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80777810;
    r3 = *(0xd0 + r31); // lwz @ 0x807777D4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80777810 */ // 0x807777E4
    r4 = *(0xc0 + r3); // lwz @ 0x807777E8
    r0 = *(0xb8 + r3); // lhz @ 0x807777EC
    r4 = r4 + 1; // 0x807777F0
    *(0xc0 + r3) = r4; // stw @ 0x807777F4
    r4 = *(0xc8 + r3); // lwz @ 0x807777F8
}