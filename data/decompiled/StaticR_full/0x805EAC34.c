/* Function at 0x805EAC34, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EAC34(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EAC3C
    *(0x14 + r1) = r0; // stw @ 0x805EAC40
    *(0xc + r1) = r31; // stw @ 0x805EAC44
    r31 = *(0x2c + r3); // lwz @ 0x805EAC48
    if (!=) goto 0x0x805eac80;
    /* lis r3, 0 */ // 0x805EAC54
    /* lis r5, 0 */ // 0x805EAC58
    /* lis r6, 0 */ // 0x805EAC5C
    /* lis r7, 0 */ // 0x805EAC60
    r3 = r3 + 0; // 0x805EAC64
    r5 = r5 + 0; // 0x805EAC68
    r6 = r6 + 0; // 0x805EAC6C
    r7 = r7 + 0; // 0x805EAC70
    /* li r4, 0x27 */ // 0x805EAC74
    /* crclr cr1eq */ // 0x805EAC78
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0x24 + r31); // lwz @ 0x805EAC80
    r31 = *(0xc + r1); // lwz @ 0x805EAC84
    r0 = *(0x14 + r1); // lwz @ 0x805EAC88
    return;
}