/* Function at 0x8061FE10, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_8061FE10(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8061FE18
    r5 = r5 + 0; // 0x8061FE20
    *(0x14 + r1) = r0; // stw @ 0x8061FE24
    r4 = r5 + 0x1ba; // 0x8061FE28
    if (==) goto 0x0x8061fe58;
    r3 = r5 + 0x1d1; // 0x8061FE30
    /* crclr cr1eq */ // 0x8061FE34
    FUN_8063803C(r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061FE3C
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061FE44
    /* li r4, 2 */ // 0x8061FE48
    /* li r6, 0 */ // 0x8061FE4C
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    /* b 0x8061fe70 */ // 0x8061FE54
    /* lis r3, 0 */ // 0x8061FE58
    r5 = r4;
    r3 = *(0 + r3); // lwz @ 0x8061FE60
    /* li r4, 0 */ // 0x8061FE64
    /* li r6, 0 */ // 0x8061FE68
    FUN_805CFD60(r3, r5, r4, r6); // bl 0x805CFD60
    /* lis r4, 0 */ // 0x8061FE70
    *(0 + r4) = r3; // stw @ 0x8061FE78
    if (==) goto 0x0x8061fe8c;
    /* lis r4, 0 */ // 0x8061FE80
    r0 = r3 + 4; // 0x8061FE84
    *(0 + r4) = r0; // stw @ 0x8061FE88
    r0 = *(0x14 + r1); // lwz @ 0x8061FE8C
    return;
}