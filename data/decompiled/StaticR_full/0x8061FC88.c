/* Function at 0x8061FC88, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_8061FC88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8061FC90
    r5 = r5 + 0; // 0x8061FC98
    *(0x14 + r1) = r0; // stw @ 0x8061FC9C
    r4 = r5 + 0x171; // 0x8061FCA0
    if (==) goto 0x0x8061fcd0;
    r3 = r5 + 0x189; // 0x8061FCA8
    /* crclr cr1eq */ // 0x8061FCAC
    FUN_8063803C(r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061FCB4
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061FCBC
    /* li r4, 2 */ // 0x8061FCC0
    /* li r6, 0 */ // 0x8061FCC4
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    /* b 0x8061fce8 */ // 0x8061FCCC
    /* lis r3, 0 */ // 0x8061FCD0
    r5 = r4;
    r3 = *(0 + r3); // lwz @ 0x8061FCD8
    /* li r4, 0 */ // 0x8061FCDC
    /* li r6, 0 */ // 0x8061FCE0
    FUN_805CFD60(r3, r5, r4, r6); // bl 0x805CFD60
    /* lis r4, 0 */ // 0x8061FCE8
    *(0 + r4) = r3; // stw @ 0x8061FCF0
    if (==) goto 0x0x8061fd04;
    /* lis r4, 0 */ // 0x8061FCF8
    r0 = r3 + 8; // 0x8061FCFC
    *(0 + r4) = r0; // stw @ 0x8061FD00
    r0 = *(0x14 + r1); // lwz @ 0x8061FD04
    return;
}