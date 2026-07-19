/* Function at 0x8065DCC4, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8065DCC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8065DCCC
    /* li r0, -1 */ // 0x8065DCD4
    *(0xc + r1) = r31; // stw @ 0x8065DCD8
    *(8 + r1) = r30; // stw @ 0x8065DCDC
    r30 = r3;
    *(0xb24 + r3) = r0; // stw @ 0x8065DCE4
    r3 = r3 + 0x66c; // 0x8065DCE8
    FUN_80649EEC(r3); // bl 0x80649EEC
    r0 = *(0x10 + r30); // lwz @ 0x8065DCF0
    if (!=) goto 0x0x8065dd7c;
    /* lis r3, 0 */ // 0x8065DCFC
    r3 = *(0 + r3); // lwz @ 0x8065DD00
    r3 = *(0 + r3); // lwz @ 0x8065DD04
    r30 = *(0x25c + r3); // lwz @ 0x8065DD08
    if (!=) goto 0x0x8065dd1c;
    /* li r30, 0 */ // 0x8065DD14
    /* b 0x8065dd70 */ // 0x8065DD18
    /* lis r31, 0 */ // 0x8065DD1C
    r31 = r31 + 0; // 0x8065DD20
    if (==) goto 0x0x8065dd6c;
    r12 = *(0 + r30); // lwz @ 0x8065DD28
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065DD30
    /* mtctr r12 */ // 0x8065DD34
    /* bctrl  */ // 0x8065DD38
    /* b 0x8065dd54 */ // 0x8065DD3C
    if (!=) goto 0x0x8065dd50;
    /* li r0, 1 */ // 0x8065DD48
    /* b 0x8065dd60 */ // 0x8065DD4C
    r3 = *(0 + r3); // lwz @ 0x8065DD50
    if (!=) goto 0x0x8065dd40;
    /* li r0, 0 */ // 0x8065DD5C
    if (==) goto 0x0x8065dd6c;
    /* b 0x8065dd70 */ // 0x8065DD68
    /* li r30, 0 */ // 0x8065DD6C
    r3 = r30;
    /* li r4, 0 */ // 0x8065DD74
    FUN_80663AB4(r3, r4); // bl 0x80663AB4
    r0 = *(0x14 + r1); // lwz @ 0x8065DD7C
    r31 = *(0xc + r1); // lwz @ 0x8065DD80
    r30 = *(8 + r1); // lwz @ 0x8065DD84
    return;
}