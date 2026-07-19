/* Function at 0x8064CF44, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8064CF44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064CF50
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8064CF58
    if (!=) goto 0x0x8064cf80;
    /* li r4, 0 */ // 0x8064CF64
    r3 = r3 + 0x418; // 0x8064CF68
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0xb24; // 0x8064CF70
    /* li r4, 0x13ca */ // 0x8064CF74
    /* li r5, 0 */ // 0x8064CF78
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x8064CF80
    r31 = *(0xc + r1); // lwz @ 0x8064CF84
    return;
}