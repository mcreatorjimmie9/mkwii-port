/* Function at 0x8075C12C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8075C12C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8075C140
    r0 = *(0xb8 + r3); // lwz @ 0x8075C144
    if (<) goto 0x0x8075c1a0;
    /* li r5, -1 */ // 0x8075C150
    /* li r6, 0 */ // 0x8075C154
    *(0xb4 + r3) = r0; // sth @ 0x8075C158
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc4 + r3); // lwz @ 0x8075C160
    *(0xb8 + r3) = r5; // stw @ 0x8075C164
    r5 = *(0xc8 + r3); // lwz @ 0x8075C168
    *(0xbc + r3) = r6; // stw @ 0x8075C16C
    /* lhzx r0, r4, r0 */ // 0x8075C170
    /* mulli r0, r0, 0x1c */ // 0x8075C174
    r30 = r5 + r0; // 0x8075C178
    r3 = r30 + 4; // 0x8075C17C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8075c1c8;
    r3 = *(0xcc + r31); // lwz @ 0x8075C18C
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x8075c1c8 */ // 0x8075C19C
    r4 = *(0xbc + r3); // lwz @ 0x8075C1A0
    r0 = *(0xb4 + r3); // lhz @ 0x8075C1A4
    r4 = r4 + 1; // 0x8075C1A8
    *(0xbc + r3) = r4; // stw @ 0x8075C1AC
    r4 = *(0xc4 + r3); // lwz @ 0x8075C1B0
}