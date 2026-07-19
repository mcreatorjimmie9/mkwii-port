/* Function at 0x807EBD1C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EBD1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EBD2C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EBD34
    r30 = r3;
    if (==) goto 0x0x807ebd80;
    /* addic. r0, r3, 0xb0 */ // 0x807EBD40
    if (==) goto 0x0x807ebd70;
    r0 = *(0xb8 + r3); // lwz @ 0x807EBD48
    /* lis r4, 0 */ // 0x807EBD4C
    r4 = r4 + 0; // 0x807EBD50
    *(0xb0 + r3) = r4; // stw @ 0x807EBD54
    if (==) goto 0x0x807ebd70;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EBD68
    *(0xb8 + r30) = r0; // stw @ 0x807EBD6C
    if (<=) goto 0x0x807ebd80;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EBD84
    r30 = *(8 + r1); // lwz @ 0x807EBD88
    r0 = *(0x14 + r1); // lwz @ 0x807EBD8C
}