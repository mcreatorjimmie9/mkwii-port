/* Function at 0x80666C84, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80666C84(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80666C98
    r31 = r31 + 0; // 0x80666C9C
    *(0x18 + r1) = r30; // stw @ 0x80666CA0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80666CA8
    r29 = r3;
    if (==) goto 0x0x80666cfc;
    r12 = *(0 + r30); // lwz @ 0x80666CB4
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x80666CBC
    /* mtctr r12 */ // 0x80666CC0
    /* bctrl  */ // 0x80666CC4
    /* b 0x80666ce0 */ // 0x80666CC8
    if (!=) goto 0x0x80666cdc;
    /* li r0, 1 */ // 0x80666CD4
    /* b 0x80666cec */ // 0x80666CD8
    r3 = *(0 + r3); // lwz @ 0x80666CDC
    if (!=) goto 0x0x80666ccc;
    /* li r0, 0 */ // 0x80666CE8
    if (==) goto 0x0x80666cfc;
    r4 = r30;
    /* b 0x80666d00 */ // 0x80666CF8
    /* li r4, 0 */ // 0x80666CFC
    if (==) goto 0x0x80666d6c;
    /* li r0, 8 */ // 0x80666D08
    r3 = r30 + 0xcd; // 0x80666D0C
    /* mtctr r0 */ // 0x80666D10
    r0 = *(0 + r3); // lbz @ 0x80666D14
    /* extsb. r0, r0 */ // 0x80666D18
    if (!=) goto 0x0x80666d28;
    /* li r0, 0 */ // 0x80666D20
    /* b 0x80666d44 */ // 0x80666D24
    if (!=) goto 0x0x80666d38;
    /* li r0, 1 */ // 0x80666D30
    /* b 0x80666d44 */ // 0x80666D34
    r3 = r3 + 1; // 0x80666D38
    if (counter-- != 0) goto 0x0x80666d14;
    /* li r0, 0 */ // 0x80666D40
    if (!=) goto 0x0x80666d6c;
    r0 = *(0xc + r29); // lwz @ 0x80666D4C
    r3 = *(4 + r29); // lwz @ 0x80666D50
    /* mulli r0, r0, 0x1c */ // 0x80666D54
    r3 = r3 + r0; // 0x80666D58
    FUN_80655164(); // bl 0x80655164
    r3 = *(0xc + r29); // lwz @ 0x80666D60
    r0 = r3 + 1; // 0x80666D64
    *(0xc + r29) = r0; // stw @ 0x80666D68
    r0 = *(0x24 + r1); // lwz @ 0x80666D6C
    r31 = *(0x1c + r1); // lwz @ 0x80666D70
    r30 = *(0x18 + r1); // lwz @ 0x80666D74
    r29 = *(0x14 + r1); // lwz @ 0x80666D78
    return;
}