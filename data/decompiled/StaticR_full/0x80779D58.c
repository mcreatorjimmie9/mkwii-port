/* Function at 0x80779D58, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80779D58(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80779D60
    *(0xc + r1) = r31; // stw @ 0x80779D68
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80779D70
    r4 = *(0 + r4); // lwz @ 0x80779D74
    r0 = *(0xe0 + r3); // lwz @ 0x80779D78
    r4 = *(0x20 + r4); // lwz @ 0x80779D7C
    if (<=) goto 0x0x80779e58;
    r0 = *(0xb8 + r3); // lwz @ 0x80779D88
    if (<) goto 0x0x80779de4;
    /* li r5, -1 */ // 0x80779D94
    /* li r6, 0 */ // 0x80779D98
    *(0xb4 + r3) = r0; // sth @ 0x80779D9C
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc4 + r3); // lwz @ 0x80779DA4
    *(0xb8 + r3) = r5; // stw @ 0x80779DA8
    r5 = *(0xc8 + r3); // lwz @ 0x80779DAC
    *(0xbc + r3) = r6; // stw @ 0x80779DB0
    /* lhzx r0, r4, r0 */ // 0x80779DB4
    /* mulli r0, r0, 0x1c */ // 0x80779DB8
    r30 = r5 + r0; // 0x80779DBC
    r3 = r30 + 4; // 0x80779DC0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80779e0c;
    r3 = *(0xcc + r31); // lwz @ 0x80779DD0
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80779e0c */ // 0x80779DE0
    r4 = *(0xbc + r3); // lwz @ 0x80779DE4
    r0 = *(0xb4 + r3); // lhz @ 0x80779DE8
    r4 = r4 + 1; // 0x80779DEC
    *(0xbc + r3) = r4; // stw @ 0x80779DF0
    r4 = *(0xc4 + r3); // lwz @ 0x80779DF4
    /* slwi r0, r0, 1 */ // 0x80779DF8
    r3 = *(0xc8 + r3); // lwz @ 0x80779DFC
    /* lhzx r0, r4, r0 */ // 0x80779E00
    /* mulli r0, r0, 0x1c */ // 0x80779E04
    r30 = r3 + r0; // 0x80779E08
    r3 = r30 + 0x10; // 0x80779E0C
}