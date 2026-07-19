/* Function at 0x807C0ADC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C0ADC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C0AE8
    r31 = r3;
    /* lis r3, 0 */ // 0x807C0AF0
    r3 = *(0 + r3); // lwz @ 0x807C0AF4
    r4 = *(8 + r31); // lwz @ 0x807C0AF8
    FUN_8061D97C(r3); // bl 0x8061D97C
    *(4 + r31) = r3; // stw @ 0x807C0B00
    /* lis r3, 0 */ // 0x807C0B04
    r3 = *(0 + r3); // lwz @ 0x807C0B08
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (==) goto 0x0x807c0b2c;
    if (==) goto 0x0x807c0b38;
    if (==) goto 0x0x807c0b44;
    /* b 0x807c0b4c */ // 0x807C0B28
    /* li r0, 0x19 */ // 0x807C0B2C
    *(0xc + r31) = r0; // stw @ 0x807C0B30
    /* b 0x807c0b4c */ // 0x807C0B34
    /* li r0, 0x32 */ // 0x807C0B38
    *(0xc + r31) = r0; // stw @ 0x807C0B3C
    /* b 0x807c0b4c */ // 0x807C0B40
    /* li r0, 0x4b */ // 0x807C0B44
    *(0xc + r31) = r0; // stw @ 0x807C0B48
    r0 = *(0x14 + r1); // lwz @ 0x807C0B4C
    r31 = *(0xc + r1); // lwz @ 0x807C0B50
    return;
}