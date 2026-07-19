/* Function at 0x80841C50, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80841C50(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x80841C68
    r28 = r3;
    r0 = *(0x29 + r3); // lbz @ 0x80841C70
    if (==) goto 0x0x80841cfc;
    r0 = *(0x18 + r3); // lwz @ 0x80841C7C
    if (==) goto 0x0x80841cc8;
    r29 = r28;
    /* li r30, 0 */ // 0x80841C8C
    /* lis r31, 0 */ // 0x80841C90
    /* b 0x80841cbc */ // 0x80841C94
    r4 = *(0xc + r29); // lwz @ 0x80841C98
    r3 = *(0 + r31); // lwz @ 0x80841C9C
    r0 = *(4 + r4); // lwz @ 0x80841CA0
    /* mulli r0, r0, 0x24 */ // 0x80841CA4
    r3 = r3 + r0; // 0x80841CA8
    r3 = r3 + 0x48; // 0x80841CAC
    FUN_80820FFC(r3); // bl 0x80820FFC
    r29 = r29 + 4; // 0x80841CB4
    r30 = r30 + 1; // 0x80841CB8
    r0 = *(8 + r28); // lwz @ 0x80841CBC
    if (<) goto 0x0x80841c98;
    /* li r0, 0 */ // 0x80841CC8
    /* li r3, 0x14 */ // 0x80841CCC
    *(4 + r28) = r3; // stw @ 0x80841CD0
    *(8 + r28) = r0; // stw @ 0x80841CD4
    *(0x29 + r28) = r0; // stb @ 0x80841CD8
    *(0x18 + r28) = r0; // stw @ 0x80841CDC
    *(0xc + r28) = r0; // stw @ 0x80841CE0
    *(0x10 + r28) = r0; // stw @ 0x80841CE4
    *(0x14 + r28) = r0; // stw @ 0x80841CE8
    *(0x1c + r28) = r0; // stb @ 0x80841CEC
    *(0x20 + r28) = r0; // stw @ 0x80841CF0
    *(0x24 + r28) = r0; // stw @ 0x80841CF4
    /* b 0x80841d08 */ // 0x80841CF8
    /* li r0, 0xa */ // 0x80841CFC
    *(0x18 + r3) = r0; // stw @ 0x80841D00
    FUN_80841990(); // bl 0x80841990
    r0 = *(0x24 + r1); // lwz @ 0x80841D08
    r31 = *(0x1c + r1); // lwz @ 0x80841D0C
    r30 = *(0x18 + r1); // lwz @ 0x80841D10
    r29 = *(0x14 + r1); // lwz @ 0x80841D14
    r28 = *(0x10 + r1); // lwz @ 0x80841D18
    return;
}