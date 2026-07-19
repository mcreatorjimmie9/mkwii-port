/* Function at 0x805E6E0C, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805E6E0C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r3, 0 */ // 0x805E6E18
    *(0x14 + r1) = r0; // stw @ 0x805E6E1C
    *(0xc + r1) = r31; // stw @ 0x805E6E20
    r31 = r8;
    *(8 + r1) = r30; // stw @ 0x805E6E28
    r30 = r7;
    if (==) goto 0x0x805e6eac;
    if (!=) goto 0x0x805e6eac;
    /* lis r3, 0 */ // 0x805E6E3C
    r4 = r6;
    r3 = r3 + 0; // 0x805E6E44
    r3 = r3 + 0xc; // 0x805E6E48
    /* crclr cr1eq */ // 0x805E6E4C
    FUN_8063803C(r3, r4, r3, r3); // bl 0x8063803C
    r5 = r3;
    if (!=) goto 0x0x805e6e78;
    /* lis r3, 0 */ // 0x805E6E60
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805E6E68
    /* li r6, 0 */ // 0x805E6E6C
    FUN_805CFF2C(r3, r4, r6); // bl 0x805CFF2C
    /* b 0x805e6eac */ // 0x805E6E74
    if (!=) goto 0x0x805e6e98;
    /* lis r3, 0 */ // 0x805E6E80
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805E6E88
    /* li r6, 0 */ // 0x805E6E8C
    FUN_805CFF2C(r3, r4, r6); // bl 0x805CFF2C
    /* b 0x805e6eac */ // 0x805E6E94
    /* lis r3, 0 */ // 0x805E6E98
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x805E6EA0
    /* li r6, 0 */ // 0x805E6EA4
    FUN_805CFD60(r3, r4, r6); // bl 0x805CFD60
    r0 = *(0x14 + r1); // lwz @ 0x805E6EAC
    r31 = *(0xc + r1); // lwz @ 0x805E6EB0
    r30 = *(8 + r1); // lwz @ 0x805E6EB4
    return;
}